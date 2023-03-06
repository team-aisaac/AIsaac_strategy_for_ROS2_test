#ifndef _WRAP_KICK_H_
#define _WRAP_KICK_H_

#ifdef __cplusplus
extern "C" {
#endif

typedef struct{
    //マイコンからの情報
    int32_t x;
    int32_t y;
    int32_t theta;
    int32_t Vx;
    int32_t Vy;
    int32_t omega;
} kick_path;

//ボールを蹴るための回り込み動作を行うための目標値を決定する関数
void wrap_kick(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_robot_omega, int32_t w_ball_x, int32_t w_ball_y, int32_t w_ball_vx, int32_t w_ball_vy, 
    int32_t target_ball_x, int32_t target_ball_y, int32_t r_ball_x, int32_t r_ball_y, int32_t* robot_goal_x, int32_t* robot_goal_y, int32_t* robot_goal_theta, int32_t *ball_kick_cin_max_velo_theta, 
    bool free_kick_flag, int32_t ball_target_allowable_error, bool ball_kick);
//ボールに対する回り込み動作時にボールに触れてよいかを判定する(触れる場合はドリブラーによって保持することを想定する)
bool wrap_con_ball_touch_check(int32_t w_robot_theta, int32_t w_ball_x, int32_t w_ball_y, int32_t target_ball_x, int32_t target_ball_y, 
    bool free_kick_flag, int32_t ball_target_allowable_error, bool ball_kick);
#ifdef __cplusplus
}
#endif
#endif // _DWA_H_