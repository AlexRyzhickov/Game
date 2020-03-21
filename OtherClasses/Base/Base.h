//
// Created by Alex on 21.03.2020.
//

#ifndef GAME_BASE_H
#define GAME_BASE_H

#include <vector>
#include "../../Units/Unit.h"
#include "../Factories/UnitFactories.h"

class Base {
    const int xPosition;
    const int yPosition;
    int healthBase;
    const int maxCountUnitsOnBase;
    const int maxCountUnitsInGame;
    int countUnitsOnBase;
    int countUnitsInGame;
    int money;
    Unit **units;
    UnitFactory *factory;
public:
    explicit Base(Unit **units, int x,int y, int maxCountUnitsInGame);
    ~Base();
    void addSwordsmen();
    void addSpearmen();
    void addArcher();
    void addMagician();
    void addKnight();
    void addKing();

    void handleEvent(const Unit& unit);
    int getCountUnitsInGame() const;

    std::vector<int> vectorDeleteUnits;

    const int getXPosition() const;

    const int getYPosition() const;

private:
    void addUnit(Unit *unit);
};


#endif //GAME_BASE_H
