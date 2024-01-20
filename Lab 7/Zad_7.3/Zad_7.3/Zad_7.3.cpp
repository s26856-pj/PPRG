#include <iostream>
#include <cmath>

using namespace std;

const int rozmiarTablicy = 10;


const double pi = 3.14159265358979323846;


double obliczPoleKola(double promien) {
    return pi * pow(promien, 2);
}

int main() {
    double promien;

    
    cout << "Podaj dlugosc promienia kola: ";
    cin >> promien;

    
    double poleKola = obliczPoleKola(promien);

    
    double tablica[rozmiarTablicy][rozmiarTablicy];

    
    for (int i = 0; i < rozmiarTablicy; ++i) {
        for (int j = 0; j < rozmiarTablicy; ++j) {
            tablica[i][j] = poleKola;
            poleKola += 3;
        }
    }

    
    cout << "\nPole kola wynosi:\n";
    for (int i = 0; i < rozmiarTablicy; ++i) {
        for (int j = 0; j < rozmiarTablicy; ++j) {
            cout << tablica[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

//Pojawi³ siê problem z wykorzystaniem M_PI, dlatego zosta³o tutaj zastosowane sta³y constant liczy pi