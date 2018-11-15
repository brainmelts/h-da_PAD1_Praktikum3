#include "Microwave.h"
using namespace std;

Microwave::Microwave() {
    power = 0;
    period = 0;
}

void Microwave::morePower() { if (power < 1000) power += 200; }

void Microwave::lessPower() { if (power > 200) power -= 200; }

void Microwave::setPeriod(double sessionPeri) { period = sessionPeri; }

void Microwave::heatMeal(FrozenMeal &mealInst) {
    mealInst.setTemperature(mealInst.getTemperature() + (mealInst.getCoeffizient()*getPower()*getPeriod() / mealInst.getVolume()));
}

int Microwave::getPower() const { return power; }

double Microwave::getPeriod() const { return period; }