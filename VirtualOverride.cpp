#include <iostream>
#include "Warrior.h"

int main(void)
{
    //WeaponsCut weapons;


    std::cout << "\nWarrior Property\n";

    Warrior warrior;
    std::cout << "\nWeapons(Default):"
        << "\n\tGradeAttack = " << warrior.geAttacktWarrior() << "\n";

    SwordNormal swordNormal;
    warrior.initWeaponsCut(&swordNormal);
    std::cout << "\nWeapons(SwordNormal):"
        << "\n\tGradeAttack = " << warrior.geAttacktWarrior() << "\n";
    
    SwordOneHalf swordOneHalf;
    warrior.initWeaponsCut(&swordOneHalf);
    std::cout << "\nWeapons(SwordOneHalf):"
        << "\n\tGradeAttack = " << warrior.geAttacktWarrior() << "\n";
    
    SwordDouble swordDouble;
    warrior.initWeaponsCut(&swordDouble);
    std::cout << "\nWeapons(SwordDouble):"
        << "\n\tGradeAttack = " << warrior.geAttacktWarrior() << "\n";

    return 0;
}
;