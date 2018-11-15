// Mikrowelle? Die was erhitzt? Oder so?
// Autor: Suayb Yurdakul
// Datum: 2018-11-14

#include <iostream>
#include <string>
#include "FrozenMeal.h"
#include "Microwave.h"
using namespace std;

int main() {
    Microwave microwave;
    FrozenMeal meal1("Eiskalter Kaffee", 250);

    microwave.morePower();
    microwave.morePower();
    cout << "Leistung Mikrowelle: " << microwave.getPower() << "\n";

    microwave.setPeriod(120);
    cout << "Laufzeit Mikrowelle: " << microwave.getPeriod() << "\n\n";

    cout << "Temperatur " << meal1.getName() << ": " << meal1.getTemperature() << "\n";

    cout << "Mikrowelle erhitzt ..." << "\n\n";
    microwave.heatMeal(meal1);

    cout << "Temperatur " << meal1.getName() << ": " << meal1.getTemperature() << "\n";

    return 0;
}