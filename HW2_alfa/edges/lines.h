#include <string>
#include <complex>
#include "node.h"

enum class LineType
{
    AC,
    DC
};

class Line
{
protected:
    std::string id;
    Node *from;
    Node *to;
    LineType type;
    double length;
    std::complex<double> impedance;
    double capacity;

public:
    Line(const std::string &id, Node *from, Node *to, LineType type,
         double length, std::complex<double> impedance, double capacity);

    virtual ~Line() = default;

    std::string getId() const;
    Node *getFrom() const;
    Node *getTo() const;
    LineType getType() const;
    double getLength() const;
    std::complex<double> getImpedance() const;
    double getCapacity() const;

    virtual void displayInfo() const;
};
