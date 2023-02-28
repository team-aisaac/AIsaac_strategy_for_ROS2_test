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

void wrap_kick(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_robot_omega, int32_t w_ball_x, int32_t w_ball_y, int32_t target_ball_x, int32_t target_ball_y, 
    int32_t r_ball_x, int32_t r_ball_y, int32_t* robot_goal_x, int32_t* robot_goal_y, int32_t* robot_goal_theta, int32_t* ball_kick_cin_max_velo_theta){
    //float c_r_ball_x, c_r_ball_y;
    float w_robot_rad = angle_range_corrector(w_robot_theta/1000 * DEG_TO_RAD); //rad
    float w_robot_rad_omega = -w_robot_omega/1000 * DEG_TO_RAD;  //rad/s
    float x_omega_offset = ROBOT_KICK_MIN_X * (1 - cosf(RASPI_TIME_STEP*w_robot_rad_omega));
    float y_omega_offset = ROBOT_KICK_MIN_X * sinf(RASPI_TIME_STEP*w_robot_rad_omega);
    RCUTILS_LOG_INFO("ball_x : %f, ball_y : %f",x_omega_offset, y_omega_offset);
    //RCUTILS_LOG_INFO("ball_x : %f, ball_y : %f",r_ball_x, r_ball_y);
    float r_goal_x = r_ball_x - ROBOT_KICK_MIN_X; //現在のロボット座標系でのロボットの目標値のx座標
    float r_goal_y = r_ball_y - ROBOT_WRAP_KICK_MAGIC_NUMBER*w_robot_omega/(*ball_kick_cin_max_velo_theta); //現在のロボット座標系でのロボットの目標値のy座標
    float w_goal_x, w_goal_y;   //world座標系でのロボットの目標値
    r_to_w_coordinate_chang(&w_goal_x, &w_goal_y, r_goal_x + x_omega_offset, r_goal_y + y_omega_offset, (float) w_robot_x, (float) w_robot_y, w_robot_rad);
    //RCUTILS_LOG_INFO("ball_x : %f, ball_y : %f",w_goal_x, w_goal_y);
    *robot_goal_x = w_goal_x;
    *robot_goal_y = w_goal_y;
    //ロボットの目標角度の計算
    if(target_ball_x - w_ball_x !=0 || target_ball_y - w_ball_y !=0){
        float w_goal_rad = atan2f(target_ball_y - w_ball_y, target_ball_x - w_ball_x);
        *robot_goal_theta = 1000*w_goal_rad*RAD_TO_DEG;
    }
    //ロボットの角加速度の制限の計算
    /*
    float temp_sq_distance = r_goal_x*r_goal_x + r_goal_y*r_goal_y;
    if(0 < temp_sq_distance){
        float kicker_center_ball_distance = sqrt(temp_sq_distance)-30;
        if(kicker_center_ball_distance < 0){
            kicker_center_ball_distance = 0;
        }
        float reduction_factor = *ball_kick_cin_max_velo_theta/(ROBOT_KICK_ENABLE_Y-30);
        *ball_kick_cin_max_velo_theta = *ball_kick_cin_max_velo_theta - reduction_factor * kicker_center_ball_distance;
        if(*ball_kick_cin_max_velo_theta < 0){
            *ball_kick_cin_max_velo_theta = 0;
        }
    }*/
    RCUTILS_LOG_INFO("theta : %d", *ball_kick_cin_max_velo_theta);
}

bool wrap_kick_control_start(kick_path *wrap_kick_con, int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, 
    int32_t w_robot_vx, int32_t w_robot_vy, int32_t w_robot_omega){
        wrap_kick_con->x = w_robot_x;
        wrap_kick_con->y = w_robot_y;
        wrap_kick_con->theta = w_robot_theta;
        wrap_kick_con->Vx = w_robot_vx;
        wrap_kick_con->Vy = w_robot_vy;
        wrap_kick_con->omega = w_robot_omega;
        return true;
}
