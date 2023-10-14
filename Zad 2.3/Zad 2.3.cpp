// Zad 2.3.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main() {
	int miesiac;
	std::cout << "Podaj numer miesiaca (1-12): ";
	std::cin >> miesiac;

	std::string nazwaMiesica;

	switch (miesiac) {
	case 1:
		nazwaMiesica = "Styczen";
		break;
	case 2:
		nazwaMiesica = "Luty";
		break;
	case 3:
		nazwaMiesica = " Marzec";
		break;
	case 4:
		nazwaMiesica = "Kwiecien";
		break;
	case 5:
		nazwaMiesica = "Maj";
		break;
	case 6:
		nazwaMiesica = "Czerwiec";
		break;
	case 7:
		nazwaMiesica = "Lipiec";
		break;
	case 8:
		nazwaMiesica = "Sierpien";
		break;
	case 9:
		nazwaMiesica = "Wrzesien";
		break;
	case 10:
		nazwaMiesica = "Pazdziernik";
		break;
	case 11:
		nazwaMiesica = "Listopad";
	case 12:
		nazwaMiesica = "Grudzien";
		break;
	deafult:
		std::cout << "Podano niepoprawny numer miesiaca." << std::endl;
		return 1;
	}

	int dniWmiesiacu = 0;

	switch (miesiac) {



	}


	std::string warunkiPogodowoe = ( miesiac >= 4 )
}


