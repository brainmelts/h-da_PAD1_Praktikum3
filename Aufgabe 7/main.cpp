// Vollkommene Zahlen ausrechnen
// Autor: Suayb Yurdakul
// Datum: 2018-11-14

#include <iostream>
using namespace std;

bool isPerfect(unsigned long long int zahl) {
    unsigned long long int summe=0;

    for (int i = 1; i <= (zahl/2); i++) {
        if (zahl%i == 0) { summe += i; }
    }

    if (summe == zahl && zahl != 1) return true;
    else return false;
}

int main() {
    unsigned const long long int cap = 10000000000;

    cout << "Programm zum berechnen von vollkommenen Zahlen.\n\n";
    cout << "Folgend sind alle vollkommenen Zahlen bis " << cap << " berechnet:\n";
    for (int i = 2; i < cap; i++) {
        if (isPerfect(i) == true) cout << i << "\t";
    }

    return 0;
}