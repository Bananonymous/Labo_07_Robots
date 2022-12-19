//
// Created by Athena on 13.12.2022.
//

#include "terrain.h"

using namespace std;

void Terrain::entreeUtilisateur() {
    int       X,Y;
    bool      erreurFlux;
    const int VALEURMIN = 10;
    const int VALEURMAX = 10000;
    do {
        erreurFlux = false;
        cout << "largeur [10..1000]  :" << endl;
        cin >> X;

        if (cin.fail()) { // Vérification erreur de saisie
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Veuillez saisir une nouvelle valeur valide" << endl;
            erreurFlux = true;

        } else if (X < VALEURMIN || X > VALEURMAX) {
            cout << "Veuillez saisir une nouvelle valeur valide" << endl;
            erreurFlux = true;
        }
        cout << "hauteur [10..1000]  :" << endl;
        cin >> Y;

        if (cin.fail()) { // Vérification erreur de saisie
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Veuillez saisir une nouvelle valeur valide" << endl;
            erreurFlux = true;

        } else if (Y < VALEURMIN || Y > VALEURMAX) {
            cout << "Veuillez saisir une nouvelle valeur valide" << endl;
            erreurFlux = true;

        }
    }while (erreurFlux);
    largeur = X;
    hauteur = Y;

}

int  Terrain::getHauteur() const{
    return hauteur;
}

int Terrain::getLargeur() const{
    return largeur;
}