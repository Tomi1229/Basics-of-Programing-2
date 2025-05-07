#include "consumer.h"
#include <iostream>

Consumer::Consumer(const std::string &id,
                   double voltage_kV,
                   double frequency_Hz,
                   const std::complex<double> &complexPower,
                   const std::string &description) : Node(id, voltage_kV, frequency_Hz, complexPower), description(description) {}

std::string Consumer::getDescription() const
{
    return description;
}

void Consumer::displayInfo() const {}