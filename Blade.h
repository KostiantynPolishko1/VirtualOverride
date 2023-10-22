#pragma once
#include "Material.h"

#ifndef BLADE_H
#define BLADE_H

class Blade final : 
	public Material
{
protected:
	char* _shape;
	float _lenght;
	float _weight;

public:
	Blade() : Material(), _shape{}, _lenght{}, _weight{} {}

	Blade(short kindSword) : Material(getKindMaterial(kindSword), getQualityMaterial(kindSword)) {

		switch (kindSword)
		{
		case SINGLE_HANDED:
			this->_shape = arrBladeCrossSection[LENTICULAR];
			this->_lenght = arrBladeLength[NORMAL_L];
			this->_weight = arrDensity[WOOD] * (_lenght * widthBlade * thkBlade);
			break;

		case TWO_and_HALF:
			this->_shape = arrBladeCrossSection[CHIESELED];
			this->_lenght = arrBladeLength[MIDDLE_L];
			this->_weight = arrDensity[BRASS] * (_lenght * widthBlade * thkBlade);
			break;

		case DOUBLE_EDGED:
			this->_shape = arrBladeCrossSection[DOUBLE_CHIESELED];
			this->_lenght = arrBladeLength[LONG_L];
			this->_weight = arrDensity[STEEL] * (_lenght * widthBlade * thkBlade);
			break;

		default:
			Blade blade;
			break;
		}
	}
	
	~Blade()
	{
		_shape = nullptr;
	}

public:
	char* getBladeShape() const;
	float getBladeLength() const;
	float getBladeWeight() const;
}
;
#endif
