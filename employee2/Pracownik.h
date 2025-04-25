//
// Created by Michał Hubczak on 18/01/2024.
//

#ifndef INC_240118_2_PRACOWNIK_H
#define INC_240118_2_PRACOWNIK_H
#include "Czlowiek.h"
#include <ctime>
class Pracownik: public Czlowiek {
    std::string typ;
    int rokZatr;
    double stawkaBazowa;
public:
    Pracownik(std::string,std::string,int,std::string s, int r);
    void setStawkaBazowa(double stawka);
    virtual int getWynagrodzenie()=0;
    std::string getStanowisko();
    int getRokZatr();
    double getStawkaBazowa();
    virtual int getKod()=0;
};


#endif //INC_240118_2_PRACOWNIK_H
