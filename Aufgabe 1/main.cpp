// 6 Zahlen zwischen 1 und 79 einlesen und als Sternchen (*) ausgeben
// Autor: Suayb Yurdakul
// Datum: 2018-11-13

#include <iostream>
#include <array>
using namespace std;

int main() {
    const int arraySize = 6;
    array<int, arraySize> input;
    int check;

    cout << "Programm zum Einlesen von " << arraySize << " Zahlen zwischen 1 und 79 und entsprechende Ausgabe in Sternchen (*)\n\n";

    for (int i = 0; i < input.size(); i++) {
        cout << (i + 1) << ". Zahl zwischen 1 und 79: ";
        cin >> check;

        if (check < 1 || check > 79) {
            cout << "Ihre Zahl liegt nicht zwischen 1 und 79!\n";
            i--;
        }
        else {
            input[i] = check;
        }
    }

    cout << "\n";

    for (int i = 0; i < input.size(); i++) {
        for (int j = 0; j < input[i]; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}