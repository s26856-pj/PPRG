// ZAD 2.1.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main() {
    int liczba;
    cout << "Podaj liczbe:   ";
    cin >> liczba;

    int wynik[liczba];
    for (int i = 1; i <= liczba; i++) {
        wynik[i - 1] = 0;
        for (int j = 1; j <= i; j++) {
            wynik[i - 1] += j;
            if (j < i) {
                cout << j << " + ";
            }
            else {
                cout << j << " = " << wynik[i - 1] << endl;
            }
        }
    }
    int ostatecznyWynik = 0;
    cout << "Suma szeregu: ";
    for (int i = 0; i < liczba; i++) {
        ostatecznyWynik += wynik[i];
        if (i < liczba - 1) {
            cout << wynik[i] << " + ";
        }
        else {
            cout << wynik[i] << " = " << ostatecznyWynik << endl << endl << endl;
        }
    }
}