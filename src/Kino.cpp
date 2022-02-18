//
// Created by barte on 07.01.2022.
//


#include <iostream>
#include <string>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include "Kino.h"

using namespace std;


Kino::Kino(string tytul, double godzina, int miejsca, int cenyBiletow, int dlugosc) {
    this->cenyBiletow = cenyBiletow;
    this->godzina = godzina;
    this->tytul = tytul;
    this->miejsca = miejsca;
    this->dlugosc= dlugosc;
}

void Kino::zobaczGodziny() {
    cout << tytul << ": " ;
    cout << fixed;
    cout << setprecision(2) << godzina << endl;
}

int Kino::zarezerwujMiejsca() {
    int i=0;
    cout << "Podaj ile miejsc chcesz zarezerowac: "<<endl;
    cin >> i;
    if(i>0 && i<10){
        cout <<"Twoje miejsca zostaly zarezerowane " <<endl;
        miejsca-=i;
        cout<<"Wolnych miejsc pozostalo: " << miejsca << endl;
    }
    else
    {
        cout<<"Podales zla liczbe miejsc"<<endl;
    }

    return miejsca;
}

void Kino::wyswietlDlugosc(){
    cout <<"Film trwa " << dlugosc << " minut " << endl << endl;
}

void Kino::wyswietlCeny(){
    cout<<"Wybierz rodzaj biletu " << endl;
    int n=0;
    cout<<"1: Bilet normalny" << endl;
    cout<<"2: Bilet ulgowy" << endl;
    cin >> n;
    switch (n) {
        case 1:
            cout<<"Bilet kosztuje " << cenyBiletow << " zl"<<endl<<endl;
            break;
        case 2:
            cout<<"Bilet kosztuje " << cenyBiletow*0.75 << " zl"<<endl<<endl;
            break;
        default:
            cout<<"Wybrales zla opcje" << endl;
            return;
    }
}

bool Kino::sprawdzObostrzenia(int & zakazenia){
    srand( time( NULL ) );
    zakazenia=0;
    while (zakazenia<1 || zakazenia > 60000) {
        zakazenia = ((rand() % 60000) + (rand() % 20000) + (rand() % 5000) + (rand() % 5000));        //napisane tak poniewaz losowalo ze zbyt malego zakresu
    }
    cout << "Liczba osob zakazonych w Polsce: " << zakazenia << " " << endl;
    if(zakazenia>25000){
        cout<<"Ze wzgledu na duza liczbe zakazen miejsca zostaly ograniczone do 75% " << endl;
        return true;
    } else
    {
        cout<<"Dostepne sa wszystkie miejsca w kinie " << endl;
        return false;
    }
}

void Kino::ograniczMiejsca() {
    miejsca = miejsca*0.75;
}

void Kino::wyswietlMiejsca(){
    cout<<"miejsca " << miejsca << endl;
}





