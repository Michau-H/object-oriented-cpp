//
// Created by Michał Hubczak on 25/01/2024.
//

#ifndef INC_240125_1_ZEROKMEXCEPTION_H
#define INC_240125_1_ZEROKMEXCEPTION_H
#include <iostream>
#include <exception>

class ZeroKmException: public std::exception {
public:
    ZeroKmException (){}
    ZeroKmException ( const ZeroKmException&){}
//    const char* what() const noexcept{ return "samochod nie był używany";}
    virtual const char* what() const noexcept{
        return "zużyto paliwo przy zerowym przebiegu"; }
};


#endif //INC_240125_1_ZEROKMEXCEPTION_H
