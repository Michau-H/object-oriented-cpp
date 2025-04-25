#ifndef CZYTELNIK_H 
#define CZYTELNIK_H
#include <string>
#include <vector>
#include "Ksiazka.h"

class Czytelnik {
private:
    std::string imie, nazwisko;
    int limitKsiazek;
    std::vector<Ksiazka> ksiazkiWypozyczone;
public:
    Czytelnik(std::string, std::string, int);
    std::string getImie();
    std::string getNazwisko();
    int getLimitKsiazek();
    std::vector<Ksiazka> getKsiazkiWypozyczone();
    void wypozycz(Ksiazka);
    void oddaj(Ksiazka);
};
#endif