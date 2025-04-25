//
// Created by Michał Hubczak on 11/01/2024.
//

#include "Czlowiek.h"

Czlowiek::Czlowiek(std::string i, std::string n, int r) : imie{i}, nazwisko{n}, rokUr{r}{}
std::string Czlowiek::getImie(){
    return imie;
}
std::string Czlowiek::getNazwisko(){
    return nazwisko;
}
int Czlowiek::getRokUr(){
    return rokUr;
}