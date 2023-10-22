#pragma once

#ifndef WEAPONSCUT_H
#define WEAPONSCUT_H

class WeaponsCut
{
protected:
	short gradeAttack;
	short gradeDefence;
	float weightSword;

public:
	WeaponsCut() : gradeAttack{}, gradeDefence{}, weightSword{} {}

	WeaponsCut(short gradeAttack, short gradeDefence, float weightSword) : 
		gradeAttack{gradeAttack}, gradeDefence{gradeDefence}, weightSword{weightSword} {}

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

	float getWeightSword() const {
		return this->weightSword;
	}

#pragma endregion
}
;
#endif