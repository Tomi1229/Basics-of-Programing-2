#include "node.h"

class UserEndpoint : public Node
{
private:
    double activePowerDemand;   // Hatásos teljesítmény igény (P) [MW]
    double reactivePowerDemand; // Meddő teljesítmény igény (Q) [MVAr]

public:
    UserEndpoint(const std::string &id, double voltageLevel, double frequency,
                 double activePowerDemand, double reactivePowerDemand);

    double getActivePowerDemand() const;
    double getReactivePowerDemand() const;

    void setActivePowerDemand(double p);
    void setReactivePowerDemand(double q);

    std::string getType() const override;
    std::string getInfo() const override;
};
