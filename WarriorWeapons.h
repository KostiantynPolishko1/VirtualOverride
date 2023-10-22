#pragma once

#ifndef WARRIORWEAPONS_H
#define WARRIORWEAPONS_H

#include "WeaponsCut.h"
#include "SwordNormal.h"
#include "SwordOneHalf.h"
#include "SwordDouble.h"

class WarriorWeapons
{
private:
	const static short length = 3;
	short index;
	WeaponsCut weaponsWarrior[length];
	SwordNormal swordNormal;
	SwordOneHalf swordOneHalf;
	SwordDouble swordDouble;

public:
	WarriorWeapons() : index{}, swordNormal {}, swordOneHalf{}, swordDouble{}
	{
		weaponsWarrior[0] = swordNormal.getWeaponsCut();
		weaponsWarrior[1] = swordOneHalf.getWeaponsCut();
		weaponsWarrior[2] = swordDouble.getWeaponsCut();
	}

#pragma region operators
	WeaponsCut& operator[] (const short& index) {
		this->index = index;
		setIndex0();

		return this->weaponsWarrior[index];
	}
#pragma endregion

private:
#pragma region methods
	void setIndex0()
	{
		if (this->index == length)
			this->index = 0;
		else if (this->index < 0)
			this->index = length - 1;
	}
#pragma endregion
}
;
#endif