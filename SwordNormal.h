#pragma once

#ifndef SWORDNORMAL_H
#define SWORDNORMAL_H

#include "WeaponsCut.h"

class SwordNormal final:
    public WeaponsCut
{
public:
    SwordNormal() : WeaponsCut(2, 2, SINGLE_HANDED) {};

    WeaponsCut getWeaponsCut() override final{
        return *this;
    }
}
;
#endif