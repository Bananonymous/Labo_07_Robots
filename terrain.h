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
     void entreeUtilisateur();
     int  getLargeur()  const;
     int  getHauteur()  const;
private:
    int largeur = 10;
    int hauteur = 10;
};



#endif //LABO_07_ROBOTS_TERRAIN_H
