//
// Created by Athena on 13.12.2022.
//

#include "robots.h"

using namespace std;


Robot::Robot(int id, int X, int Y) {
    ID     = id;
    coordX = X;
    coordY = Y;
}

int Robot::getCoordX() const {
    return coordX;
}

int Robot::getCoordY() const {
    return coordY;
}

int Robot::getID() const {
    return ID;
}

void Robot::death(const int killerID){
    coordX = 0;
    coordY = 0;
    dead = true;
    killer = killerID;
}

bool Robot::isDead() const {
    return dead;
}

int Robot::getKiller() const{
    return killer;
}

enum class Direction {UP, DOWN, LEFT, RIGHT};


void Robot::moveRobot(int direction, int LIMITXMAX, int LIMITYMAX) {
    const int LIMITXMIN = 0;
    const int LIMITYMIN = 0;

    if(!dead) {
        switch (direction) {
            case int(Direction::UP) :
                if (coordY - 1 > LIMITYMIN)
                    coordY--;
                break;

            case int(Direction::DOWN) :
                if (coordY + 1 < LIMITYMAX)
                    coordY++;
                break;

            case int(Direction::LEFT) :
                if (coordX - 1 > LIMITXMIN)
                    coordX--;
                break;

            case int(Direction::RIGHT) :
                if (coordX + 1 < LIMITXMAX)
                    coordX++;
                break;
        }

    }

}

bool Robot::kill(std::vector<Robot> &vecRobot) const {
    for (Robot& robot2 : vecRobot) {
        if ((ID != robot2.getID()) and !(robot2.isDead())) {
            if (coordX == robot2.getCoordX()) {
                if (coordY == robot2.getCoordY()) {
                    robot2.death(ID);
                    return true;
                }
            }
        }
    }
    return false;
}