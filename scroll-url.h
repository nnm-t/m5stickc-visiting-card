#pragma once

#include <Arduino.h>
#include <M5StickC.h>

#include "sprite.h"

class ScrollURL
{
    static constexpr const Vector2<int32_t> position = Vector2<int32_t>(64, 56);
    static constexpr const Vector2<int32_t> push_position = Vector2<int32_t>(96, 0);
    static constexpr const Vector2<int16_t> delta = Vector2<int16_t>(-1, 0);

    static constexpr const Rect<int16_t> size = Rect<int16_t>(400, 16);
    static constexpr const Rect<int32_t> rect_size = Rect<int32_t>(400, 16);

    static constexpr const char* string = "Scroll_URL";

    static constexpr const int16_t redraw_x = size.Width() * -1;


    Sprite sprite;

    int16_t x = 0;

    void DrawString();

public:
    ScrollURL()
    {

    }

    void Begin();

    void Update();
};