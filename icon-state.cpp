#include "icon-state.h"

constexpr const Vector2<int16_t> IconState::icon_pos;
constexpr const Rect<int16_t> IconState::icon_size;

void IconState::DrawIcon()
{
    LCD::DrawBitmap(icon_pos, icon_size, icon_image);
}

void IconState::Begin()
{
    DrawIcon();
}

void IconState::Update()
{

}