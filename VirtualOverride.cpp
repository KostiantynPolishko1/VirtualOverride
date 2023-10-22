#include <iostream>
#include "Warrior.h"
#include "WarriorWeapons.h"

enum Sword {
	Normal,
	OneHalf,
	Double
}
;
int main() {

	Warrior warrior0;
	WarriorWeapons warriorSword;

	warrior0.getWeaponsCut(&warriorSword[Normal]);
	std::cout << "\nWeapons(SwordNormal):"
		<< "\n\tGradeAttack = " << warrior0.getAttacktWarrior() << "\n";

	return 0;
}
;