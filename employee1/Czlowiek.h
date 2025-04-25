//
// Created by Michał Hubczak on 11/01/2024.
//

#ifndef INC_240111_2_CZLOWIEK_H
#define INC_240111_2_CZLOWIEK_H
#include <iostream>
#include <ctime>

class Czlowiek {
std::string imie, nazwisko;
int rokUr;
public:
    Czlowiek(std::string, std::string, int);
    std::string getImie();
    std::string getNazwisko();
    int getRokUr();
};


#endif //INC_240111_2_CZLOWIEK_H
