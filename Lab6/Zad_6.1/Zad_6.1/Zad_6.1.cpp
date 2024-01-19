#include <iostream>

using namespace std;

 int liczbaPodzielnaPrzez5INiePrzez3(int n) {
    int licznik = 0;
    for (int i = 1; i <= n; ++i) {
        if (i % 5 == 0 && i % 3 != 0) {
            licznik++;
        }
    }
    return licznik;
}

int main() {
    
    int n;
    cout << "Podaj liczbe naturalna n: ";
    cin >> n;

    try {
        if (n < 1) {
            throw invalid_argument("Podano liczbe mniejsza niz 1.");
        }

        
        int wynik = liczbaPodzielnaPrzez5INiePrzez3(n);
        cout << "Ilosc liczb naturalnych mniejszych lub rownych " << n << ", "
            << "ktore sa podzielne przez 5, ale nie sa podzielne przez 3: " << wynik << endl;
    }
    catch (const invalid_argument& e) {
        cerr << "Blad: " << e.what() << ". Podaj poprawną liczbe naturalne wieksza lub rowna 1." << endl;
    }
    catch (...) {
        cerr << "Wystapil nieoczekiwany blad." << endl;
    }

    return 0;
}
