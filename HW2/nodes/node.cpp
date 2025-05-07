#include "node.h"
#include <iostream>
#include <iomanip>

Node::Node(const std::string &id, double voltage, double frequency,
           std::complex<double> apparentPower)
    : id(id), voltage(voltage), frequency(frequency), apparentPower(apparentPower) {}

std::string Node::getId() const
{
    return id;
}

double Node::getVoltage() const
{
    return voltage;
}

double Node::getFrequency() const
{
    return frequency;
}

std::complex<double> Node::getApparentPower() const
{
    return apparentPower;
}

double Node::getActivePower() const
{
    return apparentPower.real();
}

double Node::getReactivePower() const
{
    return apparentPower.imag();
}