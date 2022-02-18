//
// Created by barte on 07.01.2022.
//

#ifndef PODZIELONY_PROJEKT_UZYTKOWNIK_H
#define PODZIELONY_PROJEKT_UZYTKOWNIK_H


using namespace std;


class Uzytkownik {
private:
    string login;
    string haslo;
public:
    Uzytkownik(string login, string haslo);
   static void rejstracja(string &login, string &haslo);
    bool logowanie(string login, string haslo);
    void zmienDane(string & login1, string & haslo1);
    void wyswietlanie();
    bool weryfikacja(bool &i);
};


#endif //PODZIELONY_PROJEKT_UZYTKOWNIK_H
