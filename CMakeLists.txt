cmake_minimum_required(VERSION 3.20)
project(podzielony_projekt)

set(CMAKE_CXX_STANDARD 14)

add_executable(podzielony_projekt main.cpp src/Kino.cpp src/Kino.h src/Uzytkownik.cpp src/Uzytkownik.h)
