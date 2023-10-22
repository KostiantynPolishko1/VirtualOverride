#pragma once

#ifndef SWORD_H
#define SWORD_H

#include "Blade.h"
#include "Handler.h"
#include "Stopper.h"

class Sword
{
private:
	char* name;
	float weightSword;
	Blade blade;
	Handler handler;
	Stopper stopper;

public:
	Sword() : name{}, weightSword{}, blade {}, handler{}, stopper{} {}

	Sword(short kindSword) {
		this->name = arrKindSwords[kindSword];
		this->blade = Blade(kindSword);
		this->handler = Handler(kindSword);
		this->stopper = Stopper(kindSword);
		this->weightSword = this->blade.getBladeWeight() + this->handler.getHandlerWeight() + this->stopper.getStopperWeight();
	}

	Sword getCutWeapon() const {
		return *this;
	}

	float getWeight() const {
		return this->weightSword;
	}
}
;
#endif