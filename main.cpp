#include <iostream>
#include "Game/Game.h"
#include "OtherClasses/NeutralObjects/Generators/ArmorGenerator.h"

int main() {

    Game *game = new Game();
    delete(game);

    // Демонстрационный пример работы генератора черех перегрузку оператора []
   /* auto *unitFactory = new UnitFactory();
    Swordmen *swordsmen = unitFactory->getSwordsmen();
    std::cout << swordsmen->getArmor() << "\n";
    auto *armorGenerator = new ArmorGenerator;
    (*armorGenerator)[swordsmen->getArmorForGenerator()];
    std::cout << swordsmen->getArmor();*/

    return 0;
}