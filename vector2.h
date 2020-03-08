#pragma once

#include <cmath>

#include <Arduino.h>

template<typename T> class Vector2
{
    const T _x;
    const T _y;

public:
    constexpr Vector2(const T x, const T y) : _x(x), _y(y)
    {

    }

    static constexpr Vector2<T> Zero()
    {
        return Vector2<T>(0, 0);
    }

    static constexpr Vector2<T> One()
    {
        return Vector2<T>(1, 1);
    }

    static constexpr T Dot(const Vector2<T>& lhs, const Vector2<T>& rhs)
    {
        return lhs.X() * rhs.X() + lhs.Y() * rhs.Y();
    }

    constexpr T X() const
    {
        return _x;
    }

    constexpr T Y() const
    {
        return _y;
    }

    constexpr T SquareMagnitude() const
    {
        return std::pow(_x, 2) + std::pow(_y, 2);
    }

    constexpr Vector2<T> operator +(const Vector2<T>& rhs) const
    {
        return Vector2<T>(this->_x + rhs.X(), this->_y + rhs.Y());
    }

    constexpr Vector2<T> operator -(const Vector2<T>& rhs) const
    {
        return Vector2<T>(this->_x - rhs.X(), this->_y - rhs.Y());
    }

    constexpr Vector2<T> operator *(const T rhs) const
    {
        return Vector2<T>(this->_x * rhs, this->_y * rhs);
    }

    constexpr Vector2<T> operator /(const T rhs) const
    {
        return Vector2<T>(this->_x / rhs, this->_y / rhs);
    }
};