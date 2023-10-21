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

	Warrior warrior;
	WarriorWeapons warriorSword;

	warrior.getWeaponsCut(&warriorSword[Normal]);
	std::cout << "\nWeapons(SwordNormal):"
		<< "\n\tGradeAttack = " << warrior.geAttacktWarrior() << "\n";

	return 0;
}
;