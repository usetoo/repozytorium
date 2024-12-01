#include <iostream>
#include <stdexcept>

using namespace std;

bool czy_doskonala(int liczba) {
    int suma = 0;
    for (int i = 1; i < liczba; ++i) {
        if (liczba % i == 0) suma += i;
    }
    return suma == liczba;
}

int main() {
    int liczba;
    cin >> liczba;
    cout << "Wczytano: " << liczba << endl;
    if (czy_doskonala(liczba)) {
    if (liczba <= 0) {
        cerr << "Podano liczbe niedodatnia!" << endl;
        return 1;
    }
    cout << "Wczytano: " << liczba;
    if (czy_doskonala(liczba)) {
        cout << " - liczba doskonala" << endl;
    } else {
        cout << " - nie jest liczba doskonala" << endl;
    }
    return 0;
}
}
