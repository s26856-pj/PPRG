#include <iostream>
#include <vector>

using namespace std;

int main() {
    try {
        int rozmiar;
        cout << "Podaj rozmiar tablicy: ";
        cin >> rozmiar;

        if (rozmiar <= 0) {
            cout << "Rozmiar tablicy musi by� dodatni." << endl;
            return 1;
        }

        vector<int> tablica(rozmiar);

        cout << "Podaj elementy tablicy:" << endl;
        for (int i = 0; i < rozmiar; ++i) {
            cout << "Element [" << i << "]: ";
            cin >> tablica[i];
        }

        
        for (int i = 0; i < rozmiar / 2; ++i) {
            int temp = tablica[i];
            tablica[i] = tablica[rozmiar - 1 - i];
            tablica[rozmiar - 1 - i] = temp;
        }

        
        cout << "Tablica po zamianie miejscami:" << endl;
        for (int i = 0; i < rozmiar; ++i) {
            cout << tablica[i] << endl;
        }

    }
    catch (...) {
        cout << "Wyst�pi� b��d. Upewnij si�, �e wprowadzone dane s� poprawne." << endl;
        return 1;
    }

    return 0;
}
