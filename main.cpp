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
#include <random>
#include <vector>
#include <thread>
#include "annexe.h"
using namespace std;



int main() {
    Terrain terrain;
    terrain.classUserEntry();
    int terrainWidth = terrain.getWidth();
    int terrainHeight = terrain.getHeight();

    size_t nbRobots = terrain.getnbrRobots();

    vector<Robot> vecRobot;
    vector<int>  initCoordX;
    vector<int>  initCoordY;

    for (size_t i = 0; i < (nbRobots); ++i) {
        int randX = aleatoire(1, (terrainWidth - 1));
        int randY = aleatoire(1, (terrainHeight - 1));

        if ((find(initCoordX.begin(), initCoordX.end(), randX) != initCoordX.end()) and
           ((find(initCoordY.begin(), initCoordY.end(), randX) != initCoordY.end()))){
                i--;
        }

        else{
            initCoordX.push_back(randX);
            initCoordY.push_back(randY);
            vecRobot.emplace_back(int(i), randX, randY);
        }
    }

    do {
        std::shuffle(vecRobot.begin(), vecRobot.end(), std::mt19937(std::random_device()()));

        this_thread::sleep_for(100ms);

        display(terrainHeight, terrainWidth, vecRobot);

        for (Robot& robot: vecRobot) {
            robot.moveRobot(aleatoire(0, 3), terrainWidth, terrainHeight);

            if(robot.kill(vecRobot)){
                nbRobots--;
            }
        }

    }while(nbRobots > 1);

    display(terrainHeight, terrainWidth, vecRobot);

    for (Robot robot :vecRobot) {
        if(!robot.isDead()){
            cout << "Robot " << robot.getID() << " won !";
        }
    }

    cin.ignore();
    cin.ignore();
 return EXIT_SUCCESS;
}