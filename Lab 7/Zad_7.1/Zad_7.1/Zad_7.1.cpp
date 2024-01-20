#include <iostream>
#include <string>

using namespace std;

struct Osoba {
    string imie;
    string nazwisko;
};

int main() {
    const int liczbaOsob = 3;
    Osoba tabelaOsob[liczbaOsob];

    for (int i = 0; i < liczbaOsob; ++i) {
        cout << "Podaj imie osoby " << i + 1 << ": ";
        cin >> tabelaOsob[i].imie;

        cout << "Podaj nazwisko osoby " << i + 1 << ": ";
        cin >> tabelaOsob[i].nazwisko;
    }

    cout << "\nWprowadzone Imiona i Nazwiska:\n";

    for (int i = 0; i < liczbaOsob; ++i) {
        cout << "Osoba " << i + 1 << ": " << tabelaOsob[i].imie << " " << tabelaOsob[i].nazwisko << endl;
    }

    return 0;
}