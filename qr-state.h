#pragma once

#include <Arduino.h>
#include <M5StickC.h>

#include "lcd.h"
#include "i-state.h"

class QRState : public IState
{
    static constexpr const Vector2<uint16_t> qr_pos = Vector2<uint16_t>(0, 8);
    static constexpr const char* url = "QR_URL";

    void DrawQRCode();

public:
    QRState()
    {

    }

    void Begin() override;

    void Update() override;
};