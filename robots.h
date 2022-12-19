//
// Created by Athena on 13.12.2022.
//

#ifndef LABO_07_ROBOTS_ROBOTS_H
#define LABO_07_ROBOTS_ROBOTS_H


#include <vector>
#include <string>

class Robot {
public:
    Robot(int id, int X, int Y);
    void moveRobot(int direction, int LIMITXMAX, int LIMITYMAX);
    bool kill (std::vector<Robot>& vecRobot) const;
    void death(int killerID);
    bool isDead()         const;
    int  getKiller()      const;
    int  getCoordX()      const;
    int  getCoordY()      const;
    int  getID()          const;

private:
    double coordX = 10;
    double coordY = 10;
};





#endif //LABO_07_ROBOTS_ROBOTS_H
