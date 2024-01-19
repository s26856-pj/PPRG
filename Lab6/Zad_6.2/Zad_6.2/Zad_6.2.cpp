#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

struct Uczen {
    string imie;
    map<string, int> oceny; // Mapa z ocenami dla różnych przedmiotow
};

const int LICZBA_UCZNIOW = 6;
const vector<string> NAZWY_PRZEDMIOTOW = { "informatyka", "matematyka", "biologia", "jezyk polski" };

int main() {
    vector<Uczen> grupaUczniow(LICZBA_UCZNIOW);

    for (int i = 0; i < LICZBA_UCZNIOW; ++i) {
        cout << "Podaj imie ucznia " << i + 1 << ": ";
        cin >> grupaUczniow[i].imie;

        for (const string& przedmiot : NAZWY_PRZEDMIOTOW) {
            cout << "Podaj ocene ucznia " << grupaUczniow[i].imie << " z przedmiotu " << przedmiot << ": ";
            int ocena;
            cin >> ocena;
            grupaUczniow[i].oceny[przedmiot] = ocena;
        }
    }

    while (true) {
        int numerUcznia;
        string nazwaPrzedmiotu;

        cout << "Podaj numer ucznia (1-" << LICZBA_UCZNIOW << ") i nazwe przedmiotu (";
        for (size_t i = 0; i < NAZWY_PRZEDMIOTOW.size(); ++i) {
            cout << NAZWY_PRZEDMIOTOW[i];
            if (i < NAZWY_PRZEDMIOTOW.size() - 1) {
                cout << ", ";
            }
        }
        cout << "), aby sprawdzic ocene (0, aby zakonczyc): ";
        cin >> numerUcznia;

        if (numerUcznia == 0) {
            cout << "Koniec programu." << endl;
            break;
        }

        if (numerUcznia < 1 || numerUcznia > LICZBA_UCZNIOW) {
            cout << "Nieprawidlowy numer ucznia. Sprobuj ponownie." << endl;
            continue;
        }

        int indeksUcznia = numerUcznia - 1;

        cout << "Podaj nazwe przedmiotu: ";
        cin >> nazwaPrzedmiotu;

        if (grupaUczniow[indeksUcznia].oceny.find(nazwaPrzedmiotu) != grupaUczniow[indeksUcznia].oceny.end()) {
            cout << "Ocena ucznia " << grupaUczniow[indeksUcznia].imie << " z przedmiotu " << nazwaPrzedmiotu << " to: "
                << grupaUczniow[indeksUcznia].oceny[nazwaPrzedmiotu] << endl;
        }
        else {
            cout << "Uczen nie ma oceny z podanego przedmiotu." << endl;
        }
    }

    return 0;
}
