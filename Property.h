#pragma once
#include "Data.h"

#ifndef PROPERTY_H
#define PROPERTY_H

class Property
{
protected:
	
	short _hardness;
	short _resielence;
	short _durality;

	Property() : _hardness{}, _resielence{}, _durality{} {}

	Property(short kindMaterial, short qualityMaterial) {
		this->_hardness = arrHardness[kindMaterial][qualityMaterial];
		this->_resielence = arrResielence[kindMaterial][qualityMaterial];
		this->_durality = arrDurality[kindMaterial][qualityMaterial];
	}
	
public:

	short getHardness() const;

	short getResielence() const;

	short getDurality() const;
}
;
#endif