//
// Created by Michał Hubczak on 18/01/2024.
//

#ifndef INC_240118_2_UMYSLOWY_H
#define INC_240118_2_UMYSLOWY_H
#include "Pracownik.h"

class Umyslowy: public Pracownik {
    int kod_stan;
public:
    Umyslowy(std::string,std::string,int, int r, int k);
    int getWynagrodzenie();
    int getKod();
};


#endif //INC_240118_2_UMYSLOWY_H
