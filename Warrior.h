#pragma once

#ifndef WARRIOR_H
#define WARRIOR_H

#include "SwordNormal.h"
#include "SwordOneHalf.h"
#include "SwordDouble.h"

class Warrior
{
private:
	short attackWarrior;
	short defenceWarrior;
	float selfWeightWarrior;
	WeaponsCut weaponsCut;

public:
	Warrior() : attackWarrior{}, defenceWarrior{}, selfWeightWarrior{}, weaponsCut{} {};

	void initWeaponsCut(WeaponsCut* weaponsCut) 
	{
		*this = Warrior();
		this->weaponsCut = weaponsCut->initWeaponsCut();

		this->attackWarrior = this->weaponsCut.gradeAttack;
		this->defenceWarrior = this->weaponsCut.gradeDefence;
		this->selfWeightWarrior = this->weaponsCut.weightSword;
	}

	short geAttacktWarrior() const {
		return this->attackWarrior;
	}
	
	short geDefenceWarrior() const {
		return this->defenceWarrior;
	}
	
	short geWeightWarrior() const {
		return this->selfWeightWarrior;
	}
}
;
#endif