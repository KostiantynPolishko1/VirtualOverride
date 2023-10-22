#pragma once
#include "Property.h"

#ifndef MATERIAL_H
#define MATERIAL_H

class Material : 
	public Property
{
protected:
	char* _material;
	char* _quality;

	short getKindMaterial(const short kindSword) const;

	short getQualityMaterial(const short kindSword) const;

protected:
	Material() : Property(), _material{}, _quality{} {}

	Material(short kindMaterial, short qualityMaterial) : Property(kindMaterial, qualityMaterial)
	{
		this->_material = arrMaterial[kindMaterial];
		this->_quality = arrQuality[qualityMaterial];
	}

	~Material() {
		this->_material = nullptr;
		this->_quality = nullptr;
	}

public:	
	char* getMaterial() const;
	char* getQuality() const;
}
;
#endif