#ifndef _TOOLS_H_
#define _TOOLS_H_

#define ROBOT_SIZE 180            //robot size(diameter mm)

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

#define ROBOT_MAX_VEL 3000;  //ロボットの最大速度(mm/s)
#define ROBOT_MAX_ACCEL 2000; //ロボットの最大速度(mm/s^2)

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