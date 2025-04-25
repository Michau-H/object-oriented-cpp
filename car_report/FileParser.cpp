//
// Created by Michał Hubczak on 25/01/2024.
//

#include "FileParser.h"

FileParser::FileParser(std::string a) {
    plik.open(a);
}
FileParser::~FileParser(){
    plik.close();
}
std::vector<CarReport> FileParser::NextPerson() {
    std::vector <CarReport> kierowcy;
    std::string imie, nazwisko;
    int km, l;
    while(plik>>imie>>nazwisko>>km>>l)
        kierowcy.push_back(CarReport(imie + " " + nazwisko, km, l));
    return kierowcy;
}