#pragma once

#include <Arduino.h>
#include <M5StickC.h>

#include "vector2.h"
#include "rect.h"
#include "color16.h"
#include "text-datum.h"
#include "lcd-rotation.h"

class LCD
{
public:
    static void SetRotation(const LCDRotation rotation);

    static void FillScreen(const Color16& color);

    static void DrawRect(const Vector2<int32_t>& position, const Rect<int32_t>& size, const Color16& color);

    static void FillRect(const Vector2<int32_t>& position, const Rect<int32_t>& size, const Color16& color);

    static void DrawString(String string, const Vector2<int32_t>& position);

    static void DrawString(const char* string, const Vector2<int32_t>& position);

    static void SetTextDatum(const TextDatum datum);

    static void DrawTriangle(const Vector2<int32_t>& pos0, const Vector2<int32_t>& pos1, const Vector2<int32_t>& pos2, const Color16& color);

    static void FillTriangle(const Vector2<int32_t>& pos0, const Vector2<int32_t>& pos1, const Vector2<int32_t>& pos2, const Color16& color);

    static void DrawCircle(const Vector2<int32_t>& center, const int32_t radius, const Color16& color);

    static void FillCircle(const Vector2<int32_t>& center, const int32_t radius, const Color16& color);

    static void SetTextColor(const Color16& color);

    static void SetTextColor(const Color16& foreground, const Color16& background);

    static void SetTextSize(const uint8_t size);
    
    static void SetBrightness(const uint8_t brightness);

    static void DrawBitmap(const Vector2<int16_t>& position, const Rect<int16_t>& size, uint16_t* const bitmap);

    static void DrawBitmap(const Vector2<int16_t>& position, const Rect<int16_t>& size, const uint16_t* const bitmap);

    static void DrawQRCode(const char* string, const Vector2<uint16_t>& position, const uint8_t width, const uint8_t version = 5);

    static void DrawQRCode(const String& string, const Vector2<uint16_t>& position, const uint8_t width, const uint8_t version = 5);

    static void SetTextFont(const uint8_t font);
};