#include <iostream>
#include <vector>
#include "Pracownik.h"
int main() {
    Pracownik osoba1("Jan", "Kowalski", 1988, "fizyk", 1999);
    Pracownik osoba2("Piotr", "Nowak", 2000, "informatyk", 2003);
    std::vector<Pracownik> p;
    p.push_back(osoba1);
    p.push_back(osoba2);
    p[0].setStawkaBazowa(1000);
    p[1].setStawkaBazowa(5000);
    for(int i=0; i<p.size(); i++){
        std::cout<<"Imie: "<<p[i].getImie()<<" Nazwisko: "<<p[i].getNazwisko()<<" Rok ur.: "<<p[i].getRokUr()<<" Rok zatr.: "<<p[i].getRokZatr()<<" Stanowisko: "<<p[i].getStanowisko()<<" Wynagrodzenie: "<<p[i].getWynagrodzenie()<<std::endl;
    }

    return 0;
}
