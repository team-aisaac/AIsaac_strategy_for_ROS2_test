#ifndef _WRAP_KICK_H_
#define _WRAP_KICK_H_

#ifdef __cplusplus
extern "C" {
#endif
void wrap_kick(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_ball_x, int32_t w_ball_y, int32_t target_ball_x, int32_t target_ball_y,
    int32_t* robot_goal_x, int32_t* robot_goal_y, int32_t* robot_goal_theta);
void w_to_r_ball_coordinate_chang(float w_ball_x, float w_ball_y, float* r_ball_x, float* r_ball_y, float robot_x, float robot_y, float robot_theta);

#ifdef __cplusplus
}
#endif
#endif // _DWA_H_