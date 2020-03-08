#pragma once

#include <Arduino.h>
#include <M5StickC.h>

#include "vector2.h"
#include "rect.h"
#include "color16.h"
#include "text-datum.h"
#include "sprite-color-depth.h"

class Sprite
{
    TFT_eSprite _sprite;
public:
    Sprite(TFT_eSPI* const tft) : _sprite(TFT_eSprite(tft))
    {

    }


    Sprite() : _sprite(TFT_eSprite(&M5.Lcd))
    {

    }

    void* Create(const Rect<int16_t>& size, const SpriteColorDepth color_depth = SpriteColorDepth::Depth16, const uint8_t frames = 1);

    void Fill(const Color16& color);

    void SetTextColor(const Color16& color);

    void SetTextColor(const Color16& foreground, const Color16& background);

    void SetTextDatum(const TextDatum datum);

    void SetScrollRect(const Vector2<int32_t>& position, const Rect<int32_t>& size, const Color16& color = Color16::Black());

    void Scroll(const Vector2<int16_t>& position);

    int16_t DrawString(const char* string, const Vector2<int32_t>& position);

    int16_t DrawString(const String& string, const Vector2<int32_t>& position);

    void DrawRect(const Vector2<int32_t>& position, const Rect<int32_t>& size, const Color16& color);

    void FillRect(const Vector2<int32_t>& position, const Rect<int32_t>& size, const Color16& color);

    void Push(const Vector2<int32_t>& position);

    void Push(const Vector2<int32_t>& position, const Color16& transparent);

    void Delete();

    void SetTextFont(const uint8_t font);
};