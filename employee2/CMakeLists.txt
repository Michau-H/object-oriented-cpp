cmake_minimum_required(VERSION 3.26)
project(240118_2)

set(CMAKE_CXX_STANDARD 23)

add_executable(240118_2 main.cpp
        Pracownik.h
        Czlowiek.h
        Umyslowy.h
        Fizyczny.h
        Umyslowy.cpp
        Fizyczny.cpp
        Pracownik.cpp
        Czlowiek.cpp)
