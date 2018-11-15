// Ausgabe aller Primzahlen zwischen zwei positiven ganzen Zahlen
// Autor: Suayb Yurdakul
// Datum: 2018-11-13

#include <iostream>
using namespace std;

int main() {
    unsigned int a, b, small, big, i, j;

    cout << "Programm zur Ausgabe aller Primzahlen zwischen zwei positiven ganzen Zahlen\n\n";
    cout << "Bitte geben Sie zwei positive ganze Zahlen, getrennt durch Leerzeichen, ein (Beispiel: '21 1337') und bestätigen\nSie mit der Enter-Taste: ";
    cin >> a >> b;

    if (a < b) {
        small = a;
        big = b;
    }
    else if(b > a) {
        small = b;
        big = a;
    }
    else {
        small = 0;
        big = a;
        cout << "Da Sie die selbe Zahl eingegeben haben wurde Ihre Eingabe stattdessen auf 0 und die gewählte Zahl gesetzt.\n\n";
    }
    cout << "Kleinere Zahl: " << small << " Größere Zahl: " << big << "\n\n";

    for (i = small; i <= big; i++) {
        for (j = 2; j <= i; j++) {
            if (i % j == 0 && i != j) break;
            if (i == j) cout << i << "\t";
        }
    }

    return 0;
}