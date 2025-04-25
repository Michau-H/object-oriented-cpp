#include "Czytelnik.h"

Czytelnik::Czytelnik(std::string im, std::string na, int l){
    imie=im;
    nazwisko=na;
    limitKsiazek=l;
    ksiazkiWypozyczone=std::vector<Ksiazka>();
}
std::string Czytelnik::getImie(){
    return imie;}
std::string Czytelnik::getNazwisko(){
    return nazwisko;}
int Czytelnik::getLimitKsiazek(){
    return limitKsiazek;}
std::vector<Ksiazka> Czytelnik::getKsiazkiWypozyczone(){
    return ksiazkiWypozyczone;}
void Czytelnik::wypozycz(Ksiazka ksiazka){
    ksiazkiWypozyczone.push_back(ksiazka);
}
void Czytelnik::oddaj(Ksiazka ksiazka){
    std::vector<Ksiazka>::iterator it;
    int licznik=0;
    for(int i=0; i<ksiazkiWypozyczone.size(); i++){
        if(ksiazkiWypozyczone[i].getTytul()==ksiazka.getTytul() && ksiazkiWypozyczone[i].getAutor()==ksiazka.getAutor())
            licznik=i;
    }
    it=ksiazkiWypozyczone.begin()+licznik;
    ksiazkiWypozyczone.erase(it);
}