//
// Created by Alex on 22.03.2020.
//

#ifndef GAME_GAME_H
#define GAME_GAME_H


#include "../OtherClasses/Base/Base.h"
#include "../OtherClasses/Field/Field.h"

class Game {
public:
    Game();
    ~Game();
private:
    Base *base;
    Field *field;
    Unit **units;
};


#endif //GAME_GAME_H
