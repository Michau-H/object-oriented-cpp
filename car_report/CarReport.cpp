//
// Created by Michał Hubczak on 25/01/2024.
//

#include "CarReport.h"

CarReport::CarReport(std::string a, int k, int dl): kierowca{a}, km{k}, l{dl}{}
double CarReport::getRange() {
    if(km==0 && l==0)
        throw NoCarUsageException();
    else if(km==0)
        throw ZeroKmException();
    else if(l==0)
        throw ZeroLiterException();
    return double(km)/double(l);
}
std::string CarReport::getKierowca(){
    return kierowca;
}
int CarReport::getKm(){
    return km;
}
int CarReport::getL(){
    return l;
}