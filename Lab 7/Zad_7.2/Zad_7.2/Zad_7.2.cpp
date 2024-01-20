#include <iostream>

using namespace std;


long long silnia(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    else {
        return n * silnia(n - 1);
    }
}

int main() {
    int liczba;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    
    long long wynik_silni = silnia(liczba);

    cout << "Wynik silni: " << wynik_silni << endl;

    if (wynik_silni % 2 == 0) {
        cout << "Wynik jest podzielny przez 2." << endl;
    }

    if (wynik_silni % 3 == 0) {
        cout << "Wynik jest podzielny przez 3." << endl;
    }

    if (wynik_silni % 5 == 0) {
        cout << "Wynik jest podzielny przez 5." << endl;
    }

    if (wynik_silni % 11 == 0) {
        cout << "Wynik jest podzielny przez 11." << endl;
    }

    return 0;
}
//Program nie jest w stanie obs³u¿yæ wiêkszej liczby ni¿ 30