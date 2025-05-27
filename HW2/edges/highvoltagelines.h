#include "lines.h"
#include <memory>

class HighVoltageLine : public Line
{
private:
    double R_ohm; // Ellenállás ohmban
    double L_mH;  // Induktivitás millihenry-ben
    double C_uF;  // Kapacitás mikrofaradban

public:
    HighVoltageLine(std::shared_ptr<Node> from, std::shared_ptr<Node> to,
                    double length_km, double R_ohm, double L_mH, double C_uF);
    double getResistance() const;
    double getInductance() const;
    double getCapacitance() const;

    std::string HighVoltageLine::get() const;
    std::string getInfo() const;
};
