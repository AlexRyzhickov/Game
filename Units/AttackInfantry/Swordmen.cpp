//
// Created by Alex on 21.03.2020.
//

#include "Swordmen.h"

Swordmen::Swordmen(int startX, int startY, Weapon *unitWeapon, Armor *unitArmor) : AttackInfantry(startX, startY,
                                                                                                  unitWeapon,
                                                                                                  unitArmor) {
    Swordmen::health = 100;
}

void Swordmen::attack() {

}
