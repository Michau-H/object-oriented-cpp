//
// Created by Michał Hubczak on 25/01/2024.
//

#ifndef INC_240125_1_NOCARUSAGEEXCEPTION_H
#define INC_240125_1_NOCARUSAGEEXCEPTION_H
#include <iostream>
#include <exception>

class NoCarUsageException: public std::exception {
public:
    NoCarUsageException (){}
    NoCarUsageException ( const NoCarUsageException&){}
//    const char* what() const noexcept{ return "samochod nie był używany";}
    virtual const char* what() const noexcept{
        return "samochod nie był używany"; }
};


#endif //INC_240125_1_NOCARUSAGEEXCEPTION_H
