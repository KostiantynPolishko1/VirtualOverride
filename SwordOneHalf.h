#pragma once

#ifndef SWORDONEHALF_H
#define SWORDONEHALF_H

#include "WeaponsCut.h"

class SwordOneHalf final:
    public WeaponsCut
{
public:
    SwordOneHalf() : WeaponsCut(4, 4, TWO_and_HALF) {};

    WeaponsCut getWeaponsCut() override final{
        return *this;
    }
}
;
#endif