//
// Created by Alex on 21.03.2020.
//

#ifndef GAME_SWORDMEN_H
#define GAME_SWORDMEN_H


#include "AttackInfantry.h"

class Swordmen: public AttackInfantry {
public:
    Swordmen(int startX, int startY, Weapon *unitWeapon, Armor *unitArmor);
    void attack() override;
};


#endif //GAME_SWORDMEN_H
