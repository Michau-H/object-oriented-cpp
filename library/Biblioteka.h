#ifndef biblioteka_H 
#define biblioteka_H
#include <vector>
#include <iomanip>
#include <iostream>
#include "Ksiazka.h"
#include "Czytelnik.h"

class Biblioteka {
private:
    std::vector<Czytelnik> czytelnicy;
    std::vector<Ksiazka> ksiegozbior;
    bool ksiazkaJestDostepna(Ksiazka ksiazka);
    bool czytelnikOsiagnalLimit(Czytelnik czytelnik);
public:
    Biblioteka();
    void dodajCzytelnika(Czytelnik czytelnik);
    void WypozyczKsiazke(Czytelnik czytelnik,Ksiazka ksiazka);
    void OddajKsiazke(Czytelnik czytelnik,Ksiazka ksiazka);
    void dodajKsiazke(Ksiazka ksiazka);
    void drukujCzytelnikow();
    void drukujKsiegozbior();
};
#endif