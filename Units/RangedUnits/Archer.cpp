//
// Created by Alex on 21.03.2020.
//

#include "Archer.h"

Archer::Archer(int startX, int startY, Weapon *unitWeapon, Armor *unitArmor) : RangedUnit(startX, startY, unitWeapon, unitArmor) {
    Archer::health = 100;
    Archer::countShots = 1;

}

void Archer::attack() {

}
