#ifndef _WRAP_KICK_H_
#define _WRAP_KICK_H_

#ifdef __cplusplus
extern "C" {
#endif

bool ball_kick_check(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_ball_x, int32_t w_ball_y, int32_t target_ball_x, int32_t target_ball_y,
    int32_t r_ball_x, int32_t r_ball_y);

#ifdef __cplusplus
}
#endif
#endif // _DWA_H_