//
// Created by Michał Hubczak on 25/01/2024.
//

#ifndef INC_240125_1_ZEROLITEREXCEPTION_H
#define INC_240125_1_ZEROLITEREXCEPTION_H
#include <iostream>
#include <exception>

class ZeroLiterException: public std::exception {
public:
    ZeroLiterException (){}
    ZeroLiterException ( const ZeroLiterException&){}
//    const char* what() const noexcept{ return "samochod nie był używany";}
    virtual const char* what() const noexcept{
        return "przejechano dystans bez zużycia paliwa"; }
};


#endif //INC_240125_1_ZEROLITEREXCEPTION_H
