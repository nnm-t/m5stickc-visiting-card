#include "toggle-brightness.h"

void ToggleBrightness::Set()
{
    axp192.ScreenBreath(_value);
}

void ToggleBrightness::Begin()
{
    Set();
}

void ToggleBrightness::Toggle()
{
    if (_value >= max)
    {
        _value = min;
    }
    else
    {
        _value++;
    }

    Set();
}

void ToggleBrightness::Update()
{
    if (M5.BtnB.wasPressed())
    {
        Toggle();
    }
}