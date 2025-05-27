#include "userendpoint.h"
#include <sstream>

UserEndpoint::UserEndpoint(const std::string &id, double voltageLevel, double frequency,
                           double activePowerDemand, double reactivePowerDemand)
    : Node(id, voltageLevel, frequency),
      activePowerDemand(activePowerDemand), reactivePowerDemand(reactivePowerDemand) {}

double UserEndpoint::getActivePowerDemand() const
{
    return activePowerDemand;
}

double UserEndpoint::getReactivePowerDemand() const
{
    return reactivePowerDemand;
}

void UserEndpoint::setActivePowerDemand(double p)
{
    activePowerDemand = p;
}

void UserEndpoint::setReactivePowerDemand(double q)
{
    reactivePowerDemand = q;
}

std::string UserEndpoint::getType() const
{
    return "UserEndpoint";
}

std::string UserEndpoint::getInfo() const
{
    std::ostringstream ss;
    ss << "P=" << activePowerDemand << " MW, Q=" << reactivePowerDemand << " MVAr";
    return ss.str();
}