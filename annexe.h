//
// Created by Athena on 13.12.2022.
//

#ifndef LABO_07_ROBOTS_ANNEXE_H
#define LABO_07_ROBOTS_ANNEXE_H


#include <iostream>
#include <iomanip>
#include <limits>
#include <vector>
#include "robots.h"


class Terrain {

public:
    void    classUserEntry();
    int     getWidth()    const;
    int     getHeight()    const;
    size_t  getnbrRobots() const;
private:
    int     width     = 10;
    int     height     = 10;
    size_t  nbrRobots  = 5;
};




int aleatoire(int min, int max);

int userEntry(int min, int max, std::string message);


void display(int terrainHeight, int terrainWidth, std::vector<Robot>& vecRobot);


#endif //LABO_07_ROBOTS_ANNEXE_H
