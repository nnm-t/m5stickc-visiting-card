#pragma once

#include <Arduino.h>
#include <M5StickC.h>

#include "lcd.h"
#include "i-state.h"

#include "icon-image.h"

class IconState : public IState
{
    static constexpr const Vector2<int16_t> icon_pos = Vector2<int16_t>(0, 8);
    static constexpr const Rect<int16_t> icon_size = Rect<int16_t>(64, 64);

    void DrawIcon();
public:
    IconState()
    {

    }

    void Begin() override;

    void Update() override;
};