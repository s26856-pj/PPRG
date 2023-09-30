// Zad 1.4 (#).cpp : Napisz program do znajdowania najwiekszej liczby wœród trzech liczb, podanych przez u¿ytkownika.
//

#include <iostream>
using namespace std;
// Sposób 1
int main() {
	double l1, l2, l3;

	cout << "Podaj trzy losowe liczby:";
	cin >> l1 >> l2 >> l3;
	if (l1 >= l2 && l2 >= l3) {
		cout << "Najwieksza liczba to: " << l1;
	}
	else if (l2 >= l1 && l2 >= l3) {
		cout << "Najwieksza liczba to " << l2;
	}
	else {
		cout << "Najwieksza liczba to:" << l3;
	}
	return 0;
}


//Sposób 2

int main() {
	double l1, l2, l3;

	cout << "Podaj trzy losowe liczby:";
	cin >> l1 >> l2 >> l3;
	
	if (l1 >= l2) {

		if (l1 >= l3)
			cout << "Najwieksza liczba to:" << l1;
		else
			cout << "Najwieksza liczba to:" << l3;

	}

	else {
		if (l2 >= l3)
			cout << "Najwieksza liczba to: " << l2;

		else
			cout << "Najwieksza liczba to:" << l3;


	}

	return 0;


	




	

