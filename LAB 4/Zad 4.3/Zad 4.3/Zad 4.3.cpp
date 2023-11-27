#include <iostream>

using namespace std;

const int rozmiar = 10;

int main() {

    int tablica[rozmiar][rozmiar];


    for (int i = 0; i < rozmiar; ++i) {
        for (int j = 0; j < rozmiar; ++j) {
            if (j == 0) {

                tablica[i][j] = i;
            }
            else if (j == 1) {

                tablica[i][j] = (i * (i + 1)) / 2;
            }
            else if (j == 2) {

                tablica[i][j] = i * i;
            }
            else if (j == 3) {

                tablica[i][j] = i + j;
            }
            else if (j == 4) {

                tablica[i][j] = i - j;
            }
            else {

                tablica[i][j] = 0;
            }
        }
    }


    for (int i = 0; i < rozmiar; ++i) {
        for (int j = 0; j < rozmiar; ++j) {
            std::cout << tablica[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}
