//
// Created by barte on 07.01.2022.
//

#ifndef PODZIELONY_PROJEKT_KINO_H
#define PODZIELONY_PROJEKT_KINO_H


using namespace std;

class Kino {
protected:
    string tytul;
    double godzina;
    int miejsca;
    int cenyBiletow;
    int dlugosc;
public:
    Kino(string tytul, double godzina, int miejsca, int cenyBiletow, int dlugosc);
    void zobaczGodziny();
    int zarezerwujMiejsca();
    void wyswietlDlugosc();
    void wyswietlCeny();
    bool sprawdzObostrzenia(int & zakazenia);
    void ograniczMiejsca();
    void wyswietlMiejsca();

};




#endif //PODZIELONY_PROJEKT_KINO_H
