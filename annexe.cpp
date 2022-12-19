//
// Created by Athena on 13.12.2022.
//

#include "annexe.h"
#include <random>
#include <iostream>

using namespace std;

int aleatoire(int min, int max){
    std::random_device                   aleatoire_mac;
    std::default_random_engine           generateur(aleatoire_mac());
    std::uniform_int_distribution<int>   distr(min, max);

    return(distr(generateur));
}


void cleanCin(){
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout << "Please enter a correct value : " << endl;
}



void Terrain::classUserEntry() {
    int X, Y, nbRobotInput;
    const int VALMIN = 10;
    const int VALMAX = 10000;
    const int ROBOTSMIN = 1;
    const int ROBOTSMAX = 10;

    X = userEntry(VALMIN,VALMAX,"width [10..1000]  :");
    Y = userEntry(VALMIN,VALMAX,"height [10..1000]  :");
    nbRobotInput = userEntry(ROBOTSMIN, ROBOTSMAX, "nbr of objects [1..10]  :");

    width = X+1;
    height = Y+1;
    nbrRobots = size_t(nbRobotInput);

}

int Terrain::getHeight() const {
    return height;
}

int Terrain::getWidth() const {
    return width;
}

size_t Terrain::getnbrRobots() const {
    return nbrRobots;
}

void display(int terrainHeight, int terrainWidth, std::vector<Robot>& vecRobot){
        bool robotPrint = false;
        system("cls");

        for (int h = 0; h <= terrainHeight; ++h) {
            for (int l = 0; l <= terrainWidth; ++l) {
                if(h==0 or h == terrainHeight){
                    cout << "-";
                }
                else if (l==0 or l == terrainWidth){
                    cout << "|";
                }
                else{
                    for (Robot& robot : vecRobot) {
                        if (robot.getCoordX() == l and robot.getCoordY() == h) {
                            cout << robot.getID();
                            robotPrint = true;
                        }
                    }
                    if(!robotPrint) {
                        cout << " ";
                    }
                    else{
                        robotPrint = false;
                    }
                }

            }
            cout << endl;
        }

        sort( vecRobot.begin(), vecRobot.end(), [](const Robot &a, const Robot &b){ return (a.getID() < b.getID());});

        cout << endl;

        for (Robot& robot : vecRobot) {
            if(robot.isDead())
                cout << "The robot " << robot.getKiller() << " killed robot " << robot.getID() << endl;
        }
}

int userEntry(const int min, const int max, std::string message){
    cout << message << endl;
    int x;
    bool flxError = false;

    do{
        cin >> x;
        if (cin.fail() or x < min or x > max) {
            cleanCin();
            flxError = true;
            continue;
        }
    }while(flxError);

return x;

}


