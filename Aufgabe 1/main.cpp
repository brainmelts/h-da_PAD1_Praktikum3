//// 6 Zahlen zwischen 1 und 79 einlesen und als Sternchen (*) ausgeben
//// Autor: Suayb Yurdakul
//// Datum: 2018-11-13
//
//#include <iostream>
//#include <array>
//using namespace std;
//
//int main() {
//    const int arraySize = 6;
//    array<int, arraySize> input;
//    int check;
//
//    cout << "Programm zum Einlesen von " << arraySize << " Zahlen zwischen 1 und 79 und entsprechende Ausgabe in //Sternchen (*)\n\n";
//
//    for (int i = 0; i < input.size(); i++) {
//        cout << (i + 1) << ". Zahl zwischen 1 und 79: ";
//        cin >> check;
//
//        if (check < 1 || check > 79) {
//            cout << "Ihre Zahl liegt nicht zwischen 1 und 79!\n";
//            i--;
//        }
//        else {
//            input[i] = check;
//        }
//    }
//
//    cout << "\n";
//
//    for (int i = 0; i < input.size(); i++) {
//        for (int j = 0; j < input[i]; j++) {
//            cout << "*";
//        }
//        cout << "\n";
//    }
//
//    return 0;
//}

// 6 Zahlen zwischen 1 und 79 einlesen und als Sternchen (*) ausgeben
// Autor: Suayb Yurdakul
// Datum: 2018-11-13

#include <iostream>
using namespace std;

int main() {
    int in0, in1, in2, in3, in4, in5, check, out;

    cout << "Programm zum Einlesen von 6 Zahlen zwischen 1 und 79 und entsprechende Ausgabe in Sternchen (*)\n\n";

    for (int i = 0; i < 6; i++) {
        cout << "Geben Sie die " << (i + 1) << ". Zahl zwischen 1 und 79 ein:\n";
        cin >> check;

        if (check < 1 || check > 79) {
            cout << "Ihre Zahl liegt nicht zwischen 1 und 79!\n";
            i--;
        }
        else {
            switch (i) {
            case 0:
                in0 = check;
                break;
            case 1:
                in1 = check;
                break;
            case 2:
                in2 = check;
                break;
            case 3:
                in3 = check;
                break;
            case 4:
                in4 = check;
                break;
            case 5:
                in5 = check;
                break;
            default:
                cout << "Big Y I K E S ...";
                break;
            }
        }
    }

    cout << "\n";

    for (int i = 0; i < 6; i++) {
        switch (i) {
        case 0:
            out = in0;
            break;
        case 1:
            out = in1;
            break;
        case 2:
            out = in2;
            break;
        case 3:
            out = in3;
            break;
        case 4:
            out = in4;
            break;
        case 5:
            out = in5;
            break;
        default:
            cout << "Bigger Y I K E S ...";
            break;
        }

        for (int j = 0; j < out; j++) {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}