#ifndef _DWA_PATH_RECOVER_H_
#define _DWA_PATH_RECOVER_H_

#define DWA_PATH_RECOVERTIME_STEP 0.01          //cdwa ontroll time step

#ifdef __cplusplus
extern "C" {
#endif
void DWA_path_recover(float *x, float *y, float *vx, float *vy, float accel_x, float accel_y, float max_velo);
#ifdef __cplusplus
};
#endif
#endif // _DWA_PATH_RECOVER_H_