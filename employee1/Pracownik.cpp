//
// Created by Michał Hubczak on 11/01/2024.
//
#include "Pracownik.h"

Pracownik::Pracownik(std::string i, std::string n, int rU, std::string s, int r) : Czlowiek(i,n,rU), stanowisko{s},  rokZatr{r}, stawkaBazowa{}{}
void Pracownik::setStawkaBazowa(double stawka) {
    stawkaBazowa=stawka;
}
int Pracownik::getWynagrodzenie() {
    time_t now = time(0);
    tm *ltm = localtime(&now);
    int dzis=1900 + ltm->tm_year;
    return stawkaBazowa*(1+3*(dzis-rokZatr));
}
std::string Pracownik::getStanowisko(){
    return stanowisko;
}
int Pracownik::getRokZatr(){
    return rokZatr;
}
