#pragma once

#include <Arduino.h>

enum class LCDRotation : uint8_t
{
    Portrait = 0,
    LandscapeRight = 1,
    PortraitReverse = 2,
    LandscapeLeft = 3
};