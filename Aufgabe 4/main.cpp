// Simulation: 2 Würfel 6.000.000 mal werfen und Häufigkeitstabelle ausgeben
// Autor: Suayb Yurdakul
// Datum: 2018-11-13

#include <iostream>
#include <array>
#include <cstdlib>
using namespace std;

int main() {
    const int sumDice = 11, maxRolls = 6000000;
    array<int, sumDice> sumEyes = { 0 };

    for (int i = 0; i < maxRolls; i++) {
        int currentRoll = (rand() % 12) + 1;

        switch (currentRoll) {
        case 1:
            break;
        case 2:
            sumEyes[0]++;
            break;
        case 3:
            sumEyes[1]++;
            break;
        case 4:
            sumEyes[2]++;
            break;
        case 5:
            sumEyes[3]++;
            break;
        case 6:
            sumEyes[4]++;
            break;
        case 7:
            sumEyes[5]++;
            break;
        case 8:
            sumEyes[6]++;
            break;
        case 9:
            sumEyes[7]++;
            break;
        case 10:
            sumEyes[8]++;
            break;
        case 11:
            sumEyes[9]++;
            break;
        case 12:
            sumEyes[10]++;
            break;
        default:
            cout << "Big Y I K E R S ...\n";
        }
    }

    cout << "Augensumme\tAnzahl gewürfelt\n";
    for (int i = 0; i < sumEyes.size(); i++) {
        cout << (i + 2) << "\t\t" << sumEyes[i] << "\n";
    }

    return 0;
}