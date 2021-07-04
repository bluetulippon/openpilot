#pragma once

#include <QtWidgets>

#include "cereal/gen/cpp/log.capnp.h"
#include "selfdrive/ui/ui.h"

typedef enum SpeedLimit_E {
  SPEED_LIMIT_20_KM,
  SPEED_LIMIT_30_KM,
  SPEED_LIMIT_40_KM,
  SPEED_LIMIT_50_KM,
  SPEED_LIMIT_60_KM,
  SPEED_LIMIT_70_KM,
  SPEED_LIMIT_80_KM,
  SPEED_LIMIT_90_KM,
  SPEED_LIMIT_100_KM,
  SPEED_LIMIT_110_KM
} T_SpeedLimit_E;

typedef enum SpeedDistance_E {
  SPEED_DISTANCE_100_M,
  SPEED_DISTANCE_200_M,
  SPEED_DISTANCE_300_M,
  SPEED_DISTANCE_400_M,
  SPEED_DISTANCE_500_M,
  SPEED_DISTANCE_OVER_500_M
} T_SpeedDistance_E;

typedef struct SpeedCamData_S {
  bool isUpdated;
  bool previousSpeedCameraDetected;
  bool speedCameraDetected;
  T_SpeedLimit_E speedLimit;
  T_SpeedDistance_E speedDistance;
} T_SpeedCamData_S;


class SpeedCam : public QWidget {
  Q_OBJECT

public:
  explicit SpeedCam(QWidget* parent = 0);
  T_SpeedCamData_S* updateState(const UIState &s);

private:
  T_SpeedCamData_S mSpeedCamData;

};
