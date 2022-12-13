//
// Created by Athena on 13.12.2022.
//

#ifndef LABO_07_ROBOTS_ROBOTS_H
#define LABO_07_ROBOTS_ROBOTS_H




class Robot {
public:
    void setCoords(double x, double y);
    void deplacerRobot(int sens);
    int  getCoordX()      const;
    int  getCoordY()      const;

private:
    double coordX = 10;
    double coordY = 10;
};





#endif //LABO_07_ROBOTS_ROBOTS_H
