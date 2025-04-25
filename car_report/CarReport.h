//
// Created by Michał Hubczak on 25/01/2024.
//

#ifndef INC_240125_1_CARREPORT_H
#define INC_240125_1_CARREPORT_H
#include <iostream>
#include "NoCarUsageException.h"
#include "ZeroKmException.h"
#include "ZeroLiterException.h"

class CarReport {
std::string kierowca;
int km, l;
public:
    CarReport(std::string, int, int);
    double getRange();
    std::string getKierowca();
    int getKm();
    int getL();
};


#endif //INC_240125_1_CARREPORT_H
