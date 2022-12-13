//
// Created by Athena on 13.12.2022.
//

#include "robots.h"
#include "terrain.h"

#include <iostream>
using namespace std;

void Robot::setCoords(double x, double y){
    coordX  = x;
    coordY  = y;
};

int Robot::getCoordX() const {
    return coordX;
}

int Robot::getCoordY() const {
    return coordY;
}


enum class Direction {UP, DOWN, LEFT, RIGHT};
int limiteXMax = Terrain::getLongueur();
int limiteYMax = Terrain::getHauteur();
int limiteXMin,limiteYMin = 0;


void Robot::deplacerRobot(int sens) {
    switch (sens) {
        case int(Direction::UP) :
            if(coordY-1 > limiteYMin)
                coordY--;
            break;

        case int(Direction::DOWN) :
            if(coordY+1 > limiteYMax)
                coordY++;
            break;

        case int(Direction::LEFT) :
            if(coordX-1 > limiteXMin)
                coordX--;
            break;

        case int(Direction::RIGHT) :
            if(coordX+1 > limiteXMax)
                coordX++;
            break;
    }




}