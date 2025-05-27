#include "highvoltagelines.h"
#include "lines.h"
#include "node.h"
#include <memory>
#include <sstream>

HighVoltageLine::HighVoltageLine(std::shared_ptr<Node> from,
                                 std::shared_ptr<Node> to,
                                 double length_km,
                                 bool isAC,
                                 double R_ohm,
                                 double L_mH,
                                 double C_uF)
    : Line(from, to, length_km), isAC(isAC), R_ohm(R_ohm), L_mH(L_mH), C_uF(C_uF) {} 

double HighVoltageLine::getResistance() const
{
    return R_ohm;
}

double HighVoltageLine::getInductance() const
{
    return L_mH;
}

double HighVoltageLine::getCapacitance() const
{
    return C_uF;
}

std::string HighVoltageLine::getType() const
{
    return "HighVoltageLine";
}

std::string HighVoltageLine::getInfo() const
{
    std::ostringstream oss;
    oss << "Type: " << (isAC ? "AC" : "DC") << ", "
        << "Length: " << length_km << " km, "
        << "R: " << R_ohm << " Ω, "
        << "L: " << L_mH << " mH, "
        << "C: " << C_uF << " µF";
    return oss.str();
}