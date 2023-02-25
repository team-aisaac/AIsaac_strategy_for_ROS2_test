#ifndef _TOOLS_H_
#define _TOOLS_H_

#define ROBOT_SIZE 180            //robot size(diameter mm)
#define BALL_DIAMETER 46          //ball diameter(mm)

#define DEG_TO_RAD 0.0174532925199
#define RAD_TO_DEG 57.29577951

//フィールド選択
#define FIELD "A" //  フィールドの選択A or B
//フィールドAのペナルティゾーンの範囲
#define PENALTY_ZONE_X_A 1800
#define PENALTY_ZONE_Y_A 3600
#define FIELD_X_A 12600
#define FIELD_Y_A 9600
//フィールドBのペナルティゾーンの範囲
#define PENALTY_ZONE_X_B 1000
#define PENALTY_ZONE_Y_B 2000
#define FIELD_X_B 9600
#define FIELD_Y_B 6600
#define FIELD_OUT_LINE 300  //フィールドの外白線と壁までの距離

#define ROBOT_MAX_VEL 2000  //ロボットの最大速度(mm/s)
#define ROBOT_MAX_ACCEL 2000 //ロボットの最大速度(mm/s^2)
#define ROBOT_MAX_JARK 10000 //ロボットの最大躍度(mm/s^3)

#define MICON_TIME_STEP 0.001          //micon controll time step
#define RASPI_TIME_STEP 0.01

//ペナルティゾーンのpathのマージン
#define PENALTY_ZONE_MARGIN_DISTANCE 150      //Margin distance when avoiding obstacles
//フィールドのペナルティゾーンのマージン設定
#define PENALTY_MARGIN 3   //mm
#define PENALTY_OUT_MARGIN 15   //mm
#define MIDLE_TARGET_MARGIN 50   //mm
#define PENALTY_MIDLE_TARGET_MARGIN 300   //mm
//侵入禁止エリアに侵入している際に使うマクロ
#define MAX_SEARCH_DISTANCE 1000    //侵入禁止エリア外に出るために探索する最大範囲(mm)
#define DELTA_SEARCH_DISTANCE 100   //侵入禁止エリア外に出るために探索する際の探索幅(mm)
//フィールドの壁への衝突を回避するときのマージン設定
#define FIELD_MARGIN 50   //mm
#define FIELD_TRGET_MARGIN 55   //mm

#define DWA_TRAP_CHANGE_DIS 100  //DWAと台形制御を切り替えるロボットと目標値の距離(mm)

#define DWA_ROBOTXY_VIRUALXY_DISTANCE_CHECK 500   //DWA中に仮の目標値とロボットの位置が離れられる最大値
#define TRAPE_ROBOTXY_VIRUALXY_DISTANCE_CHECK 600   //台形制御中に仮の目標値とロボットの位置が離れられる最大値
#define ROBOT_POSITION_RESET_DISTANCE 700         //ロボットの現在地と仮想目標値が大きく離れすぎた場合に現在地等をリセットする閾値となる距離

#define WRAP_KICK_CONTROL_CHANGE_DISTANCE 100   //ボールに対する回り込み動作を行う最大のロボットとボールの距離
#define ROBOT_KICK_ENABLE_X 85

//最大値を算出
float max_value(float data[], uint16_t size);
//最小値を算出
float min_value(float data[], uint16_t size);
//正規化
void min_max_normalize(float *data, uint16_t size);
//角度範囲内に再計算
float angle_range_corrector(float angle);
//角度範囲内に再計算(deg)
float angle_range_corrector_deg(float angle);
//角度が範囲内かを判定する
bool angele_check(float check_angle, float angle_max, float angle_min);
//-1~1で数字をラップする(float等で計算した場合わずかに超えたりする.acosfの引数などに使用)
float modifid_acosf(float value);

#endif // _TOOLS_H_