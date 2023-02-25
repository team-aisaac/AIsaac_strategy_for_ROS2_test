#define _USE_MATH_DEFINES
#include <stdint.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <math.h>
#include <time.h>

#include "robot_controller/tools.h"
#include "robot_controller/ball_wrap_kick_include/micon_wrap_kick.h"
//ros2デバッグ用のヘッダファイル
#include "/opt/ros/foxy/include/rcutils/logging_macros.h"
#include "/opt/ros/foxy/include/rcutils/logging.h"

bool ball_kick_check(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_ball_x, int32_t w_ball_y, int32_t target_ball_x, int32_t target_ball_y,
    int32_t r_ball_x, int32_t r_ball_y){
        float robot_ball_distance = 0;
        if(0 < (w_robot_x-w_ball_x)*(w_robot_x-w_ball_x) + (w_robot_y-w_ball_y)*(w_robot_y-w_ball_y)){
            robot_ball_distance = sqrtf((w_robot_x - w_ball_x)*(w_robot_x - w_ball_x) + (w_robot_y - w_ball_y)*(w_robot_y - w_ball_y));
        }
        if(robot_ball_distance < ROBOT_KICK_ENABLE_X + BALL_DIAMETER/2){}

        return false;
    }