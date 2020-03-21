//
// Created by Alex on 21.03.2020.
//

#include "ForestLandscape.h"
#include "typeinfo"
#include "../../Units/RangedUnits/RangedUnit.h"

bool ForestLandscape::getInformationAboutLandscape() {
    return true;
}

int ForestLandscape::getBonus(Unit *unit) {
    if (typeid(RangedUnit) == typeid(*unit)) {
        return 25;
    } else {
        return 0;
    }
}
