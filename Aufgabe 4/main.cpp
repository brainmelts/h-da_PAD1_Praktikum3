//// Simulation: 2 Würfel 6.000.000 mal werfen und Häufigkeitstabelle ausgeben
//// Autor: Suayb Yurdakul
//// Datum: 2018-11-13
//
//#include <iostream>
//#include <array>
//#include <cstdlib>
//using namespace std;
//
//int main() {
//    const int sumDice = 11, maxRolls = 6000000;
//    array<int, sumDice> sumEyes = { 0 };
//
//    for (int i = 0; i < maxRolls; i++) {
//        int currentRoll = (rand() % 6 + 1) + (rand() % 6 + 1);
//
//        switch (currentRoll) {
//        case 1:
//            break;
//        case 2:
//            sumEyes[0]++;
//            break;
//        case 3:
//            sumEyes[1]++;
//            break;
//        case 4:
//            sumEyes[2]++;
//            break;
//        case 5:
//            sumEyes[3]++;
//            break;
//        case 6:
//            sumEyes[4]++;
//            break;
//        case 7:
//            sumEyes[5]++;
//            break;
//        case 8:
//            sumEyes[6]++;
//            break;
//        case 9:
//            sumEyes[7]++;
//            break;
//        case 10:
//            sumEyes[8]++;
//            break;
//        case 11:
//            sumEyes[9]++;
//            break;
//        case 12:
//            sumEyes[10]++;
//            break;
//        default:
//            cout << "Big Y I K E R S ...\n";
//        }
//    }
//
//    cout << "Augensumme\tAnzahl gewürfelt\n";
//    for (int i = 0; i < sumEyes.size(); i++) {
//        cout << (i + 2) << "\t\t" << sumEyes[i] << "\n";
//    }
//
//    return 0;
//}

// Simulation: 2 Würfel 6.000.000 mal werfen und Häufigkeitstabelle ausgeben
// Autor: Suayb Yurdakul
// Datum: 2018-11-13

#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
    const int maxRolls = 6000000;
    int sd00 = 0, 
        sd01 = 0, 
        sd02 = 0, 
        sd03 = 0, 
        sd04 = 0, 
        sd05 = 0, 
        sd06 = 0, 
        sd07 = 0, 
        sd08 = 0, 
        sd09 = 0, 
        sd10 = 0;

    for (int i = 0; i < maxRolls; i++) {
        int currentRoll = (rand() % 6 + 1) + (rand() % 6 + 1);

        switch (currentRoll) {
        case 1:
            break;
        case 2:
            sd00++;
            break;
        case 3:
            sd01++;
            break;
        case 4:
            sd02++;
            break;
        case 5:
            sd03++;
            break;
        case 6:
            sd04++;
            break;
        case 7:
            sd05++;
            break;
        case 8:
            sd06++;
            break;
        case 9:
            sd07++;
            break;
        case 10:
            sd08++;
            break;
        case 11:
            sd09++;
            break;
        case 12:
            sd10++;
            break;
        default:
            cout << "Big Y I K E R S ...\n";
        }
    }

    cout << "Augensumme\tAnzahl gewürfelt\n";
    cout << 2 << "\t\t" << sd00 << "\n";
    cout << 3 << "\t\t" << sd01 << "\n";
    cout << 4 << "\t\t" << sd02 << "\n";
    cout << 5 << "\t\t" << sd03 << "\n";
    cout << 6 << "\t\t" << sd04 << "\n";
    cout << 7 << "\t\t" << sd05 << "\n";
    cout << 8 << "\t\t" << sd06 << "\n";
    cout << 9 << "\t\t" << sd07 << "\n";
    cout << 10 << "\t\t" << sd08 << "\n";
    cout << 11 << "\t\t" << sd09 << "\n";
    cout << 12 << "\t\t" << sd10 << "\n";

    return 0;
}