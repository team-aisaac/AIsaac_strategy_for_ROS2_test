#include<stdint.h>
#include<stdbool.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include"robot_controller/dwa_include/DWA_path_recover.h"

void DWA_path_recover(float *x, float *y, float *vx, float *vy, float accel_x, float accel_y, float max_velo){
    *vx = *vx + accel_x*DWA_PATH_RECOVERTIME_STEP;
    *vy = *vy + accel_y*DWA_PATH_RECOVERTIME_STEP;
    float v = sqrt(*vx * *vx + *vy * *vy);
    if(v > max_velo){
        *vx = *vx/v*max_velo;
        *vy = *vy/v*max_velo;
    }
    *x = *x + *vx*DWA_PATH_RECOVERTIME_STEP;
    *y = *y + *vy*DWA_PATH_RECOVERTIME_STEP;
}