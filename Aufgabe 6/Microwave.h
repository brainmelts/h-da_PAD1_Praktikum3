#pragma once
#include "FrozenMeal.h"

class Microwave {
public:
    Microwave();

    void morePower();
    void lessPower();
    void setPeriod(double);
    void heatMeal(FrozenMeal &mealInst);
    int getPower() const;
    double getPeriod() const;

private:
    int power;
    double period;
};