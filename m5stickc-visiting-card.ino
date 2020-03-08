#include <Arduino.h>
#include <M5StickC.h>
#include <Ticker.h>

#include "efont/src/efont.h"
#include "efont/src/efontEnableJaMini.h"
#include "efont/src/efontM5StickC.h"

#include "lcd.h"
#include "icon-state.h"
#include "qr-state.h"
#include "state-manager.h"
#include "scroll-url.h"
#include "toggle-brightness.h"

namespace
{
    constexpr const uint8_t brightness = 8;
    constexpr const LCDRotation rotation = LCDRotation::LandscapeRight;

    constexpr const uint32_t period_ms = 30;

    Ticker ticker;

    IconState icon_state;
    QRState qr_state;

    StateManager state_manager(&icon_state, &qr_state);
    ToggleBrightness toggle_brightness;

    constexpr const Vector2<int32_t> name_pos = Vector2<int32_t>(64, 16);
    constexpr const Vector2<int32_t> id_pos = Vector2<int32_t>(64, 32);
    constexpr char* name_string = "名前";
    constexpr char* id_string = "@id";
    constexpr const uint8_t id_font = 2;

    ScrollURL scroll_url;
}


void setup()
{
    M5.begin();

    ticker.attach_ms(period_ms, OnTimerTicked);

    LCD::SetRotation(rotation);

    state_manager.Begin();
    toggle_brightness.Begin();

    printEfont(name_string, name_pos.X(), name_pos.Y());

    LCD::SetTextFont(id_font);
    LCD::DrawString(id_string, id_pos);

    scroll_url.Begin();
}

void loop()
{

}

void OnTimerTicked()
{
    M5.update();

    scroll_url.Update();

    state_manager.Update();
    toggle_brightness.Update();
}