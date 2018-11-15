// Alle rechtwinkligen Dreiecke mit ganzen Seitenlängen unter 500 Einheiten finden und ausgeben. Summe aller Dreiecke ausgeben
// Autor: Suayb Yurdakul
// Datum: 2018-11-13

#include <iostream>
using namespace std;

int main() {
    const int max = 500;
    unsigned int a, b, c;
    unsigned int counter = 0;

    cout << "Programm zum Bruteforcen aller rechtwinkligen Dreiecke mit ganzen Seitenlängen unter 500 Einheiten\n\n";

    for (a = 1; a <= max; a++) {
        for (b = 1; b <= max; b++) {
            for (c = 1; c <= max; c++) {
                if ((a*a) + (b*b) == (c*c)) {
                    cout << "a: " << a << ", b: " << b << ", c: " << c << "\n";
                    counter++;
                }
            }
        }
    }

    cout << "\n" << "Gesamtzahl der gefundenen Dreiecke: " << counter << "\n";

    return 0;
}