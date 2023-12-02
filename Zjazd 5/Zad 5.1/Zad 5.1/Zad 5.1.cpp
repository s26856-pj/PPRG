#include <iostream>
#include <vector>


using namespace std;

int main() {
    try {
        int liczba_elementow;
        cout << "Podaj liczbe elementow wektora: ";
        cin >> liczba_elementow;

        vector<double> wektor;

        for (int i = 0; i < liczba_elementow; ++i) {
            double element;
            cout << "Podaj element wektora [" << i << "]: ";
            cin >> element;
            wektor.push_back(element);
        }

        double maksimum = wektor[0];
        int indeks_maksimum = 0;

        for (int i = 1; i < liczba_elementow; ++i) {
            if (wektor[i] > maksimum) {
                maksimum = wektor[i];
                indeks_maksimum = i;
            }
        }

        cout << "Wartosc elementu maksymalnego: " << maksimum << endl;
        cout << "Numer indeksu elementu maksymalnego: " << indeks_maksimum << endl;

    }
    catch (...) {
        cout << "Wystapil b³ad. Upewnij sie, ¿e wprowadzone dane sa poprawne." << endl;
    }

    return 0;
}