#define _USE_MATH_DEFINES
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

#include "robot_controller/tools.h"
#include "robot_controller/ball_wrap_kick_include/wrap_kick.h"
//ros2デバッグ用のヘッダファイル
#include "/opt/ros/foxy/include/rcutils/logging_macros.h"
#include "/opt/ros/foxy/include/rcutils/logging.h"

void wrap_kick(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_robot_omega, int32_t w_ball_x, int32_t w_ball_y, int32_t w_ball_vx, int32_t w_ball_vy, 
    int32_t target_ball_x, int32_t target_ball_y, int32_t r_ball_x, int32_t r_ball_y, int32_t* robot_goal_x, int32_t* robot_goal_y, int32_t* robot_goal_theta, int32_t *ball_kick_cin_max_velo_theta, 
    bool free_kick_flag, int32_t ball_target_allowable_error, bool ball_kick){
    //RCUTILS_LOG_INFO("wrap ball kick");
    float w_robot_rad = angle_range_corrector(w_robot_theta/1000 * DEG_TO_RAD); //rad
    float w_robot_rad_omega = -w_robot_omega/1000 * DEG_TO_RAD;  //rad/s
    float x_omega_offset = ROBOT_KICK_MIN_X * (1 - cosf(RASPI_TIME_STEP*w_robot_rad_omega));    
    float y_omega_offset = ROBOT_KICK_MIN_X * sinf(RASPI_TIME_STEP*w_robot_rad_omega);
    float r_goal_x = r_ball_x - ROBOT_KICK_MIN_X; //現在のロボット座標系でのロボットの目標値のx座標
    if(!wrap_con_ball_touch_check(w_robot_theta, w_ball_x, w_ball_y, target_ball_x, target_ball_y, free_kick_flag, ball_target_allowable_error, ball_kick)){
        r_goal_x = r_ball_x - ROBOT_NOT_TOUCH_MIN_X;
    }
    float r_goal_y = r_ball_y - ROBOT_WRAP_KICK_MAGIC_NUMBER*w_robot_omega/(*ball_kick_cin_max_velo_theta); //現在のロボット座標系でのロボットの目標値のy座標
    float w_goal_x, w_goal_y;   //world座標系でのロボットの目標値
    r_to_w_coordinate_chang(&w_goal_x, &w_goal_y, r_goal_x + x_omega_offset, r_goal_y + y_omega_offset, (float) w_robot_x, (float) w_robot_y, w_robot_rad);
    *robot_goal_x = w_goal_x + RASPI_TIME_STEP*w_ball_vx;
    *robot_goal_y = w_goal_y + RASPI_TIME_STEP*w_ball_vy;
    //ロボットの目標角度の計算
    if(target_ball_x - w_ball_x !=0 || target_ball_y - w_ball_y !=0){
        float w_goal_rad = atan2f(target_ball_y - w_ball_y, target_ball_x - w_ball_x);
        *robot_goal_theta = 1000*w_goal_rad*RAD_TO_DEG;
    }
    if(!free_kick_flag){
        *ball_kick_cin_max_velo_theta = 140*1000;
    }
}

