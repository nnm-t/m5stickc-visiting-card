#include "state-manager.h"

void StateManager::Begin()
{
    _state->Begin();
}

void StateManager::Update()
{
    if (M5.BtnA.wasPressed())
    {
        if (_state == _icon_state)
        {
            _state = _qr_state;
        }
        else
        {
            _state = _icon_state;
        }

        _state->Begin();
    }

    _state->Update();
}