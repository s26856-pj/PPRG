// zad 1


#include <math.h>
#include <iostream>
using namespace std;


int main() {
	
	double x, y;
    
    cout << "\n\n\nPodaj liczbe x: ";
    cin >> x;
    cout << "Podaj liczbe y: ";
    cin >> y;
    
    double suma = roundf((x+y) * 100) / 100;
    double roznica = roundf((x-y) * 100) / 100;
    double iloczyn = roundf((x*y) * 100) / 100;
    double iloraz = roundf((x/y) * 100) / 100;
    
    cout << "\nSuma: " << suma << "\nRoznica: " << roznica << "\nIloczyn: " << iloczyn << "\nIloraz: " << iloraz;
	
	
	
}