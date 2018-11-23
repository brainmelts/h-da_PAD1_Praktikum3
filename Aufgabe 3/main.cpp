// Ausgabe aller Primzahlen zwischen zwei positiven ganzen Zahlen
// Autor: Suayb Yurdakul
// Datum: 2018-11-13

#include <iostream>
using namespace std;

int main() {
    int a, b;
    unsigned int small, big, i, j;
    bool check = true;

    cout << "Programm zur Ausgabe aller Primzahlen zwischen zwei positiven ganzen Zahlen\n\n";

    while (check) {
        check = true;
        cout << "Bitte geben Sie zwei positive ganze Zahlen, getrennt durch Leerzeichen, ein (Beispiel: '21 1337') und bestätigen\nSie mit der Enter-Taste: ";
        cin >> a >> b;

        if (a < 0 || b < 0) {
            check = true;
            cout << "Bitte geben Sie positive ganze Zahlen ein,\n\n";
        }
        else {
            check = false;
        }

    }
    
    small = a;
    big = b;

    if (b < a) {
        small = b;
        big = a;
    }
    else if(a == b) {
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