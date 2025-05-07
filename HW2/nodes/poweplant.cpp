#include "powerplant.h"
#include <iostream>

PowerPlant::PowerPlant(const std::string &id, double voltage, double frequency,
                       std::complex<double> apparentPower, PowerPlantType plantType,
                       double efficiency, double maxOutputPower)
    : Node(id, voltage, frequency, apparentPower),
      plantType(plantType), efficiency(efficiency), maxOutputPower(maxOutputPower) {}

PowerPlantType PowerPlant::getPlantType() const
{
    return plantType;
}

double PowerPlant::getEfficiency() const
{
    return efficiency;
}

double PowerPlant::getMaxOutputPower() const
{
    return maxOutputPower;
}

void PowerPlant::displayInfo() const {}