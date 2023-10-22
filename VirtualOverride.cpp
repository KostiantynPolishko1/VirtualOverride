#include <iostream>
#include "Warrior.h"
#include "WarriorWeapons.h"

enum SwordKind {
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
		<< "\n\tWeightSword= " << warrior0.getWeightWarrior() << "\n";

	return 0;
}
;