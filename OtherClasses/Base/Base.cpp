//
// Created by Alex on 21.03.2020.
//

#include <iostream>
#include "Base.h"

Base::Base(Unit **units, int x,int y, int maxCountUnitsInGame) : yPosition(y), xPosition(x), maxCountUnitsInGame(maxCountUnitsInGame),
                                                                 maxCountUnitsOnBase(10) {
    Base::countUnitsOnBase = 0;
    Base::countUnitsInGame = 0;
    Base::healthBase = 1000;
    Base::money = 1000;
    Base::units = units;
    Base::factory = new UnitFactory;
    Base::vectorDeleteUnits.reserve(maxCountUnitsInGame);

    // Моделируем создание юнитов и их смерть
   /* addSwordsmen();
    delete(units[0]);
    addSwordsmen();
    addSwordsmen();
    addKing();*/
}

void Base::addUnit(Unit *unit) {
    if(vectorDeleteUnits.empty()) {
        units[countUnitsOnBase] = unit;
        units[countUnitsOnBase]->setNumerInArmy(countUnitsOnBase);
        units[countUnitsOnBase]->add(this);
        countUnitsOnBase++;
        countUnitsInGame++;
    } else{
        units[vectorDeleteUnits.front()] = unit;
        units[vectorDeleteUnits.front()]->setNumerInArmy(vectorDeleteUnits.front());
        units[vectorDeleteUnits.front()]->add(this);
        vectorDeleteUnits.erase(vectorDeleteUnits.begin());
        countUnitsInGame++;
    }
}

void Base::addSwordsmen() {
    addUnit(factory->getSwordsmen());

}

void Base::addSpearmen() {
    addUnit(factory->getSpearmen());

}

void Base::addArcher() {
    addUnit(factory->getArcher());

}

void Base::addMagician() {
    addUnit(factory->getMagician());

}

void Base::addKing() {
    addUnit(factory->getKing());

}

void Base::addKnight(){
    addUnit(factory->getKnight());

}

void Base::handleEvent(const Unit& unit) {
    std::cout << unit.getNumerInArmy() << " ";
    vectorDeleteUnits.emplace_back(unit.getNumerInArmy());
    countUnitsInGame--;
}

Base::~Base() {
    delete(factory);
}

int Base::getCountUnitsInGame() const {
    return countUnitsInGame;
}

const int Base::getXPosition() const {
    return xPosition;
}

const int Base::getYPosition() const {
    return yPosition;
}