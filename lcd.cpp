#include "lcd.h"

void LCD::SetRotation(const LCDRotation rotation)
{
    M5.Lcd.setRotation(static_cast<uint8_t>(rotation));
}

void LCD::FillScreen(const Color16& color)
{
    M5.Lcd.fillScreen(color.Get());
}

void LCD::DrawRect(const Vector2<int32_t>& position, const Rect<int32_t>& size, const Color16& color)
{
    M5.Lcd.drawRect(position.X(), position.Y(), size.Width(), size.Height(), color.Get());
}

void LCD::FillRect(const Vector2<int32_t>& position, const Rect<int32_t>& size, const Color16& color)
{
    M5.Lcd.fillRect(position.X(), position.Y(), size.Width(), size.Height(), color.Get());
}

void LCD::DrawCircle(const Vector2<int32_t>& center, const int32_t radius, const Color16& color)
{
    M5.Lcd.drawCircle(center.X(), center.Y(), radius, color.Get());
}

void LCD::FillCircle(const Vector2<int32_t>& center, const int32_t radius, const Color16& color)
{
    M5.Lcd.fillCircle(center.X(), center.Y(), radius, color.Get());
}

void LCD::DrawString(String string, const Vector2<int32_t>& position)
{
    M5.Lcd.drawString(string, position.X(), position.Y());
}

void LCD::DrawString(const char* string, const Vector2<int32_t>& position)
{
    M5.Lcd.drawString(string, position.X(), position.Y());
}

void LCD::SetTextDatum(const TextDatum datum)
{
    M5.Lcd.setTextDatum(static_cast<uint8_t>(datum));
}

void LCD::DrawTriangle(const Vector2<int32_t>& pos0, const Vector2<int32_t>& pos1, const Vector2<int32_t>& pos2, const Color16& color)
{
    M5.Lcd.drawTriangle(pos0.X(), pos0.Y(), pos1.X(), pos1.Y(), pos2.X(), pos2.Y(), color.Get());
}

void LCD::FillTriangle(const Vector2<int32_t>& pos0, const Vector2<int32_t>& pos1, const Vector2<int32_t>& pos2, const Color16& color)
{
    M5.Lcd.fillTriangle(pos0.X(), pos0.Y(), pos1.X(), pos1.Y(), pos2.X(), pos2.Y(), color.Get());
}

void LCD::SetTextColor(const Color16& color)
{
    M5.Lcd.setTextColor(color.Get());
}

void LCD::SetTextColor(const Color16& foreground, const Color16& background)
{
    M5.Lcd.setTextColor(foreground.Get(), background.Get());
}

void LCD::SetTextSize(const uint8_t size)
{
    M5.Lcd.setTextSize(size);
}

void LCD::SetBrightness(const uint8_t brightness)
{
    M5.Lcd.setBrightness(brightness);
}

void LCD::DrawBitmap(const Vector2<int16_t>& position, const Rect<int16_t>& size, uint16_t* const bitmap)
{
    M5.Lcd.drawBitmap(position.X(), position.Y(), size.Width(), size.Height(), bitmap);
}

void LCD::DrawBitmap(const Vector2<int16_t>& position, const Rect<int16_t>& size, const uint16_t* const bitmap)
{
    M5.Lcd.drawBitmap(position.X(), position.Y(), size.Width(), size.Height(), bitmap);
}

void LCD::DrawQRCode(const char* string, const Vector2<uint16_t>& position, const uint8_t width, const uint8_t version)
{
    M5.Lcd.qrcode(string, position.X(), position.Y(), width, version);
}

void LCD::DrawQRCode(const String& string, const Vector2<uint16_t>& position, const uint8_t width, const uint8_t version)
{
    M5.Lcd.qrcode(string, position.X(), position.Y(), width, version);
}

void LCD::SetTextFont(const uint8_t font)
{
    M5.Lcd.setTextFont(font);
}