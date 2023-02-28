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
void wrap_kick(int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, int32_t w_robot_omega, int32_t w_ball_x, int32_t w_ball_y, int32_t target_ball_x, int32_t target_ball_y, 
    int32_t r_ball_x, int32_t r_ball_y, int32_t* robot_goal_x, int32_t* robot_goal_y, int32_t* robot_goal_theta, int32_t* ball_kick_cin_max_velo_theta);
//ボールに回り込む動作に切り替える際に実行する関数
bool wrap_kick_control_start(kick_path *wrap_kick_con, int32_t w_robot_x, int32_t w_robot_y, int32_t w_robot_theta, 
    int32_t w_robot_vx, int32_t w_robot_vy, int32_t w_robot_omega);

#ifdef __cplusplus
}
#endif
#endif // _DWA_H_