//
// Created by Michał Hubczak on 18/01/2024.
//

#include "Pracownik.h"

Pracownik::Pracownik(std::string i, std::string n, int rU, std::string s, int r) : Czlowiek(i,n,rU), typ{s},  rokZatr{r}, stawkaBazowa{}{}
void Pracownik::setStawkaBazowa(double stawka) {
    stawkaBazowa=stawka;
}

std::string Pracownik::getStanowisko(){
    return typ;
}
int Pracownik::getRokZatr(){
    return rokZatr;
}
double Pracownik::getStawkaBazowa() {
    return stawkaBazowa;
}