#include <iostream>
#include <string>
#include "src/Kino.h"
#include "src/Uzytkownik.h"
using namespace std;

Kino film1("Harry Potter i Kamien Filozoficzny",12.00,90,35,155);
Kino film2("Harry Potter i Komnata Tajemnic",13.30,88,35, 180);
Kino film3("Harry Potter i Wiezien Azkabanu",15.00,85,35, 140);
Kino film4("Harry Potter i Czara Ognia",16.30,82,35, 160);
Kino film5("Harry Potter i Zakon Feniksa ",18.00,81,35,145);
Kino film6("Harry Potter i Ksiaze Polkrwi ",19.30,86,35,156);
Kino film7("Harry Potter i Insygnia Smierci",21.00,84,35,139);

string login,haslo;
Uzytkownik uzytkownik1(login, haslo);

void menu(){
    cout << "Wybierz opcje z menu." << endl;
    cout << "1: Rejstracja" << endl;
    cout << "2: Logowanie" << endl;
    cout << "3: Sprawdz dlugosc filmu" << endl;
    cout << "4: Sprawdz ceny biletow" << endl;
    cout << "5: Zobacz godziny seansow" << endl;
    cout << "6: Zarezerwuj miejsce" << endl;
    cout << "0: Zakoncz" << endl;
}

void sprawdzDlugosc(){
    cout << "Wybierz film ktorego dlugosc chcesz sprawdzic:" << endl;
    cout << "1: Harry Potter i Kamien Filozoficzny" << endl;
    cout << "2: Harry Potter i Komnata Tajemnic" << endl;
    cout << "3: Harry Potter i Wiezien Azkabanu" << endl;
    cout << "4: Harry Potter i Czara Ognia" << endl;
    cout << "5: Harry Potter i Zakon Feniksa" << endl;
    cout << "6: Harry Potter i Ksiaze Polkrwi" << endl;
    cout << "7: Harry Potter i Insygnia Smierci" << endl;
}

void godzintSeansow(){
    cout << "Godziny seansow: " << endl;
    film1.zobaczGodziny();
    film2.zobaczGodziny();
    film3.zobaczGodziny();
    film4.zobaczGodziny();
    film5.zobaczGodziny();
    film6.zobaczGodziny();
    film7.zobaczGodziny();
    cout << endl;
    system("pause");
}

void rezerwacja(){
    cout << "Wybierz na ktory film chcesz zarezerowac bilety:" << endl;
    cout << "1: Harry Potter i Kamien Filozoficzny" << endl;
    cout << "2: Harry Potter i Komnata Tajemnic" << endl;
    cout << "3: Harry Potter i Wiezien Azkabanu" << endl;
    cout << "4: Harry Potter i Czara Ognia" << endl;
    cout << "5: Harry Potter i Zakon Feniksa" << endl;
    cout << "6: Harry Potter i Ksiaze Polkrwi" << endl;
    cout << "7: Harry Potter i Insygnia Smierci" << endl;
}


void ograniczmiejsca(){
    film1.ograniczMiejsca();
    film2.ograniczMiejsca();
    film3.ograniczMiejsca();
    film4.ograniczMiejsca();
    film5.ograniczMiejsca();
    film6.ograniczMiejsca();
    film7.ograniczMiejsca();
}



int main() {

    bool czy=false;
    int n=1;
    int zakazenia = 0;
    film1.sprawdzObostrzenia(zakazenia);
    if (zakazenia > 25000) {
        ograniczmiejsca();
    }
    while(n>0 && n<=6) {
        menu();
        cin >> n;
        switch (n) {
            case 0:
                return 0;
            case 1: {
                string login2, haslo2;
                Uzytkownik::rejstracja(login2, haslo2);
                uzytkownik1.zmienDane(login2, haslo2);
                login = login2;
                haslo = haslo2;
                break;
            }
            case 2: {
                if (uzytkownik1.logowanie(login, haslo))
                    czy = true;
                else
                    czy = false;
                uzytkownik1.weryfikacja(czy);
                break;
            }
            case 3: {
                sprawdzDlugosc();
                int f = 0;
                cin >> f;
                switch (f) {
                    case 1:
                        film1.wyswietlDlugosc();
                        break;
                    case 2:
                        film2.wyswietlDlugosc();
                        break;
                    case 3:
                        film3.wyswietlDlugosc();
                        break;
                    case 4:
                        film4.wyswietlDlugosc();
                        break;
                    case 5:
                        film5.wyswietlDlugosc();
                        break;
                    case 6:
                        film6.wyswietlDlugosc();
                        break;
                    case 7:
                        film7.wyswietlDlugosc();
                        break;
                    default:
                        cout << "Podales zle dane" << endl;
                        break;
                }
                break;
            }
            case 4:
                film1.wyswietlCeny();
                break;
            case 5:
                godzintSeansow();
                break;
            case 6: {
                if (!uzytkownik1.weryfikacja(czy))
                {
                    cout << "Aby zarezerwowac bilety wymagane jest logowanie" << endl;
                }
                else
                {
                    int f = 0;
                    rezerwacja();
                    cin >> f;
                    switch (f)
                    {
                        case 1:
                            film1.zarezerwujMiejsca();
                            break;
                        case 2:
                            film2.zarezerwujMiejsca();
                            break;
                        case 3:
                            film3.zarezerwujMiejsca();
                            break;
                        case 4:
                            film4.zarezerwujMiejsca();
                            break;
                        case 5:
                            film5.zarezerwujMiejsca();
                            break;
                        case 6:
                            film6.zarezerwujMiejsca();
                            break;
                        case 7:
                            film7.zarezerwujMiejsca();
                            break;
                        default:
                            cout << "Podales zle dane" << endl;
                            break;
                    }
                }
                break;
            }
            default:
                cout << "Podales zle dane" << endl;
                break;
        }
    }




    return 0;
}