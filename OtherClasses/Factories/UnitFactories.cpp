//
// Created by Alex on 21.03.2020.
//

#include "UnitFactories.h"

UnitFactory::UnitFactory() {
    axe = new Axe();
    spear = new Spear();
    sword = new Sword();
    bow = new Bow();
    rod = new Rod();
    attackUnitArmor = new AttackUnitArmor();
    heavyUnitArmor = new HeavyUnitArmor();
    rangeUnitArmor = new RangeUnitArmor();
}

UnitFactory::~UnitFactory() {
    delete axe;
    delete spear;
    delete sword;
    delete bow;
    delete rod;
    delete attackUnitArmor;
    delete heavyUnitArmor;
    delete rangeUnitArmor;
}

Swordmen *UnitFactory::getSwordsmen() {
    return new Swordmen(0,0,sword,attackUnitArmor);
}

Spearmen *UnitFactory::getSpearmen() {
    return new Spearmen(0,0,spear,attackUnitArmor);
}

Knight *UnitFactory::getKnight() {
    return new Knight(0,0,sword,heavyUnitArmor);
}

King *UnitFactory::getKing() {
    return new King(0,0,sword,heavyUnitArmor);
}

Archer *UnitFactory::getArcher() {
    return new Archer(0,0,bow,rangeUnitArmor);
}

Magician *UnitFactory::getMagician() {
    return new Magician(0, 0, rod, rangeUnitArmor);
}
