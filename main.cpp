/*
-----------------------------------------------------------------------------------
Nom du fichier  : main.cpp
Auteur(s)       : Ouweis Harun, Léon Surbeck
Classe          : PRG1B
Date creation   : 13.12.2022
Description     : Programme de bataille de robots.
Remarque(s)     : -
Compilateur     : Mingw-w64 g++ 12.2.0
-----------------------------------------------------------------------------------
*/
#include <cstdlib>
#include <iostream>
#include "annexe.h"
#include "robots.h"
#include "terrain.h"

using namespace std;



int main() {


    Robot rob;
    rob.setCoords(13, 2);
    cout << rob.getCoordX() << endl;
    cout << rob.getCoordY() << endl;
    cout << aleatoire(2,10);


 return EXIT_SUCCESS;
}