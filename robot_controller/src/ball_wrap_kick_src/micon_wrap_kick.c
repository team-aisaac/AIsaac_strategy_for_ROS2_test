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

bool ball_kick_check(int32_t w_robot_theta, int32_t w_ball_x, int32_t w_ball_y, int32_t target_ball_x, int32_t target_ball_y,
    int32_t r_ball_x, int32_t r_ball_y, int32_t ball_target_allowable_erroe){
        RCUTILS_LOG_INFO("ball kick ckeck");
        //ボールが蹴れるx,y座標（ロボット座標系）を判定
        if((0 < r_ball_x && r_ball_x < ROBOT_KICK_ENABLE_X + BALL_DIAMETER/2) && 
            (-ROBOT_KICK_ENABLE_Y < r_ball_y && r_ball_y < ROBOT_KICK_ENABLE_Y)){
                RCUTILS_LOG_INFO("ball kick position");
                //ball_target_allowable_erroe -> ボールを蹴るターゲットからの許容誤差の半径 (mm)
                //例えば精密シュートをするのか大雑把なパスをするのか、クリア(1000<ball_target_allowable_erro)をするのか
                //ball_target_allowable_erroe = BALL_TARGET_ALLOWABLE_ERROR;
                if(1000 <= ball_target_allowable_erroe){ //ボールをクリアする
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
                float threshold_ball_kick_rad = modifid_asinf(ball_target_allowable_erroe/ball_ball_target_distance);   //ロボットがボールを蹴る際の角度の許容誤差(rad)
                float robot_rad = angle_range_corrector((float) w_robot_theta / 1000 * DEG_TO_RAD);             //ロボットの角度(rad)
                //ボールからボール目標値へのベクトルとロボットが向いている向きのベクトルが成す角(rad)
                float ball_ball_target_vectot_robot_vctor_rad = modifid_acosf(((target_ball_x - w_ball_x)*cosf(robot_rad) + (target_ball_y - w_ball_y)*sinf(robot_rad))/ball_ball_target_distance);
                RCUTILS_LOG_INFO("diff angle : %f", ball_ball_target_vectot_robot_vctor_rad*RAD_TO_DEG);
                if(ball_ball_target_vectot_robot_vctor_rad < threshold_ball_kick_rad){
                    return true;
                }
            }

        return false;
}