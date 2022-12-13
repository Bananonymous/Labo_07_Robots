//
// Created by Athena on 13.12.2022.
//

#ifndef LABO_07_ROBOTS_TERRAIN_H
#define LABO_07_ROBOTS_TERRAIN_H
#include <iostream>
#include <iomanip>
#include <limits>


class Terrain {

public:
    void entreeUtilisateur(int X, int Y);
    static int  getLargeur()  const;
    static int  getHauteur()  const;
private:
    double largeur = 10;
    double hauteur = 10;
};



#endif //LABO_07_ROBOTS_TERRAIN_H
