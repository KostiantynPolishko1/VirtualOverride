#pragma once

#ifndef SWORDDOUBLE_H
#define SWORDDOUBLE_H

#include "WeaponsCut.h"

class SwordDouble :
    public WeaponsCut
{
public:
    SwordDouble() : WeaponsCut(6, 6, DOUBLE_EDGED) {};

    WeaponsCut getWeaponsCut() override final{
        return *this;
    }
}
;
#endif