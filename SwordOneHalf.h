#pragma once

#ifndef SWORDONEHALF_H
#define SWORDONEHALF_H

#include "WeaponsCut.h"

class SwordOneHalf final:
    public WeaponsCut
{
public:
    SwordOneHalf() : WeaponsCut(4, 4, 7.5f) {};

    WeaponsCut initWeaponsCut() override final{
        return *this;
    }
}
;
#endif