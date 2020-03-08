#pragma once

#include <Arduino.h>

class Color16
{
    static constexpr uint16_t lsb5 = 0x1F;
    static constexpr uint16_t lsb6 = 0x3F;
    static constexpr uint16_t lsb8 = 0xFF;

    static constexpr uint16_t shift_red = 11;
    static constexpr uint16_t shift_green = 5;

    static constexpr uint16_t divide_5bit = 3;
    static constexpr uint16_t divide_6bit = 2;

    const uint16_t _color;

    static constexpr uint16_t Color32ToRed(const uint32_t color32)
    {
        return ((color32 >> 16) & lsb8) >> divide_5bit;
    }

    static constexpr uint16_t Color32ToGreen(const uint32_t color32)
    {
        return ((color32 >> 8) & lsb8) >> divide_6bit;
    }

    static constexpr uint16_t Color32ToBlue(const uint32_t color32)
    {
        return (color32 & lsb8) >> divide_5bit;
    }

    constexpr Color16(const uint32_t color32)
    : _color ((Color32ToRed(color32) << shift_red) + (Color32ToGreen(color32) << shift_green) + Color32ToBlue(color32))
    {

    }

    constexpr Color16(const uint16_t red, const uint16_t green, const uint16_t blue) 
    : _color (((red & lsb5) << shift_red) + ((green & lsb6) << shift_green) + (blue & lsb5))
    {

    }

public:
    static constexpr Color16 White()
    {
        return Color16(0xFFFFFF);
    }

    static constexpr Color16 Black()
    {
        return Color16(0x000000);
    }

    static constexpr Color16 From32(const uint32_t color32)
    {
        return Color16(color32);
    }

    static constexpr Color16 From16(const uint16_t color16)
    {
        return Color16(color16 >> shift_red, color16 >> shift_green, color16);
    }

    static constexpr Color16 FromRGB(const uint16_t red, const uint16_t green, const uint16_t blue)
    {
        return Color16(red, green, blue);
    }

    constexpr uint16_t Get() const
    {
        return _color;
    }
};