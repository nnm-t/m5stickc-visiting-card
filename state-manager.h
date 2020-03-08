#pragma once

#include <Arduino.h>
#include <M5StickC.h>

#include "icon-state.h"
#include "qr-state.h"

class StateManager : public IState
{
    IconState* const _icon_state;
    QRState* const _qr_state;

    IState* _state = nullptr;

public:
    StateManager(IconState* const icon_state, QRState* const qr_state) : _icon_state(icon_state), _qr_state(qr_state)
    {
        _state = icon_state;
    }

    void Begin() override;

    void Update() override;
};