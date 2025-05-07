#include "node.h"

class Substation : public Node
{
private:
    double inputVoltage_kV;
    double outputVoltage_kV;

public:
    Substation(const std::string &id,
               double voltage_kV,
               double frequency_Hz,
               const std::complex<double> &complexPower,
               double inputVoltage_kV,
               double outputVoltage_kV);

    double getInputVoltage() const;
    double getOutputVoltage() const;
    void displayInfo() const;
};
