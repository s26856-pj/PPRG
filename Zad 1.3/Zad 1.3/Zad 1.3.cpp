
// Zad 1.3.cpp : Napisz program, który sprawdzi, czy podana liczba ca³kowita jest parzysta, nieparzysta czy ¿adna
//

#include <iostream>
using namespace std;




int main() {
    int number;

    cout << "Poda liczbe calkowita:";
    cin >> number;
    if (number % 2==0) {
        cout << "Wpisales liczbe parzysta: " << number << endl;

    }

    else {
        cout << "Wpisales liczbe nieparzysta: " << number << endl;

    }

    if (number == 0) {
        cout << "Wpisales Zero:" << number << endl;

    }
    cout << "Dziekuje :)";
    return 0;
}

   


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
