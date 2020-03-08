#pragma once

#include <Arduino.h>

template<typename T> class Rect
{
    const T _width;
    const T _height;

public:
    constexpr Rect(const T width, const T height) : _width(width), _height(height)
    {

    }

    constexpr T Width() const
    {
        return _width;
    }

    constexpr T Height() const
    {
        return _height;
    }
};