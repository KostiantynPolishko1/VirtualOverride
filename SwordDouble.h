#pragma once

#ifndef SWORDDOUBLE_H
#define SWORDDOUBLE_H

#include "WeaponsCut.h"

class SwordDouble :
    public WeaponsCut
{
public:
    SwordDouble() : WeaponsCut(6, 6, 10.0f) {};

    WeaponsCut initWeaponsCut() override final{
        return *this;
    }
}
;
#endif