#include "node.h"
#include <string>

class Consumer : public Node
{
private:
    std::string description;

public:
    Consumer(const std::string &id,
             double voltage_kV,
             double frequency_Hz,
             const std::complex<double> &complexPower,
             const std::string &description);

    std::string getDescription() const;

    void displayInfo() const override;
};