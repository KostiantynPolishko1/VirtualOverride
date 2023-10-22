#pragma once

#ifndef WARRIOR_H
#define WARRIOR_H

#include "WarriorWeapons.h"

class Warrior
{
private:
	short attackWarrior;
	short defenceWarrior;
	float selfWeightWarrior;
	WeaponsCut weaponsCut;

public:
	Warrior() : attackWarrior{}, defenceWarrior{}, selfWeightWarrior{}, weaponsCut{} {};

	void getWeaponsCut(WeaponsCut* weaponsCut) 
	{
		*this = Warrior();
		this->weaponsCut = weaponsCut->getWeaponsCut();
    
		this->attackWarrior += this->weaponsCut.getAttacktSword();
		this->defenceWarrior += this->weaponsCut.getDefenceSword();
		this->selfWeightWarrior += this->weaponsCut.getdWeightSword();
	}

	short getAttacktWarrior() const {
		return this->attackWarrior;
	}
	
	short getDefenceWarrior() const {
		return this->defenceWarrior;
	}
	
	float getWeightWarrior() const {
		return this->selfWeightWarrior;
	}
}
;
#endif