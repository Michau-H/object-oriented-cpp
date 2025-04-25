//
// Created by Michał Hubczak on 18/01/2024.
//

#ifndef INC_240118_2_FIZYCZNY_H
#define INC_240118_2_FIZYCZNY_H
#include "Pracownik.h"

class Fizyczny: public Pracownik {
    int kod_stan;
public:
    Fizyczny(std::string,std::string,int, int r, int k);
    int getWynagrodzenie();
    int getKod();
};


#endif //INC_240118_2_FIZYCZNY_H
