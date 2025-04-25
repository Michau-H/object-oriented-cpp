//
// Created by Michał Hubczak on 25/01/2024.
//

#ifndef INC_240125_1_FILEPARSER_H
#define INC_240125_1_FILEPARSER_H
#include <iostream>
#include <fstream>
#include "CarReport.h"
#include <vector>

class FileParser {
std::fstream plik;
public:
    FileParser(std::string a);
    std::vector <CarReport> NextPerson();
    ~FileParser();
};


#endif //INC_240125_1_FILEPARSER_H