void wrap_kick2(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_robot_omega, int32_t w_ball_x, int32_t w_ball_y, int32_t w_ball_vx, int32_t w_ball_vy, 
    int32_t target_ball_x, int32_t target_ball_y, int32_t r_ball_x, int32_t r_ball_y, int32_t* robot_goal_x, int32_t* robot_goal_y, int32_t* robot_goal_theta, int32_t *ball_kick_cin_max_velo_theta, 
    bool free_kick_flag, int32_t ball_target_allowable_error, bool ball_kick){
    float w_robot_rad = angle_range_corrector(w_robot_theta/1000 * DEG_TO_RAD); //rad
    float ball_goal_ball_distance = (w_ball_x - target_ball_x)*(w_ball_x - target_ball_x) + (w_ball_y - target_ball_y)*(w_ball_y - target_ball_y);
    if(ball_goal_ball_distance < 0){
        return;
    }
    ball_goal_ball_distance = sqrt(ball_goal_ball_distance);
    float robot_ball_distance = r_ball_x*r_ball_x + r_ball_y*r_ball_y;
    if(robot_ball_distance < 0){
        return;
    }
    robot_ball_distance = sqrt(robot_ball_distance);

    float robot_ball_con_distance = ROBOT_KICK_MIN_X;
    //ロボットがボールを蹴る際の最終目標地点
    float robot_kick_goal_x = w_ball_x + robot_ball_con_distance*(w_ball_x - target_ball_x)/ball_goal_ball_distance;
    float robot_kick_goal_y = w_ball_y + robot_ball_con_distance*(w_ball_y - target_ball_y)/ball_goal_ball_distance;
    
    float robot_ball_con_vec_x = -robot_ball_con_distance*r_ball_x/robot_ball_distance;
    float robot_ball_con_vec_y = -robot_ball_con_distance*r_ball_y/robot_ball_distance;
    float move_rad = angle_range_corrector(30 * DEG_TO_RAD);
    float r_goal_x = r_ball_x + robot_ball_con_vec_x*cosf(move_rad) - robot_ball_con_vec_y*sinf(move_rad);
    float r_goal_y = r_ball_y + robot_ball_con_vec_x*sinf(move_rad) + robot_ball_con_vec_y*cosf(move_rad); 
    float w_goal_x, w_goal_y;   //world座標系でのロボットの目標値
    r_to_w_coordinate_chang(&w_goal_x, &w_goal_y, r_goal_x, r_goal_y, (float) w_robot_x, (float) w_robot_y, w_robot_rad);
    *robot_goal_x = w_goal_x;
    *robot_goal_y = w_goal_y;
    
    *robot_goal_theta = w_robot_theta + 1000*atan2f(r_ball_y,r_ball_x)*RAD_TO_DEG + RASPI_TIME_STEP*w_robot_omega;
}

bool wrap_con_ball_touch_check(int32_t w_robot_theta, int32_t w_ball_x, int32_t w_ball_y, int32_t target_ball_x, int32_t target_ball_y, 
    bool free_kick_flag, int32_t ball_target_allowable_error, bool ball_kick){
    if(!free_kick_flag){
        return true;
    }
    else{
        if(!ball_kick){//フリーキックの指定でボールを蹴らないときはフェイント
            return false;
        }
        else if(1000 <= ball_target_allowable_error){ //ボールをクリアする
            return true;
        }

        float ball_ball_target_distance = 0;
        if(0 < (target_ball_x - w_ball_x)*(target_ball_x - w_ball_x) + (target_ball_y - w_ball_y)*(target_ball_y - w_ball_y)){
            //ボールとボールキック目標値の距離
            ball_ball_target_distance = sqrtf((target_ball_x - w_ball_x)*(target_ball_x - w_ball_x) + (target_ball_y - w_ball_y)*(target_ball_y - w_ball_y));
        }
        if(ball_ball_target_distance == 0){
            return false;
        }
        float threshold_ball_kick_rad = modifid_asinf(ball_target_allowable_error/ball_ball_target_distance);   //ロボットがボールを蹴る際の角度の許容誤差(rad)
        float robot_rad = angle_range_corrector((float) w_robot_theta / 1000 * DEG_TO_RAD);             //ロボットの角度(rad)
        //ボールからボール目標値へのベクトルとロボットが向いている向きのベクトルが成す角(rad)
        float ball_ball_target_vectot_robot_vctor_rad = modifid_acosf(((target_ball_x - w_ball_x)*cosf(robot_rad) + (target_ball_y - w_ball_y)*sinf(robot_rad))/ball_ball_target_distance);
        if(ball_ball_target_vectot_robot_vctor_rad < threshold_ball_kick_rad){
            return true;
        }
    }
    return false;
}