#include <iostream>
#include <vector>
#include <algorithm>

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


    auto it = max_element(tablica.begin(), tablica.end());
    int najwiekszy_element = *it;


    cout << "Najwiekszy element w tablicy to: " << najwiekszy_element << endl;

    return 0;
}
