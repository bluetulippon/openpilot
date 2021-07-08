#pragma once

#include <map>
#include <QSoundEffect>
#include "cereal/gen/cpp/log.capnp.h"

typedef cereal::CarControl::HUDControl::AudibleAlert AudibleAlert;

static std::map<AudibleAlert, std::pair<const char *, int>> sound_map {
  // AudibleAlert, (file path, loop count)
  {AudibleAlert::CHIME_DISENGAGE, {"../assets/sounds/disengaged.wav", 0}},
  {AudibleAlert::CHIME_ENGAGE, {"../assets/sounds/engaged.wav", 0}},
  {AudibleAlert::CHIME_WARNING1, {"../assets/sounds/warning_1.wav", 0}},
  {AudibleAlert::CHIME_WARNING2, {"../assets/sounds/warning_2.wav", 0}},
  {AudibleAlert::CHIME_WARNING2_REPEAT, {"../assets/sounds/warning_2.wav", 3}},
  {AudibleAlert::CHIME_WARNING_REPEAT, {"../assets/sounds/warning_repeat.wav", -1}},
  {AudibleAlert::CHIME_ERROR, {"../assets/sounds/error.wav", 0}},
  {AudibleAlert::CHIME_PROMPT, {"../assets/sounds/error.wav", 0}},
  {AudibleAlert::CHIME_SPEED_LIMIT20_KM, {"../assets/sounds/SpeedLimit20km.wav", 0}},
  {AudibleAlert::CHIME_SPEED_LIMIT30_KM, {"../assets/sounds/SpeedLimit30km.wav", 0}},
  {AudibleAlert::CHIME_SPEED_LIMIT40_KM, {"../assets/sounds/SpeedLimit40km.wav", 0}},
  {AudibleAlert::CHIME_SPEED_LIMIT50_KM, {"../assets/sounds/SpeedLimit50km.wav", 0}},
  {AudibleAlert::CHIME_SPEED_LIMIT60_KM, {"../assets/sounds/SpeedLimit60km.wav", 0}},
  {AudibleAlert::CHIME_SPEED_LIMIT70_KM, {"../assets/sounds/SpeedLimit70km.wav", 0}},
  {AudibleAlert::CHIME_SPEED_LIMIT80_KM, {"../assets/sounds/SpeedLimit80km.wav", 0}},
  {AudibleAlert::CHIME_SPEED_LIMIT90_KM, {"../assets/sounds/SpeedLimit90km.wav", 0}},
  {AudibleAlert::CHIME_SPEED_LIMIT100_KM, {"../assets/sounds/SpeedLimit100km.wav", 0}},
  {AudibleAlert::CHIME_SPEED_LIMIT110_KM, {"../assets/sounds/SpeedLimit110km.wav", 0}}
};

class Sound {
public:
  Sound();
  void play(AudibleAlert alert);
  void stop();
  float volume = 0;

private:
  std::map<AudibleAlert, QSoundEffect> sounds;
};
