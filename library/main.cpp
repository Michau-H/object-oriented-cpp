#include "Ksiazka.h"
#include "Czytelnik.h"
#include "Biblioteka.h"
#include <iostream>

int main (){
    std::cout << "dziala" << std::endl;
    Biblioteka Empik;
    Ksiazka k1=Ksiazka("sienkiewicz", "krzyzaki");
    Ksiazka k2=Ksiazka("mickiewicz", "tadeusz");
    Ksiazka k3=Ksiazka("slowacki", "kordian");
    Czytelnik c1=Czytelnik("Jan", "Kowalski", 2);
    Czytelnik c2=Czytelnik("Jadwiga", "Nowak", 3);
    Empik.dodajKsiazke(k1);
    Empik.dodajKsiazke(k2);
    Empik.dodajKsiazke(k3);
    Empik.dodajCzytelnika(c1);
    Empik.dodajCzytelnika(c2);
    Empik.drukujKsiegozbior();
    Empik.drukujCzytelnikow();
    std::cout << std::endl;
    Empik.WypozyczKsiazke(c2,k1);
    Empik.drukujKsiegozbior();
    Empik.drukujCzytelnikow();
    std::cout << std::endl;
    Empik.OddajKsiazke(c2,k1);
    Empik.drukujKsiegozbior();
    Empik.drukujCzytelnikow();
}