#include <iostream>
using namespace std;

int main() {
    int miesiac;
    cout << "Podaj miesiac jako liczbe: ";
    cin >> miesiac;

    switch (miesiac) {
    case 1:
        cout << "Styczen\n" << "Ten miesiac ma 31 dni.\n" << "W tym miesiacu jest pochmurnie.\n";
        break;
    case 2:
        cout << "Luty\n" << "Ten miesiac ma 28 dni.\n" << "W tym miesiacu jest pochmurnie.\n";
        break;
    case 3:
        cout << "Marzec\n" << "Ten miesiac ma 31 dni.\n" << "W tym miesiacu jest pochmurnie.\n";
        break;
    case 4:
        cout << "Kwiecien\n" << "Ten miesiac ma 30 dni.\n" << "W tym miesiacu jest pochmurnie.\n";
        break;
    case 5:
        cout << "Maj\n" << "Ten miesiac ma 31 dni.\n" << "W tym miesiacu jest slonecznie.\n";
        break;
    case 6:
        cout << "Czerwiec\n" << "Ten miesiac ma 30 dni.\n" << "W tym miesiacu jest slonecznie.\n";
        break;
    case 7:
        cout << "Lipiec\n" << "Ten miesiac ma 31 dni.\n" << "W tym miesiacu jest slonecznie.\n";
        break;
    case 8:
        cout << "Sierpien\n" << "Ten miesiac ma 30 dni.\n" << "W tym miesiacu jest slonecznie.\n";
        break;
    case 9:
        cout << "Wrzesien\n" << "Ten miesiac ma 31 dni.\n" << "W tym miesiacu jest slonecznie.\n";
        break;
    case 10:
        cout << "Pazdziernik\n" << "Ten miesiac ma 30 dni.\n" << "W tym miesiacu jest pochmurnie.\n";
        break;
    case 11:
        cout << "Listopad\n" << "Ten miesiac ma 31 dni.\n" << "W tym miesiacu jest pochmurnie.\n";
        break;
    case 12:
        cout << "Grudzien\n" << "Ten miesiac ma 30 dni.\n" << "W tym miesiacu jest pochmurnie.\n";
        break;
    default:
        cout << "Liczba spoza przedzialu.";
    }
}