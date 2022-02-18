//
// Created by barte on 07.01.2022.
//


#include <iostream>
#include <string>
#include "Uzytkownik.h"
using namespace std;


Uzytkownik::Uzytkownik(string login, string haslo){
    this->login = login;
    this->haslo = haslo;
}

 void Uzytkownik::rejstracja(string &login, string &haslo){
    string sprawdz=" ";
    while(sprawdz!=haslo) {
        cout << "Witaj w panelu rejstracji. Podaj login: " << endl;
        cin >> login;
        cout << "Podaj haslo: " << endl;
        cin >> haslo;
        cout << "Powtorz haslo: " << endl;
        cin >> sprawdz;
        if(sprawdz!=haslo)
            cout<<"Blad, hasla sa rozne " << endl;
    }
}

bool Uzytkownik::logowanie(string login, string haslo){
    string sprawdzLogin;
    string sprawdzHaslo;
    cout << "Witaj w panelu logowania. Podaj login: " << endl;
    cin>> sprawdzLogin;
    cout<<"Podaj haslo: " << endl;
    cin >> sprawdzHaslo;
    if(sprawdzLogin==login && sprawdzHaslo==haslo)
    {
        cout<<"Logowanie pomyslne" << endl;

        return true;
    }
    else
    {
        cout<<"Logowanie niepomyslne" << endl;
        return false;
    }

}
void Uzytkownik::zmienDane(string & login1, string & haslo1) {
    login=login1;
    haslo=haslo1;
}
void Uzytkownik::wyswietlanie(){
    cout<<"Login: " << login << endl;
    cout<<"Haslo: " << haslo << endl;
}

bool Uzytkownik::weryfikacja(bool &i)
{
    if(i==true){
        return true;
    }
    else
        return false;
}
;