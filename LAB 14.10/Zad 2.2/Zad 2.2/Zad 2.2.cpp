// Zad 2.2.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Podaj liczbe a:   ";
    cin >> a;
    cout << "Podaj liczbe b:   ";
    cin >> b;

    cout << "\n\n\nWiersz o dlugosci a:\n";
    for (int i = 1; i <= a; i++) {
        cout << "*";
    }
    cout << endl << "Kolumna o dlugosci b:";
    for (int i = 1; i <= b; i++) {
        cout << "*\n";
    }

    cout << endl << "Prostokat o wymiarach 'a' na 'b':\n";
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= a; j++) {
            cout << "*";
        }
        cout << endl;
    }


    cout << endl << "Obdwod prostokata o wymiarach 'a' na 'b':\n";
    for (int i = 1; i <= b; i++) {
        for (int j = 1; j <= a; j++) {
            if (i == 1 || (i != 1 && j == 1) || i == b || j == a) {
                cout << "*";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl << "Trojkat prostokatny rownoramienny z katem  prostym w lewym dolnym rogu:\n";
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < i; j++) {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    cout << endl << "Trojkat prostokatny rownoramienny z katem prostym w prawym gornym rogu:\n";
    for (int i = 0; i < b; i++) {
        for (int j = 0; j < b; j++) {
            if (j < i) {
                cout << " ";
            }
            else {
                cout << "*";
            }
        }
        cout << endl;
    }
    cout << endl;
}
