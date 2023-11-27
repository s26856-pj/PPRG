#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {

    int n;
    cout << "Podaj liczbe elementow tablicy: ";
    cin >> n;


    vector<int> tablica;


    for (int i = 0; i < n; ++i) {
        int element;
        cout << "Podaj " << i + 1 << ". element tablicy: ";
        cin >> element;
        tablica.push_back(element);
    }


    unordered_map<int, int> licznik;

    for (const auto& element : tablica) {
        licznik[element]++;
    }


    int najczesciej_wystepujacy_element = 0;
    int maksymalna_liczba_wystapien = 0;

    for (const auto& para : licznik) {
        if (para.second > maksymalna_liczba_wystapien) {
            maksymalna_liczba_wystapien = para.second;
            najczesciej_wystepujacy_element = para.first;
        }
    }


    cout << "Najczesciej wystepujacy element to: " << najczesciej_wystepujacy_element
        << " (wystepuje " << maksymalna_liczba_wystapien << " razy)" << std::endl;

    return 0;
}
