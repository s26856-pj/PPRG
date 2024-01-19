#include <iostream>
#include <string>

using namespace std;

int main() {
    string inputString;
    int n;

    cout << "Podaj string do konkatenacji: ";
    getline(cin, inputString);

    cout << "Podaj liczbe n: ";
    cin >> n;

    string resultString;
    for (int i = 0; i < n; ++i) {
        resultString += inputString;
    }

    cout << "Wynikowa konkatenacja: " << resultString << endl;

    return 0;
}
