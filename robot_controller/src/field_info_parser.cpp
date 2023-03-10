// Copyright 2021 Roots
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include <memory>

#include "robot_controller/field_info_parser.hpp"
#include "robot_controller/geometry_tools.hpp"
#include "robocup_ssl_msgs/msg/robot_id.hpp"

namespace robot_controller
{

using RobotId = robocup_ssl_msgs::msg::RobotId;
namespace tools = geometry_tools;

FieldInfoParser::FieldInfoParser() : invert_(false), team_is_yellow_(false)
{
}

void FieldInfoParser::set_invert(const bool & invert) {
  invert_ = invert;
}

void FieldInfoParser::set_team_is_yellow(const bool & team_is_yellow) {
  team_is_yellow_ = team_is_yellow;
}

void FieldInfoParser::set_detection_tracked(const TrackedFrame::SharedPtr detection_tracked)
{
  detection_tracked_ = detection_tracked;
}

void FieldInfoParser::set_geometry(const GeometryData::SharedPtr geometry)
{
  geometry_ = geometry;
}

void FieldInfoParser::set_referee(const Referee::SharedPtr referee) { 
  referee_ = referee;
}

void FieldInfoParser::set_parsed_referee(const ParsedReferee::SharedPtr parsed_referee) {
  parsed_referee_ = parsed_referee;
}

bool FieldInfoParser::extract_robot(
  const unsigned int robot_id, const bool team_is_yellow,
  TrackedRobot & my_robot) const
{
  // detection_trackedから指定された色とIDのロボット情報を抽出する
  // visibilityが低いときは情報が無いと判定する
  const double VISIBILITY_THRESHOLD = 0.01;
  for (const auto & robot : detection_tracked_->robots) {
    if (robot_id != robot.robot_id.id) {
      continue;
    }
    bool is_yellow = team_is_yellow && robot.robot_id.team_color == RobotId::TEAM_COLOR_YELLOW;
    bool is_blue = !team_is_yellow && robot.robot_id.team_color == RobotId::TEAM_COLOR_BLUE;
    if (!is_yellow && !is_blue) {
      continue;
    }
    // if((team_is_yellow && robot.robot_id.team_color != RobotId::TEAM_COLOR_YELLOW) &&
    //    (!team_is_yellow && robot.robot_id.team_color != RobotId::TEAM_COLOR_BLUE)){
    //   continue;
    // }
    if (robot.visibility.size() == 0) {
      return false;
    }
    if (robot.visibility[0] < VISIBILITY_THRESHOLD) {
      return false;
    }

    my_robot = robot;
    break;
  }
  return true;
}

bool FieldInfoParser::extract_ball(TrackedBall & my_ball) const
{
  // detection_trackedからボール情報を抽出する
  // visibilityが低いときは情報が無いと判定する
  const double VISIBILITY_THRESHOLD = 0.01;
  for (const auto & ball : detection_tracked_->balls) {
    if (ball.visibility.size() == 0) {
      return false;
    }
    if (ball.visibility[0] < VISIBILITY_THRESHOLD) {
      return false;
    }

    my_ball = ball;
    break;
  }
  return true;
}

bool FieldInfoParser::parse_goal(
  const std::shared_ptr<const RobotControl::Goal> goal,
  State & parsed_pose) const
{
  // RobotControlのgoalを解析し、目標姿勢を出力する
  // 解析に失敗したらfalseを返す
  // ここではキック処理や、レシーブ処理をしない

  // 目標姿勢を算出
  State target_pose;
  bool parse_succeeded = false;
  if (goal->pose.size() > 0) {
    if (parse_constraint_pose(goal->pose[0], target_pose)) {
      parse_succeeded = true;
    }
  }
  if (goal->line.size() > 0) {
    if (parse_constraint_line(goal->line[0], target_pose)) {
      parse_succeeded = true;
    }
  }

  if (parse_succeeded == false) {
    return false;
  }
  parsed_pose = target_pose;
  return true;
}

bool FieldInfoParser::parse_goal(
  const std::shared_ptr<const RobotControl::Goal> goal,
  const TrackedRobot & my_robot, State & parsed_pose,
  double & kick_power, double & dribble_power) const
{
  // RobotControlのgoalを解析し、目標姿勢を出力する
  // 解析に失敗したらfalseを返す
  // 衝突回避やキック、レシーブの処理も実施する

  // 目標姿勢を算出
  if (!parse_goal(goal, parsed_pose)) {
    return false;
  }

  // 以下、ボールが関わる処理のためボール情報を取得する
  TrackedBall ball;
  if (!extract_ball(ball)) {
    // ボール情報を取得できなくても正常終了
    return true;
  }

  State target;
  bool result = false;
  if (goal->reflect_shoot && parse_constraint_xy(goal->kick_target, target.x, target.y) ) {
    // ボールを受け取りながら目標へ向かって蹴るリフレクトシュート
    result = reflect_kick(target, my_robot, ball, goal->kick_pass, parsed_pose, kick_power, dribble_power);
  } 

  if (goal->receive_ball && result == false) {
    // 転がっているボールを受け取る
    result = receive_ball(my_robot, ball, parsed_pose, dribble_power);
  } 

  if (tools::distance(tools::pose_state(ball), parsed_pose) < 0.7 && result == false) {
    // 目標姿勢とボールが近ければ、ボールを操作する
    if (goal->kick_enable &&
        parse_constraint_xy(goal->kick_target, target.x, target.y))
    {
      parse_kick(target, my_robot, ball, goal->kick_pass, goal->kick_setplay, parsed_pose, kick_power, dribble_power);
    } else if (goal->dribble_enable &&
               parse_constraint_xy(goal->dribble_target, target.x, target.y))
    {
      parse_dribble(target, my_robot, ball, parsed_pose, dribble_power);
    }
  }

  // 衝突を回避する
  if (goal->avoid_obstacles) {
    auto avoidance_pose = parsed_pose;
    bool avoid_ball = false;
    // STOP_GAME中はボールから離れる
    if (parsed_referee_->is_our_setplay == false && parsed_referee_->is_inplay == false) {
      avoid_ball = true;
    }
    avoid_obstacles(my_robot, parsed_pose, ball, avoid_ball, avoidance_pose);
    parsed_pose = avoidance_pose;  // 回避姿勢を目標姿勢にセット

    // ボールプレイスメントエリアを回避する
    if (referee_->command == Referee::COMMAND_BALL_PLACEMENT_YELLOW || referee_->command == Referee::COMMAND_BALL_PLACEMENT_BLUE) {
      if (referee_->designated_position.size() > 0) {
        State designated_position;
        designated_position.x = referee_->designated_position[0].x * 0.001;  // mm to meters
        designated_position.y = referee_->designated_position[0].y * 0.001;  // mm to meters

        // サイド反転
        if (invert_) { 
          designated_position.x *= -1.0;
          designated_position.y *= -1.0;
        }

        bool is_our_placement = 
          (referee_->command == Referee::COMMAND_BALL_PLACEMENT_YELLOW && team_is_yellow_ == true) ||
          (referee_->command == Referee::COMMAND_BALL_PLACEMENT_BLUE && team_is_yellow_ == false);
        bool avoid_kick_receive_area = true;
        // 自チームのプレースメント時は、キック、レシーブエリアを避けない
        if (is_our_placement) {
          avoid_kick_receive_area = false;
        }
        if (goal->avoid_placement) {
          avoid_placement_area(my_robot, parsed_pose, ball, avoid_kick_receive_area, designated_position, avoidance_pose);
          parsed_pose = avoidance_pose;  // 回避姿勢を目標姿勢にセット
        }
      }
    }

    // STOP中、プレースメント中は目標位置とロボットの重なりを回避する
    if (referee_->command == Referee::COMMAND_BALL_PLACEMENT_YELLOW ||
        referee_->command == Referee::COMMAND_BALL_PLACEMENT_BLUE  ||
        referee_->command == Referee::COMMAND_STOP ) {
      avoid_robots(my_robot, parsed_pose, avoidance_pose);
      parsed_pose = avoidance_pose;  // 回避姿勢を目標姿勢にセット
    }

    // STOP_GAME中はボールから離れる
    if (parsed_referee_->is_our_setplay == false && parsed_referee_->is_inplay == false) {
    // if (parsed_referee_->is_placement == false && parsed_referee_->is_inplay == false) {
    // if (referee_->command == Referee::COMMAND_STOP) {
      avoid_ball_500mm(my_robot, parsed_pose, ball, avoidance_pose);
      parsed_pose = avoidance_pose;  // 回避姿勢を目標姿勢にセット
    }
  }

  return true;
}

bool FieldInfoParser::parse_constraint_pose(const ConstraintPose & pose, State & parsed_pose) const
{
  double parsed_x, parsed_y;
  if (!parse_constraint_xy(pose.xy, parsed_x, parsed_y)) {
    return false;
  }
  parsed_x += pose.offset.x;
  parsed_y += pose.offset.y;

  double parsed_theta;
  if (!parse_constraint_theta(pose.theta, parsed_x, parsed_y, parsed_theta)) {
    return false;
  }

  parsed_theta = tools::normalize_theta(parsed_theta + pose.offset.theta);

  parsed_pose.x = parsed_x;
  parsed_pose.y = parsed_y;
  parsed_pose.theta = parsed_theta;

  return true;
}

bool FieldInfoParser::parse_constraint_line(
  const ConstraintLine & line, State & parsed_pose) const {
  State p1, p2;
  if (!parse_constraint_xy(line.p1, p1.x, p1.y)) {
    return false;
  }
  if (!parse_constraint_xy(line.p2, p2.x, p2.y)) {
    return false;
  }

  State p3, p4;
  bool has_p3_p4 = false;
  if (line.p3.size() > 0 && line.p4.size()) {
    if (parse_constraint_xy(line.p3[0], p3.x, p3.y) &&
        parse_constraint_xy(line.p4[0], p4.x, p4.y)) {
      has_p3_p4 = true;
    }
  }

  // 直線p1->p2の座標系を作成
  auto angle_p1_to_p2 = tools::calc_angle(p1, p2);
  tools::Trans trans_1to2(p1, angle_p1_to_p2);
  if(has_p3_p4) {
    // p1 ~ p4がセットされていれば、
    // 直線p1->p2上で、直線p3->p4と交わるところを目標位置とする
    State intersection = tools::intersection(p1, p2, p3, p4);
    // 交点が直線p1->p2をはみ出る場合は、p1 or p2に置き換える
    auto intersection_1to2 = trans_1to2.transform(intersection);
    auto p2_1to2 = trans_1to2.transform(p2);
    if (intersection_1to2.x < 0.0) {
      parsed_pose = p1;
    } else if (intersection_1to2.x > p2_1to2.x) {
      parsed_pose = p2;
    } else {
      parsed_pose = intersection;
    }
  }else {
    // 直線p1->p2上で、p1からdistanceだけ離れた位置を目標位置する
    parsed_pose = trans_1to2.inverted_transform(line.distance, 0, 0);
  }

  if (!parse_constraint_theta(line.theta, parsed_pose.x, parsed_pose.y,
                              parsed_pose.theta)) {
    return false;
  }


  return true;
}

bool FieldInfoParser::parse_constraint_xy(
  const ConstraintXY & xy, double & parsed_x,
  double & parsed_y) const
{
  State object_pose;
  if (xy.object.size() > 0) {
    if (parse_constraint_object(xy.object[0], object_pose)) {
      parsed_x = object_pose.x;
      parsed_y = object_pose.y;
    } else {
      return false;
    }
  }

  if (xy.value_x.size() > 0) {
    parsed_x = xy.value_x[0];
  }

  if (xy.value_y.size() > 0) {
    parsed_y = xy.value_y[0];
  }

  // フィールドサイズに対してx, yが-1 ~ 1に正規化されている
  if (xy.normalized) {
    parsed_x *= geometry_->field.field_length * 0.5 * 0.001;
    parsed_y *= geometry_->field.field_width * 0.5 * 0.001;
  }
  return true;
}

bool FieldInfoParser::parse_constraint_theta(
  const ConstraintTheta & theta, const double goal_x,
  const double goal_y, double & parsed_theta) const
{
  State object_pose;
  if (theta.object.size() > 0) {
    if (parse_constraint_object(theta.object[0], object_pose)) {
      if (theta.param == ConstraintTheta::PARAM_THETA) {
        parsed_theta = object_pose.theta;
        return true;
      } else if (theta.param == ConstraintTheta::PARAM_LOOK_TO) {
        State goal_pose;
        goal_pose.x = goal_x;
        goal_pose.y = goal_y;
        parsed_theta = tools::calc_angle(goal_pose, object_pose);
        return true;
      } else if (theta.param == ConstraintTheta::PARAM_LOOK_FROM) {
        State goal_pose;
        goal_pose.x = goal_x;
        goal_pose.y = goal_y;
        parsed_theta = tools::calc_angle(object_pose, goal_pose);
        return true;
      }
    }
  }

  if (theta.value_theta.size() > 0) {
    parsed_theta = theta.value_theta[0];
    return true;
  }

  return false;
}

bool FieldInfoParser::parse_constraint_object(
  const ConstraintObject & object,
  State & object_pose) const
{
  TrackedBall ball;
  TrackedRobot robot;

  // NOLINTについて
  // ament_uncrustifyとament_cpplintが競合するので、lintのチェックをスキップする
  // Ref: https://github.com/ament/ament_lint/issues/158
  if (object.type == ConstraintObject::BALL && extract_ball(ball)) {
    object_pose.x = ball.pos.x;
    object_pose.y = ball.pos.y;
    return true;
  } else if ((object.type == ConstraintObject::BLUE_ROBOT &&  // NOLINT
    extract_robot(object.robot_id, false, robot)) ||
    (object.type == ConstraintObject::YELLOW_ROBOT && extract_robot(object.robot_id, true, robot)))
  {
    object_pose.x = robot.pos.x;
    object_pose.y = robot.pos.y;
    object_pose.theta = robot.orientation;
    return true;
  }

  return false;
}

bool FieldInfoParser::parse_kick(
  const State & kick_target, const TrackedRobot & my_robot, const TrackedBall & ball,
  const bool & kick_pass, const bool & kick_setplay,
  State & parsed_pose, double & parsed_kick_power, double & parsed_dribble_power) const
{
  const double DRIBBLE_DISTANCE = 0.3;
  const double DRIBBLE_POWER = 1.0;
  const double KICK_POWER_SHOOT = 6.5;
  const double KICK_POWER_PASS = 1.5;
  bool need_kick = false;
  bool need_dribble = false;

  if (kick_setplay) {
    control_ball_at_setplay(kick_target, my_robot, ball, parsed_pose, need_kick, need_dribble);
  } else {
    control_ball(kick_target, my_robot, ball, DRIBBLE_DISTANCE, parsed_pose, need_kick, need_dribble);

  }

  if (need_dribble) {
    parsed_dribble_power = DRIBBLE_POWER;
  } else {
    parsed_dribble_power = 0.0;
  }

  if (need_kick) {
    if (kick_pass) {
      parsed_kick_power = KICK_POWER_PASS;
    } else {
      parsed_kick_power = KICK_POWER_SHOOT;
    }
  } else {
    parsed_kick_power = 0.0;
  }
  return true;
}

bool FieldInfoParser::parse_dribble(
  const State & dribble_target, const TrackedRobot & my_robot, const TrackedBall & ball,
  State & parsed_pose, double & parsed_dribble_power) const {

  const double DRIBBLE_DISTANCE = 0.15;
  const double DRIBBLE_POWER = 1.0;
  bool need_kick = false;
  bool need_dribble = false;

  control_ball(dribble_target, my_robot, ball, DRIBBLE_DISTANCE, parsed_pose, need_kick, need_dribble);

  if (need_dribble) {
    parsed_dribble_power = DRIBBLE_POWER;
  } else {
    parsed_dribble_power = 0.0;
  }
  return true;
}

bool FieldInfoParser::control_ball(
    const State & target, const TrackedRobot & my_robot, const TrackedBall & ball,
    const double & dribble_distance, State & parsed_pose, bool & need_kick, bool & need_dribble) const {
  // ボールを操作する関数
  // キック、パス、ドリブルの操作が可能
  const double LOOKING_BALL_DISTANCE = 0.20;  // meters
  const double LOOKING_BALL_THETA = tools::to_radians(180 - 45);
  const double LOOKING_TARGET_THETA = tools::to_radians(15);
  const double CAN_DRIBBLE_DISTANCE = 0.7;  // meters;
  const double CAN_SHOOT_THETA = tools::to_radians(15);
  // const double CAN_SHOOT_OMEGA = 0.1;  // rad/s
  const double DISTANCE_TO_LOOK_BALL = -0.05;  // meters
  const double THETA_TO_ROTATE = tools::to_radians(60);  // meters
  const double DISTANCE_TO_ROTATE = 0.12;  // meters

  // 変数の初期化
  need_kick = false;
  need_dribble = false;

  auto ball_pose = tools::pose_state(ball);
  auto robot_pose = tools::pose_state(my_robot);

  // ボールからロボットを見た座標系を生成
  auto angle_ball_to_robot = tools::calc_angle(ball_pose, robot_pose);
  tools::Trans trans_BtoR(ball_pose, angle_ball_to_robot);
  auto robot_pose_BtoR = trans_BtoR.transform(robot_pose);

  // ボールからターゲットを見た座標系を生成
  auto angle_ball_to_target = tools::calc_angle(ball_pose, target);
  tools::Trans trans_BtoT(ball_pose, angle_ball_to_target);
  auto robot_pose_BtoT = trans_BtoT.transform(robot_pose);

  bool is_looking_ball = robot_pose_BtoR.x < LOOKING_BALL_DISTANCE &&
    std::fabs(robot_pose_BtoR.theta)> LOOKING_BALL_THETA;

  auto ball_pose_BtoT = trans_BtoT.transform(ball_pose);
  auto angle_robot_to_ball_BtoT = tools::calc_angle(robot_pose_BtoT, ball_pose_BtoT);
  bool is_looking_target = std::fabs(robot_pose_BtoT.theta) < LOOKING_TARGET_THETA &&
    std::fabs(angle_robot_to_ball_BtoT) < tools::to_radians(15);

  double distance_robot_to_ball = tools::distance(robot_pose, ball_pose);

  // ロボットがボールに近ければドリブルをON
  bool can_dribble = distance_robot_to_ball < CAN_DRIBBLE_DISTANCE;
  // ロボットがキックターゲットに焦点を当てたらキックをON
  bool can_kick = std::fabs(robot_pose_BtoT.theta) < CAN_SHOOT_THETA;
      // std::fabs(my_robot.vel_angular[0]) < CAN_SHOOT_OMEGA;

  if (!is_looking_ball) {
    // ドリブラーがボールに付くまで移動する
    parsed_pose = trans_BtoR.inverted_transform(DISTANCE_TO_LOOK_BALL, 0, M_PI);
    if (can_dribble) { need_dribble = true;}
  } else if (!is_looking_target) {
    // ターゲットを見るまで、ドリブラをボールに付けながら回転する
    double add_angle = -std::copysign(THETA_TO_ROTATE, robot_pose_BtoT.theta);

    parsed_pose = trans_BtoR.inverted_transform(
      DISTANCE_TO_ROTATE * std::cos(add_angle),
      DISTANCE_TO_ROTATE * std::sin(add_angle), 0.0);
    parsed_pose.theta = tools::calc_angle(parsed_pose, ball_pose);
    if (can_dribble) { need_dribble = true;}
  } else {
    // ターゲットに向かって前進する
    parsed_pose = trans_BtoT.inverted_transform(dribble_distance, 0.0, 0.0);
    if (can_dribble) { need_dribble = true; }
    if (can_kick) { need_kick = true; }
  }
  return true;
}

bool FieldInfoParser::control_ball_at_setplay(
    const State & target, const TrackedRobot & my_robot, const TrackedBall & ball,
    State & parsed_pose, bool & need_kick, bool & need_dribble) const {
  // セットプレイ用の落ち着いたキックを実施

  // 変数の初期化
  need_kick = false;
  need_dribble = false;

  auto ball_pose = tools::pose_state(ball);
  auto robot_pose = tools::pose_state(my_robot);

  // ボールからターゲットを見た座標系を生成
  auto angle_ball_to_target = tools::calc_angle(ball_pose, target);
  tools::Trans trans_BtoT(ball_pose, angle_ball_to_target);
  auto robot_pose_BtoT = trans_BtoT.transform(robot_pose);

  // ロボットがボールの裏側に回ったらcan_kick
  bool can_kick = robot_pose_BtoT.x < 0.01 && std::fabs(robot_pose_BtoT.y) < 0.05;

  if (can_kick) { 
    parsed_pose = trans_BtoT.inverted_transform(0.02, 0.0, 0.0);
    need_kick = true;
  } else {
    parsed_pose = trans_BtoT.inverted_transform(-0.3, 0.0, 0.0);
  }
  return true;
}


bool FieldInfoParser::receive_ball(
  const TrackedRobot & my_robot, const TrackedBall & ball,
  State & parsed_pose, double & parsed_dribble_power) const
{
  // 転がっているボールを受け取る
  const double DRIBBLE_POWER = 1.0;

  // ボール情報に速度情報がなければ終了
  if (ball.vel.size() == 0) {
    return false;
  }

  State velocity;
  velocity.x = ball.vel[0].x;
  velocity.y = ball.vel[0].y;
  // ボール速度が一定値以下であれば終了
  if (std::hypot(velocity.x, velocity.y) <= 0.5) {
    return false;
  }

  auto ball_pose = tools::pose_state(ball);
  auto robot_pose = tools::pose_state(my_robot);
  auto angle_velocity = std::atan2(velocity.y, velocity.x);
  tools::Trans trans_BtoV(ball_pose, angle_velocity);

  auto robot_pose_BtoV = trans_BtoV.transform(robot_pose);

  // ボールの軌道から離れていたら終了
  if (std::fabs(robot_pose_BtoV.y) > 1.0 || robot_pose_BtoV.x < 0.0) {
    return false;
  }

  // ボールの軌道上に移動する
  robot_pose_BtoV.y = 0.0;
  robot_pose_BtoV.theta = M_PI;
  parsed_pose = trans_BtoV.inverted_transform(robot_pose_BtoV);
  parsed_dribble_power = DRIBBLE_POWER;

  return true;
}

bool FieldInfoParser::reflect_kick(
    const State & target, const TrackedRobot & my_robot, const TrackedBall & ball,
    const bool & kick_pass, State & parsed_pose, double & parsed_kick_power,
    double & parsed_dribble_power) const {
  // 転がっているボールの軌道上に移動し、targetに向かって蹴る
  // targetを狙えない場合は、蹴らずにボールを受け取る

  const double MIN_VELOCITY_THRESHOLD = 0.5;  // m/s ボールの最低動作速度
  const double MAX_DISTANCE_TO_RECEIVE = 1.0;  // meters ボールを受け取る最長距離
  const double DISTANCE_TO_DRIBBLER = 0.055;  // meters ロボットの中心からドリブラーまでの距離
  const double CAN_REFLECT_ANGLE = 60.0;  // degress リフレクトできる最大角度
  const double KICK_POWER_SHOOT = 6.5;
  const double KICK_POWER_PASS = 1.5;

  // パラメータを初期化
  parsed_dribble_power = 0.0;
  parsed_kick_power = 0.0;

  // ボール情報に速度情報がなければ終了
  if (ball.vel.size() == 0) {
    return false;
  }

  State velocity;
  velocity.x = ball.vel[0].x;
  velocity.y = ball.vel[0].y;
  auto velocity_norm = std::hypot(velocity.x, velocity.y);
  // ボール速度が一定値以下であれば終了
  if (velocity_norm <= MIN_VELOCITY_THRESHOLD) {
    return false;
  }

  // ロボット座標と、ロボットのドリブラー座標を作成
  auto robot_pose = tools::pose_state(my_robot);
  auto dribbler_pose = robot_pose;
  dribbler_pose.x += DISTANCE_TO_DRIBBLER * std::cos(robot_pose.theta);
  dribbler_pose.y += DISTANCE_TO_DRIBBLER * std::sin(robot_pose.theta);

  // ボールを中心にボール速度方向への座標系を作成
  auto ball_pose = tools::pose_state(ball);
  auto angle_velocity = std::atan2(velocity.y, velocity.x);
  tools::Trans trans_BtoV(ball_pose, angle_velocity);

  auto dribbler_pose_BtoV = trans_BtoV.transform(dribbler_pose);

  // ロボットがボールの軌道から離れていたら終了
  if (std::fabs(dribbler_pose_BtoV.y) > MAX_DISTANCE_TO_RECEIVE || dribbler_pose_BtoV.x < 0.0) {
    return false;
  }

  // ドリブラーをボール軌道上へ移動する
  dribbler_pose_BtoV.y = 0.0;

  // targetへの角度を計算し、リフレクトシュートできるか判定する
  auto target_BtoV = trans_BtoV.transform(target);
  auto angle_dribbler_to_target_BtoV = tools::calc_angle(dribbler_pose_BtoV, target_BtoV);
  if (std::fabs(angle_dribbler_to_target_BtoV) < tools::to_radians(180 - CAN_REFLECT_ANGLE)) {
    // リフレクトシュートできないため終了
    return false;
  }

  auto receiving_dribbler_pose = trans_BtoV.inverted_transform(dribbler_pose_BtoV);
  auto angle_dribbler_to_target = tools::calc_angle(receiving_dribbler_pose, target);
  tools::Trans trans_DtoT(receiving_dribbler_pose, angle_dribbler_to_target);
  auto ball_pose_DtoT = trans_DtoT.transform(ball_pose);
  auto angle_dribbler_to_ball_DtoT = std::atan2(ball_pose_DtoT.y, ball_pose_DtoT.x);

  // リフレクトシュート目標位置を生成
  // TODO:ボール速度、キック速度のベクトルを結合して、目標角度を求める
  auto target_angle_DtoT = angle_dribbler_to_ball_DtoT * 0.7 * velocity_norm / 6.5;
  parsed_pose = trans_DtoT.inverted_transform(-DISTANCE_TO_DRIBBLER, 0.0, target_angle_DtoT);
  // キックパワーをセット
  if (kick_pass) { 
    parsed_kick_power = KICK_POWER_PASS;
  } else {
    parsed_kick_power = KICK_POWER_SHOOT;
  }

  return true;
}

bool FieldInfoParser::avoid_obstacles(
  const TrackedRobot & my_robot, const State & goal_pose, const TrackedBall & ball,
  const bool & avoid_ball, State & avoidance_pose) const
{
  // 障害物を回避するposeを生成する
  // 全ロボット情報を検索し、
  // 自己位置(my_robot)と目標位置(goal_pose)間に存在する、
  // 自己位置に最も近い障害物付近に回避点を生成し、その回避点を新しい目標位置とする

  const double VISIBILITY_THRESHOLD = 0.01;  // 0.0 ~ 1.0
  // 自身から直進方向に何m離れたロボットを障害物と判定するか
  const double OBSTACLE_DETECTION_X = 0.2;
  // 自身から直進方向に対して左右何m離れたロボットを障害物と判定するか
  const double OBSTACLE_DETECTION_Y = 0.5;
  const double AVOIDANCE_POS_X = 0.2;
  const double AVOIDANCE_POS_Y = 0.5;

  auto my_robot_pose = tools::pose_state(my_robot);
  tools::Trans trans_MtoG(my_robot_pose, tools::calc_angle(my_robot_pose, goal_pose));
  auto goal_pose_MtoG = trans_MtoG.transform(goal_pose);

  double distance_to_obstacle = 10000;  // 適当な大きい数字を設定
  std::shared_ptr<State> obstacle_pose_MtoG;

  for (const auto & robot : detection_tracked_->robots) {
    if (robot.visibility.size() == 0) {
      continue;
    }
    if (robot.visibility[0] < VISIBILITY_THRESHOLD) {
      continue;
    }

    // 自身の情報は除外する
    if (robot.robot_id.id == my_robot.robot_id.id &&
      robot.robot_id.team_color == my_robot.robot_id.team_color)
    {
      continue;
    }

    // ロボットの位置が自己位置と目標位置の間に存在するか判定
    auto robot_pose = tools::pose_state(robot);
    auto robot_pose_MtoG = trans_MtoG.transform(robot_pose);

    if (robot_pose_MtoG.x > OBSTACLE_DETECTION_X &&
      robot_pose_MtoG.x < goal_pose_MtoG.x &&
      std::fabs(robot_pose_MtoG.y) < OBSTACLE_DETECTION_Y)
    {
      // 最も自身に近いロボットを障害物とする
      double distance = std::hypot(robot_pose_MtoG.x, robot_pose_MtoG.y);
      if (distance < distance_to_obstacle) {
        obstacle_pose_MtoG = std::make_shared<State>(robot_pose_MtoG);
        distance_to_obstacle = distance;
      }
    }
  }

  if (avoid_ball) {
    auto ball_pose = tools::pose_state(ball);
    auto ball_pose_MtoG = trans_MtoG.transform(ball_pose);

    if (ball_pose_MtoG.x > OBSTACLE_DETECTION_X &&
      ball_pose_MtoG.x < goal_pose_MtoG.x &&
      std::fabs(ball_pose_MtoG.y) < OBSTACLE_DETECTION_Y)
    {
      double distance = std::hypot(ball_pose_MtoG.x, ball_pose_MtoG.y);
      if (distance < distance_to_obstacle) {
        obstacle_pose_MtoG = std::make_shared<State>(ball_pose_MtoG);
        distance_to_obstacle = distance;
      }
    }
  }

  // 障害物が存在すれば、回避位置を生成する
  if (obstacle_pose_MtoG) {
    avoidance_pose = trans_MtoG.inverted_transform(
      obstacle_pose_MtoG->x + AVOIDANCE_POS_X,
      obstacle_pose_MtoG->y - std::copysign(AVOIDANCE_POS_Y, obstacle_pose_MtoG->y),
      goal_pose_MtoG.theta
    );
  }

  return true;
}


bool FieldInfoParser::avoid_placement_area(
    const TrackedRobot & my_robot, const State & goal_pose, const TrackedBall & ball,
    const bool avoid_kick_receive_area,
    const State & designated_position, State & avoidance_pose) const {
  // プレースメント範囲を回避する
  const double THRESHOLD_Y = 1.0;
  const double THRESHOLD_X = 0.65;
  const double AVOIDANCE_POS_Y = 0.9;

  auto my_robot_pose = tools::pose_state(my_robot);
  auto ball_pose= tools::pose_state(ball);
  tools::Trans trans_BtoD(ball_pose, tools::calc_angle(ball_pose, designated_position));

  auto robot_pose_BtoD = trans_BtoD.transform(my_robot_pose);
  auto goal_pose_BtoD = trans_BtoD.transform(goal_pose);
  auto designated_BtoD = trans_BtoD.transform(designated_position);

  // 0.5 m 離れなければならない
  // 現在位置と目標位置がともにプレースメントエリアにある場合、回避点を生成する

  // 自チームのプレースメント時は、ボールを蹴る位置、受け取る位置を避けない
  double threshold_x = 0.0;
  if (avoid_kick_receive_area) { 
    threshold_x = THRESHOLD_X;
  }
  bool my_pose_is_in_area = std::fabs(robot_pose_BtoD.y) < THRESHOLD_Y
    && robot_pose_BtoD.x > -threshold_x
    && robot_pose_BtoD.x < designated_BtoD.x + threshold_x;
  bool goal_pose_is_in_area = std::fabs(goal_pose_BtoD.y) < THRESHOLD_Y
    && goal_pose_BtoD.x > -threshold_x
    && goal_pose_BtoD.x < designated_BtoD.x + threshold_x;

  if (my_pose_is_in_area || goal_pose_is_in_area) {
    auto avoid_y = std::copysign(AVOIDANCE_POS_Y, robot_pose_BtoD.y);
    avoidance_pose = trans_BtoD.inverted_transform(robot_pose_BtoD.x, avoid_y, 0.0);

    // デッドロック回避
    const double FIELD_HALF_X = 6.0;
    const double FIELD_HALF_Y = 4.5;
    if (std::fabs(avoidance_pose.y) > FIELD_HALF_Y || std::fabs(avoidance_pose.x) > FIELD_HALF_X) {
      avoidance_pose = trans_BtoD.inverted_transform(robot_pose_BtoD.x, -avoid_y, 0.0);
    }
    avoidance_pose.theta = my_robot_pose.theta;
  } else {
    avoidance_pose = goal_pose;
  }

  return true;
}

bool FieldInfoParser::avoid_robots(
    const TrackedRobot & my_robot, const State & goal_pose,
    State & avoidance_pose) const {
  // ロボットを回避するposeを生成する
  // 全ロボット情報を検索し、
  // 目標位置とロボットが重なっている場合は、
  // 自己位置方向に目標位置をずらす
  
  const double VISIBILITY_THRESHOLD = 0.01;  // 0.0 ~ 1.0
  const double ROBOT_DIAMETER = 0.18; // meters ロボットの直径

  // ロボットを全探索
  for (const auto & robot : detection_tracked_->robots) {
    if (robot.visibility.size() == 0) {
      continue;
    }
    if (robot.visibility[0] < VISIBILITY_THRESHOLD) {
      continue;
    }

    // 自身の情報は除外する
    if (robot.robot_id.id == my_robot.robot_id.id &&
      robot.robot_id.team_color == my_robot.robot_id.team_color)
    {
      continue;
    }

    // ロボットの位置が目標位置上に存在するか判定
    auto robot_pose = tools::pose_state(robot);
    auto distance = tools::distance(robot_pose, goal_pose);
    if (distance < ROBOT_DIAMETER) {
      // 自己方向にずらした目標位置を生成
      auto my_robot_pose = tools::pose_state(my_robot);
      tools::Trans trans_GtoM(goal_pose, tools::calc_angle(goal_pose, my_robot_pose));
      avoidance_pose = trans_GtoM.inverted_transform(ROBOT_DIAMETER, 0.0 ,0.0);
      avoidance_pose.theta = goal_pose.theta;
      return true;
    }
  }

  // 障害物がなければ、目標位置を回避位置とする
  avoidance_pose = goal_pose;
  return true;
}

bool FieldInfoParser::avoid_ball_500mm(
    const TrackedRobot & my_robot, const State & goal_pose, const TrackedBall & ball,
    State & avoidance_pose) const {
  // ボールから500 mm離れる
  const double DISTANCE_TO_AVOID = 0.6;
  const double AVOID_MARGIN = 0.05;
  const double THETA_TO_ROTATE = tools::to_radians(10);
  const double DISTANCE_TO_ROTATE = DISTANCE_TO_AVOID + AVOID_MARGIN;
  
  auto robot_pose = tools::pose_state(my_robot);
  auto ball_pose = tools::pose_state(ball);
  auto distance = tools::distance(robot_pose, ball_pose);

  if (distance < DISTANCE_TO_AVOID) {
    // ロボットがボールに近づいた場合は、目標位置をボールの周囲に合わせて回転させる
    tools::Trans trans_BtoG(ball_pose, tools::calc_angle(ball_pose, goal_pose));
    auto ball_pose_BtoG = trans_BtoG.transform(ball_pose);
    auto robot_pose_BtoG = trans_BtoG.transform(robot_pose);
    auto angle_ball_to_robot_BtoG = tools::calc_angle(ball_pose_BtoG, robot_pose_BtoG);

    double add_angle = -std::copysign(THETA_TO_ROTATE, angle_ball_to_robot_BtoG);
    avoidance_pose = trans_BtoG.inverted_transform(
      DISTANCE_TO_ROTATE * std::cos(angle_ball_to_robot_BtoG + add_angle),
      DISTANCE_TO_ROTATE * std::sin(angle_ball_to_robot_BtoG + add_angle), 0.0);
    avoidance_pose.theta = goal_pose.theta;
    return true;
  }

  // 障害物がなければ、目標位置を回避位置とする
  avoidance_pose = goal_pose;
  return true;
}

}  // namespace robot_controller
