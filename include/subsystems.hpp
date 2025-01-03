#pragma once

#include "api.h"

// Your motors, sensors, etc. should go here.  Below are examples

inline pros::Motor intake(3);
inline pros::MotorGroup Lady_Brown({1, -9});
inline ez::Piston Clamp('A');