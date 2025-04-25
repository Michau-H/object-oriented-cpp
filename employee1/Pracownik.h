//
// Created by Michał Hubczak on 11/01/2024.
//

#ifndef INC_240111_2_PRACOWNIK_H
#define INC_240111_2_PRACOWNIK_H
#include "Czlowiek.h"
#include <ctime>
class Pracownik: public Czlowiek {
std::string stanowisko;
int rokZatr;
double stawkaBazowa;
public:
    Pracownik(std::string,std::string,int,std::string s, int r);
    void setStawkaBazowa(double stawka);
    int getWynagrodzenie();
    std::string getStanowisko();
    int getRokZatr();

};


#endif //INC_240111_2_PRACOWNIK_H
