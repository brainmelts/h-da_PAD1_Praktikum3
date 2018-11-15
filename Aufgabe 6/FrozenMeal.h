#pragma once
#include <string>

class FrozenMeal {
public:
    FrozenMeal(std::string, int);

    void setTemperature(double);
    std::string getName() const;
    int getVolume() const;
    double getCoeffizient() const;
    double getTemperature() const;

private:
    std::string name;
    int volume;
    double temperature;
    double coeffizient;
};