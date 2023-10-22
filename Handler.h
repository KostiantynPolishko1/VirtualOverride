#pragma once

#ifndef HANDLER_H
#define HANDLER_H

#include "Material.h"

class Handler final :
    public Material
{
private:
    char* _shape;
    float _weight;
    float _length;

public:
    Handler() : Material(), _shape{}, _weight{}, _length{} {}

    Handler(short kindSword) : Material(getKindMaterial(kindSword), getQualityMaterial(kindSword)), 
        _shape{(char*)"Cylinder"}, _length{0.2f}, _weight{0.1f} {}

    char* getHandlerShape() const;
    float getHandlerLength() const;
    float getHandlerWeight() const;
}
;
#endif