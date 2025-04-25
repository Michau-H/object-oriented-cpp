#include "Biblioteka.h"

Biblioteka::Biblioteka(){
    std::vector<Ksiazka> ksiegozbior;
    std::vector<Czytelnik> czytelnicy;

}
bool Biblioteka::ksiazkaJestDostepna(Ksiazka ksiazka){
    for(int i=0; i<ksiegozbior.size(); i++){
            if(ksiegozbior[i].getTytul()==ksiazka.getTytul() && ksiegozbior[i].getAutor()==ksiazka.getAutor())
                return true;
    }
    return false;
}
bool Biblioteka::czytelnikOsiagnalLimit(Czytelnik czytelnik){
    if(czytelnik.getKsiazkiWypozyczone().size()<czytelnik.getLimitKsiazek())
        return false;
    return true;
}
void Biblioteka::dodajCzytelnika(Czytelnik czytelnik){
    czytelnicy.push_back(czytelnik);
}
void Biblioteka::WypozyczKsiazke(Czytelnik czytelnik,Ksiazka ksiazka){
    int licznik;
    for(int i=0; i<czytelnicy.size(); i++){
        if(czytelnicy[i].getImie()==czytelnik.getImie() && czytelnicy[i].getNazwisko()==czytelnik.getNazwisko())
            licznik=i;
    }
    if(!czytelnikOsiagnalLimit(czytelnik)){
        if(ksiazkaJestDostepna(ksiazka)){
            czytelnicy[licznik].wypozycz(ksiazka);
            for(int i=0; i<ksiegozbior.size(); i++){
                if(ksiegozbior[i].getTytul()==ksiazka.getTytul() && ksiegozbior[i].getAutor()==ksiazka.getAutor())
                    ksiegozbior.erase(ksiegozbior.begin()+i);
            }
        }
    }
}
void Biblioteka::OddajKsiazke(Czytelnik czytelnik,Ksiazka ksiazka){
    ksiegozbior.push_back(ksiazka);
    int licznik;
    for(int i=0; i<czytelnicy.size(); i++){
        if(czytelnicy[i].getImie()==czytelnik.getImie() && czytelnicy[i].getNazwisko()==czytelnik.getNazwisko())
            licznik=i;
    }
    czytelnicy[licznik].oddaj(ksiazka);
}
void Biblioteka::dodajKsiazke(Ksiazka ksiazka){
    ksiegozbior.push_back(ksiazka);
}
void Biblioteka::drukujCzytelnikow(){
    for(int i=0; i<czytelnicy.size(); i++){
        std::cout << std::setw(12) << czytelnicy[i].getImie() << std::setw(12) << czytelnicy[i].getNazwisko() << std::setw(5) << czytelnicy[i].getKsiazkiWypozyczone().size() << '/' << std::setw(2) << czytelnicy[i].getLimitKsiazek() << std::endl;
    }
}
void Biblioteka::drukujKsiegozbior(){
    for(int i=0; i<ksiegozbior.size(); i++){
        std::cout << std::setw(12) << ksiegozbior[i].getAutor() << std::setw(12) << ksiegozbior[i].getTytul() << std::endl;
    }
}