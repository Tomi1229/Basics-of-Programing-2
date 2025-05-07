#include "substation.h"
#include <iostream>

Substation::Substation(const std::string &id,
                       double voltage_kV,
                       double frequency_Hz,
                       const std::complex<double> &complexPower,
                       double inputVoltage_kV,
                       double outputVoltage_kV)
    : Node(id, voltage_kV, frequency_Hz, complexPower),
      inputVoltage_kV(inputVoltage_kV),
      outputVoltage_kV(outputVoltage_kV) {}

double Substation::getInputVoltage() const
{
    return inputVoltage_kV;
}

double Substation::getOutputVoltage() const
{
    return outputVoltage_kV;
}

void Substation::displayInfo() const {}