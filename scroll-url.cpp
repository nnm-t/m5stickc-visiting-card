#include "scroll-url.h"

constexpr Vector2<int32_t> ScrollURL::position;
constexpr Vector2<int32_t> ScrollURL::push_position;
constexpr Vector2<int16_t> ScrollURL::delta;

constexpr Rect<int32_t> ScrollURL::rect_size;
constexpr Rect<int16_t> ScrollURL::size;

void ScrollURL::DrawString()
{
    x = 0;
    sprite.DrawString(string, push_position);
}

void ScrollURL::Begin()
{
    sprite.Create(size);
    sprite.SetTextColor(Color16::White(), Color16::Black());

    DrawString();

    sprite.SetScrollRect(Vector2<int32_t>::Zero(), rect_size, Color16::Black());
}

void ScrollURL::Update()
{
    sprite.Push(position);

    if (x <= redraw_x)
    {
        DrawString();
        return;
    }

    x += delta.X();
    sprite.Scroll(delta);

}