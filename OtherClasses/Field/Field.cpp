//
// Created by Alex on 21.03.2020.
//

#include <iostream>
#include "Field.h"

Field::Field(int width, int height, int maxCountUnits) : width(width), height(height), maxCountUnits(maxCountUnits) {
    Field::countUnits = 0;
    Field::landscapeFactory = new LandscapeFactory;
    Field::cells = new GameCell *[height];
    for (int i = 0; i < height; i++) {
        Field::cells[i] = new GameCell[width];
    }
    int count = 0;
    for (int j = 0; j < height; ++j) {
        for (int i = 0; i < width; ++i) {
            cells[i][j].numer = count++;
            cells[i][j].setLanscape(landscapeFactory->getFieldLandscape());
        }
    }

    // Демонстрационный пример работы итератора
    // Выводи номера клеток в двойном цикле
    /*for (int j = 0; j < height; ++j) {
        for (int i = 0; i < width; ++i) {
            std::cout << cells[i][j].numer << " ";
        }
        std::cout << '\n';
    }*/

    // Выводим номера клеток с использованием итератора
    /*auto it = Field::Iterator(begin());

    while (it!=end()){
        std::cout << (*it).numer<<"\n";
        ++it;
    }*/

}

Field::~Field() {
    for (int i = 0; i < height; i++) {
        delete (Field::cells[i]);
    }
    delete (cells);
}


Field::Field(const Field &field) : height(field.height), width(field.width),
                                   maxCountUnits(field.maxCountUnits) {

    Field::countUnits = field.countUnits;
    Field::cells = new GameCell *[height];
    for (int i = 0; i < height; i++) {
        Field::cells[i] = new GameCell[width];
    }

    for (int j = 0; j < height; ++j) {
        for (int i = 0; i < width; ++i) {
            Field::cells[j][i] = field.cells[j][i];
        }
    }

}


int Field::getWidth() const {
    return width;
}


int Field::getHeight() const {
    return height;
}


int Field::getMaxCountUnits() const {
    return maxCountUnits;
}


int Field::getCountUnits() const {
    return countUnits;
}

void Field::appendUnits(int x, int y, Unit *unit) {
    if (countUnits < maxCountUnits) {
        cells[x][y].setUnit(unit);
        countUnits++;
    }
}

void Field::deleteUnits(int x, int y) {
    cells[x][y].deleteUnit();
    countUnits--;
}

void Field::setBase(int x,int y,Base *base) {
    Field::cells[x][y].setBase(base);
}