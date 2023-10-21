#pragma once

#ifndef WEAPONSCUT_H
#define WEAPONSCUT_H

class WeaponsCut
{
public:
	short gradeAttack;
	short gradeDefence;
	float weightSword;

	WeaponsCut() : gradeAttack{}, gradeDefence{}, weightSword{} {}

	WeaponsCut(short gradeAttack, short gradeDefence, float weightSword) : 
		gradeAttack{gradeAttack}, gradeDefence{gradeDefence}, weightSword{weightSword} {}

public:
	virtual WeaponsCut initWeaponsCut() {
		return *this;
	}
}
;
#endif