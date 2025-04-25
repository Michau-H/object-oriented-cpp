//
// Created by Michał Hubczak on 18/01/2024.
//

#include "Umyslowy.h"
int Umyslowy::getWynagrodzenie() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int dzis=1900 + ltm->tm_year;
    return getStawkaBazowa()*(1+0.5*(dzis-getRokZatr()));
}
Umyslowy::Umyslowy(std::string i, std::string n, int rU, int r, int k) : Pracownik(i,n,rU,"Umyslowy",r) , kod_stan{k}{}
int Umyslowy::getKod(){
    return kod_stan;
}