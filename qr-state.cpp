#include "qr-state.h"

constexpr const Vector2<uint16_t> QRState::qr_pos;

void QRState::DrawQRCode()
{
    LCD::DrawQRCode(url, qr_pos, 64, 2);
}

void QRState::Begin()
{
    DrawQRCode();
}

void QRState::Update()
{

}