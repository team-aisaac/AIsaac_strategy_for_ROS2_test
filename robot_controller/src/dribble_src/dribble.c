#define _USE_MATH_DEFINES
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

#include "robot_controller/tools.h"
#include "robot_controller/dribble_include/dribble.h"
//#include "robot_controller/ball_wrap_kick_include/wrap_kick.h"
//ros2デバッグ用のヘッダファイル
#include "/opt/ros/foxy/include/rcutils/logging_macros.h"
#include "/opt/ros/foxy/include/rcutils/logging.h"

bool dribble_wrap_motion(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_robot_omega, int32_t w_ball_x, int32_t w_ball_y, int32_t w_ball_vx, int32_t w_ball_vy,
    int32_t r_ball_x, int32_t r_ball_y, int32_t dribble_goal_x, int32_t dribble_goal_y, int32_t dribble_goal_theta, int32_t *robot_goal_x, int32_t *robot_goal_y, 
    int32_t *robot_goal_theta, int32_t ball_kick_cin_max_velo_theta, bool dribble_ball_move_flag){
    float w_robot_rad = angle_range_corrector(w_robot_theta/1000 * DEG_TO_RAD); //rad
    float w_robot_rad_omega = -w_robot_omega/1000 * DEG_TO_RAD;  //rad/s
    float x_omega_offset = ROBOT_KICK_MIN_X * (1 - cosf(RASPI_TIME_STEP*w_robot_rad_omega));    
    float y_omega_offset = ROBOT_KICK_MIN_X * sinf(RASPI_TIME_STEP*w_robot_rad_omega);
    float r_goal_x = r_ball_x - ROBOT_KICK_MIN_X; //現在のロボット座標系でのロボットの目標値のx座標
    RCUTILS_LOG_INFO("max vel theta %d", ball_kick_cin_max_velo_theta);
    float r_goal_y = r_ball_y - ROBOT_WRAP_KICK_MAGIC_NUMBER*w_robot_omega/(ball_kick_cin_max_velo_theta); //現在のロボット座標系でのロボットの目標値のy座標
    float w_goal_x, w_goal_y;   //world座標系でのロボットの目標値
    r_to_w_coordinate_chang(&w_goal_x, &w_goal_y, r_goal_x + x_omega_offset, r_goal_y + y_omega_offset, (float) w_robot_x, (float) w_robot_y, w_robot_rad);
    *robot_goal_x = w_goal_x + RASPI_TIME_STEP*w_ball_vx;
    *robot_goal_y = w_goal_y + RASPI_TIME_STEP*w_ball_vy;
    //ロボットの目標角度の計算
    if(dribble_goal_x - w_ball_x !=0 || dribble_goal_y - w_ball_y !=0){
        float w_goal_rad = atan2f(dribble_goal_y - w_ball_y, dribble_goal_x - w_ball_x);
        *robot_goal_theta = 1000*w_goal_rad*RAD_TO_DEG;
        int32_t diff_angle_deg = (*robot_goal_theta - w_robot_theta)/1000;
        if(dribble_ball_move_flag){
            return true;
        }
        if(diff_angle_deg != 0){
            if(fabs(diff_angle_deg) < ROBOT_DRIBBLE_START_DEG){
                return true;
            }
            return false;
        }
        else{
            return true;
        }
    }
    return true;
}

int32_t dribble_move_deg(int32_t r_ball_y, int32_t robot_goal_theta){
    int32_t robot_move_deg = r_ball_y*ROBOT_DRIBBLE_ABJUST_DEG;
    if(ROBOT_DRIBBLE_START_DEG/2 < robot_move_deg){
        robot_move_deg = ROBOT_DRIBBLE_START_DEG/2;
    }
    else if(robot_move_deg < -ROBOT_DRIBBLE_START_DEG/2){
        robot_move_deg = -ROBOT_DRIBBLE_START_DEG/2;
    }
    //RCUTILS_LOG_INFO("abjust deg : %d", robot_move_deg);
    return robot_goal_theta - robot_move_deg*1000;
}

