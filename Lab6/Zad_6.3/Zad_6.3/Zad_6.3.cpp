#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Student {
    string imie;
    string nazwisko;
    int numerIndeksu;
};

bool porownajStudenci(const Student& a, const Student& b) {
    return a.numerIndeksu < b.numerIndeksu;
}

int main() {
    vector<Student> grupaStudentow = {
        {"Jan", "Kowalski", 12345},
        {"Anna", "Nowak", 54321},
        {"Piotr", "Mazurek", 98765},
        {"Marta", "Lis", 11111},
        {"Tomasz", "Kot", 22222},
        {"Alicja", "Sowa", 33333},
        {"Andrzej", "Wilk", 44444},
        {"Barbara", "Zając", 55555},
        {"Cezary", "Kruk", 66666},
        {"Dorota", "Orzeł", 77777},
        {"Edward", "Jeleń", 88888},
        {"Fiona", "Karp", 99999},
        {"Grzegorz", "Osioł", 12121},
        {"Hanna", "Bóbr", 23232},
        {"Igor", "Kuna", 34343},
        {"Joanna", "Dzik", 45454},
        {"Krzysztof", "Jastrząb", 56565},
        {"Laura", "Bocian", 67676},
        {"Mariusz", "Bóbr", 78787},
        {"Natalia", "Jeleń", 89898},
        {"Oskar", "Zając", 11221},
        {"Paulina", "Kuna", 22332},
        {"Robert", "Osioł", 33443},
        {"Sylwia", "Dzik", 44554},
        {"Tadeusz", "Jastrząb", 55665},
        {"Urszula", "Bocian", 66776},
        {"Waldemar", "Bóbr", 77887},
        {"Xawery", "Jeleń", 88998},
        {"Yvette", "Zając", 99111},
        {"Zenon", "Kuna", 11222}
    };

    sort(grupaStudentow.begin(), grupaStudentow.end(), porownajStudenci);

    cout << "Posortowani studenci wedlug numerów indeksow:\n";
    for (const auto& student : grupaStudentow) {
        cout << "Imie: " << student.imie << ", Nazwisko: " << student.nazwisko << ", Numer indeksu: " << student.numerIndeksu << "\n";
    }

    return 0;
}
