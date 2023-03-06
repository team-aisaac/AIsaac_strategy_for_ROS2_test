#ifndef _DRIBBLE_H_
#define _DRIBBLE_H_

#ifdef __cplusplus
extern "C" {
#endif

#include "robot_controller/dwa_include/TrapezoidalControl.h"

bool dribble_wrap_motion(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_robot_omega, int32_t w_ball_x, int32_t w_ball_y, int32_t r_ball_x, int32_t r_ball_y, 
    int32_t w_ball_vx, int32_t w_ball_vy, int32_t dribble_goal_x, int32_t dribble_goal_y, int32_t dribble_goal_theta, int32_t *robot_goal_x, int32_t *robot_goal_y, int32_t *robot_goal_theta, 
    int32_t ball_kick_cin_max_velo_theta, bool dribble_ball_move_flag);

int32_t dribble_move_deg(int32_t r_ball_y, int32_t robot_goal_theta);

#ifdef __cplusplus
}
#endif
#endif // _DRIBBLE_H_