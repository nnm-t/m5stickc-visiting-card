#pragma once

#include <Arduino.h>
#include <M5StickC.h>
#include <AXP192.h>

#include "lcd.h"

class ToggleBrightness
{
    static constexpr const uint8_t min = 7;
    static constexpr const uint8_t max = 12;

    AXP192 axp192;
    uint8_t _value;

    void Set();

    void Toggle();

public:
    ToggleBrightness(const uint8_t value = 8) : axp192(AXP192()), _value(value)
    {
        if (value < min)
        {
            _value = min;
        }

        if (value > max)
        {
            _value = max;
        }
    }

    const uint8_t Get()
    {
        return _value;
    }

    void Begin();

    void Update();
};