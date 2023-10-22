#pragma once

#ifndef STOPPER_H
#define STOPPER_H

#include "Material.h"

class Stopper final:
    public Material
{
private:
    char* _shape;
    float _weight;
    float _length;

public:
    Stopper() : Material(), _shape{}, _length{}, _weight{} {}

    Stopper(short kindSword) : Material(getKindMaterial(kindSword), getQualityMaterial(kindSword)),
        _shape{ (char*)"Rubber" }, _length{ 0.1f }, _weight{ 0.05f } {}

    char* getStopperShape() const;
    float getStopperLength() const;
    float getStopperWeight() const;
}
;
#endif