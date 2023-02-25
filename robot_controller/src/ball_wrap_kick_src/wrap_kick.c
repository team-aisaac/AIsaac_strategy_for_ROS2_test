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

void wrap_kick(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_ball_x, int32_t w_ball_y, int32_t target_ball_x, int32_t target_ball_y,
    int32_t* robot_goal_x, int32_t* robot_goal_y, int32_t* robot_goal_theta){
    float r_ball_x, r_ball_y;
    float w_robot_rad = angle_range_corrector(w_robot_theta/1000 * DEG_TO_RAD);
    w_to_r_ball_coordinate_chang((float) w_ball_x, (float) w_ball_y, &r_ball_x, &r_ball_y, (float) w_robot_x, (float) w_robot_y, (float) w_robot_rad);
    RCUTILS_LOG_INFO("ball_x : %f, ball_y : %f",r_ball_x, r_ball_y);
}


void w_to_r_ball_coordinate_chang(float w_ball_x, float w_ball_y, float *r_ball_x, float *r_ball_y, float w_robot_x, float w_robot_y, float w_robot_theta){
    *r_ball_x = (w_ball_x - w_robot_x)*cosf(w_robot_theta) - (w_ball_y - w_robot_y)*sinf(w_robot_theta);
    *r_ball_y = (w_ball_x - w_robot_x)*sinf(w_robot_theta) + (w_ball_y - w_robot_y)*cosf(w_robot_theta);
}