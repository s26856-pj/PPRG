#include <math.h>
#include <iostream>
#include <cctype>

using namespace std;

int main() {
    double A, B, C;

    
    cout << "Podaj wartosc A: ";
    cin >> A;

    cout << "Podaj wartosc B: ";
    cin >> B;

    cout << "Podaj wartosc C: ";
    cin >> C;

    
    cout << "Rownanie kwadratowe w postaci ogolnej: ";
    cout << A << "x^2 + " << B << "x + " << C << " = 0" << endl;

    
    double delta = B * B - 4 * A * C;

    if (delta > 0) {
        // Pierwiastki rzeczywiste i różne
        double x1 = (-B + sqrt(delta)) / (2 * A);
        double x2 = (-B - sqrt(delta)) / (2 * A);
        std::cout << "Pierwiastki rownania: x1 = " << x1 << " i x2 = " << x2 << std::endl;
    } else if (delta == 0) {
        // Pierwiastek rzeczywisty podwójny
        double x1 = -B / (2 * A);
        std::cout << "Pierwiastek rownania: x1 = " << x1 << std::endl;
    } else {
        // Brak pierwiastków rzeczywistych
        std::cout << "Brak pierwiastkow rzeczywistych" << std::endl;
    }

    return 0;
}
	
	
	
	
	
	
	
	
	
