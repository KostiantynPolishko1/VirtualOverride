#pragma once

#ifndef WEAPONSCUT_H
#define WEAPONSCUT_H

#include "Sword.h"

class WeaponsCut
{
protected:
	short gradeAttack;
	short gradeDefence;
	Sword dataSword;

public:
	WeaponsCut() : dataSword{}, gradeAttack {}, gradeDefence{} {}

	WeaponsCut(short gradeAttack, short gradeDefence, short kindSword) :
		gradeAttack{ gradeAttack }, gradeDefence{ gradeDefence } 
	{
		this->dataSword = Sword(kindSword);
	}

#pragma region methods
	virtual WeaponsCut getWeaponsCut() {
		return *this;
	}

	short getAttacktSword() const {
		return this->gradeAttack;
	}

	short getDefenceSword() const {
		return this->gradeDefence;
	}

	float getdWeightSword() const {
		return this->dataSword.getWeight();

#pragma endregion
}
;
#endif