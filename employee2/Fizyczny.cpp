//
// Created by Michał Hubczak on 18/01/2024.
//

#include "Fizyczny.h"
int Fizyczny::getWynagrodzenie() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int dzis=1900 + ltm->tm_year;
    return getStawkaBazowa()*(1+3*(dzis-getRokZatr()));
}
Fizyczny::Fizyczny(std::string i, std::string n, int rU, int r, int k) : Pracownik(i,n,rU,"Fizyczny",r) , kod_stan{k}{}
int Fizyczny::getKod(){
    return kod_stan;
}