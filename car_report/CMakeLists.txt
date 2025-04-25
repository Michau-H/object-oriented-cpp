cmake_minimum_required(VERSION 3.26)
project(240125_1)

set(CMAKE_CXX_STANDARD 23)

add_executable(240125_1 main.cpp
        CarReport.h
        FileParser.h
        CarReport.cpp
        FileParser.cpp
        ZeroKmException.h
        ZeroKmException.cpp
        ZeroLiterException.h
        ZeroLiterException.cpp
        NoCarUsageException.h
        NoCarUsageException.cpp)
