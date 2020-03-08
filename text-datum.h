#pragma once

#include <Arduino.h>
#include <M5StickC.h>

enum class TextDatum : uint8_t
{
    TopLeft = TL_DATUM,
    TopCenter = TC_DATUM,
    TopRight = TR_DATUM,
    MiddleLeft = ML_DATUM,
    MiddleCenter = MC_DATUM,
    MiddleRight = MR_DATUM,
    BottomLeft = BL_DATUM,
    BottomCenter = BC_DATUM,
    BottomRight = BR_DATUM
};