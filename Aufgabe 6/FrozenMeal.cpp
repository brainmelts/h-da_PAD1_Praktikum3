#include <string>
#include "FrozenMeal.h"
using namespace std;

FrozenMeal::FrozenMeal(string mealName, int mealVolu) {
    name = mealName;
    volume = mealVolu;
    temperature = -18;
    coeffizient = 0.24;
}

void FrozenMeal::setTemperature(double mealTemp) { temperature = mealTemp; }

string FrozenMeal::getName() const { return name; }

int FrozenMeal::getVolume() const { return volume; }

double FrozenMeal::getCoeffizient() const { return coeffizient; }

double FrozenMeal::getTemperature() const { return temperature; }