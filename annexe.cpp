//
// Created by Athena on 13.12.2022.
//

#include "annexe.h"
#include <random>





int aleatoire(int min, int max){
    std::random_device                       aleatoire_mac;
    std::default_random_engine               generateur(aleatoire_mac());
    std::uniform_int_distribution<int>       distr(min, max);

    return(distr(generateur));
}