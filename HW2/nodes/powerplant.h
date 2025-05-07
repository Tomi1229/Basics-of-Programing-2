#include "node.h"
#include <string>

enum class PowerPlantType
{
    THERMAL,
    NUCLEAR,
    HYDRO,
    RENEWABLE
};

class PowerPlant : public Node
{
protected:
    PowerPlantType plantType;
    double efficiency;
    double maxOutputPower;

public:
    PowerPlant(const std::string &id, double voltage, double frequency,
               std::complex<double> apparentPower, PowerPlantType plantType,
               double efficiency, double maxOutputPower);

    virtual ~PowerPlant() = default;

    PowerPlantType getPlantType() const;
    double getEfficiency() const;
    double getMaxOutputPower() const;

    virtual void displayInfo() const override;
};
