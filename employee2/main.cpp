#include <iostream>
#include <vector>
#include "Pracownik.h"
#include "Umyslowy.h"
#include "Fizyczny.h"

int main() {
    Fizyczny osoba1("Jan", "Kowalski", 1988, 1999,123);
    Umyslowy osoba2("Piotr", "Nowak", 2000, 2003, 456);
    std::vector<Pracownik*> p;
    p.push_back(&osoba1);
    p.push_back(&osoba2);
    p[0]->setStawkaBazowa(1000);
    p[1]->setStawkaBazowa(5000);
    for(int i=0; i<p.size(); i++){
        std::cout<<"Imie: "<<p[i]->getImie()<<" Nazwisko: "<<p[i]->getNazwisko()<<" Rok ur.: "<<p[i]->getRokUr()<<" Rok zatr.: "<<p[i]->getRokZatr()<<" Typ pracy: "<<p[i]->getStanowisko()<<" Wynagrodzenie: "<<p[i]->getWynagrodzenie()<<" Kod stanowiska: "<<p[i]->getKod()<<std::endl;
    }

    return 0;
}
