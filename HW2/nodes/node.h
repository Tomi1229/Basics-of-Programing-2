#include <string>
#include <complex>

class Node
{
protected:
    std::string id;
    double voltage;
    double frequency;
    std::complex<double> apparentPower;

public:
    Node(const std::string &id, double voltage, double frequency,
         std::complex<double> apparentPower);

    virtual ~Node() = default;

    std::string getId() const;
    double getVoltage() const;
    double getFrequency() const;
    std::complex<double> getApparentPower() const;

    double getActivePower() const;
    double getReactivePower() const;

    virtual void displayInfo() const = 0;
};