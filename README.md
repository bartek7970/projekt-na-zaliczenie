Aplikacja konsolowa napisana w C++. Aplikacja imituje menu w kinie. 
Na początku losuje liczbe z przedziału 0-60000, ktora symuluje liczbe osob zakazonych na Covid w Polsce.
Jeśli liczba zakażeń jest większa niż 25 tys. ogranicza miejsca w kinie do 75%.

Menu posiada 6 opcji:

1: Rejstracja użytkownika . Użytkownik wpisuje login, hasło oraz musi powtórzyć hasło. Jeśli hasła się zgadzają tworzy użytkownika
2: Logowanie . Użytkownik podaje login i hasło na które założył konto, jeśli oba są poprawne to użytkownik zostaje zalogowany
3: Sprawdź długość filmu. Po wybraniu tej opcji wyświetla nam się dodatkowe menu z dostępnym repertuarem. Po wybraniu filmu wyświetla jego długość w minutach
4: Sprawdź ceny biletów. Po wybraniu tej opcji wyświetla się menu w którym mamy do wyboru rodzaj biletu. Po wybraniu rodzaju biletu wyświetla jego cene.
5: Zobacz godziny seansów. Wyświetla rozpiskę czasową filmów.
6: Zarezerwuj miejsce. Opcja jest dostępna tylko jeśli jesteśmy zalogowani. Po wybraniu wyświetla się menu z dostępnymi seansami. Po wybraniu musimy podać ile 
miejsc chcemy zarezerwować. Po podaniu poprawnej liczby, rezerwuje miejsca oraz wyswietla informacje ile wolnych miejsc pozostało
0: Zakończ. Kończymy działanie programu
