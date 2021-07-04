#include "selfdrive/ui/qt/speed_cam.h"

SpeedCam::SpeedCam(QWidget *parent) : QWidget(parent) {
  mSpeedCamData.isUpdated=false;
  mSpeedCamData.previousSpeedCameraDetected = false;
  mSpeedCamData.speedCameraDetected = false;
}
#if 1
T_SpeedCamData_S* SpeedCam::updateState(const UIState &s) {
  SubMaster &sm = *(s.sm);

#if 1
  //try {
    if (sm.updated("speedCamera")) {
      if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getSpeedLimitation() == 25.0) {
        mSpeedCamData.speedLimit = SPEED_LIMIT_20_KM;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 20 KM]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getSpeedLimitation() == 30.0) {
        mSpeedCamData.speedLimit = SPEED_LIMIT_30_KM;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 30 KM]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getSpeedLimitation() == 40.0) {
        mSpeedCamData.speedLimit = SPEED_LIMIT_40_KM;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 40 KM]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getSpeedLimitation() == 50.0) {
        mSpeedCamData.speedLimit = SPEED_LIMIT_50_KM;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 50 KM]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getSpeedLimitation() == 60.0) {
        mSpeedCamData.speedLimit = SPEED_LIMIT_60_KM;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 60 KM]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getSpeedLimitation() == 70.0) {
        mSpeedCamData.speedLimit = SPEED_LIMIT_70_KM;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 70 KM]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getSpeedLimitation() == 80.0) {
        mSpeedCamData.speedLimit = SPEED_LIMIT_80_KM;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 80 KM]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getSpeedLimitation() == 90.0) {
        mSpeedCamData.speedLimit = SPEED_LIMIT_90_KM;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 90 KM]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getSpeedLimitation() == 100.0) {
        mSpeedCamData.speedLimit = SPEED_LIMIT_100_KM;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 100 KM]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getSpeedLimitation() == 110.0) {
        mSpeedCamData.speedLimit = SPEED_LIMIT_110_KM;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 110 KM]");
      }

      if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getVehicleDistance() < 0.1) {
        mSpeedCamData.speedDistance = SPEED_DISTANCE_100_M;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 100M]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getVehicleDistance() < 0.2) {
        mSpeedCamData.speedDistance = SPEED_DISTANCE_200_M;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 200M]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getVehicleDistance() < 0.3) {
        mSpeedCamData.speedDistance = SPEED_DISTANCE_300_M;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 300M]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getVehicleDistance() < 0.4) {
        mSpeedCamData.speedDistance = SPEED_DISTANCE_400_M;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 400M]");
      } else if(sm["speedCamera"].getSpeedCamera().getSpeedCameraMapPosition().getVehicleDistance() < 0.5) {
        mSpeedCamData.speedDistance = SPEED_DISTANCE_500_M;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() 500M]");
      } else {
        mSpeedCamData.speedDistance = SPEED_DISTANCE_OVER_500_M;
        LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() Over 500M]");
      }

      mSpeedCamData.previousSpeedCameraDetected = mSpeedCamData.speedCameraDetected;
      mSpeedCamData.speedCameraDetected = sm["speedCamera"].getSpeedCamera().getSpeedCameraDetected();

      LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() mSpeedCamData.previousSpeedCameraDetected=%d]", mSpeedCamData.previousSpeedCameraDetected);
      LOGE("[PONTEST][speed_cam.cc][SpeedCam::updateState() mSpeedCamData.speedCameraDetected=%d]", mSpeedCamData.speedCameraDetected);

      mSpeedCamData.isUpdated=true;
    } else {
      mSpeedCamData.isUpdated=false;
    }
  //} catch (std::exception &e) {
  //  LOGE("[PONTEST][%s][%d][%s] speedCamera Execption: %s", __FILE__, __LINE__, __FUNCTION__, e.what());
  //}
#endif

  return &mSpeedCamData;
}
#endif