#include <iostream>
class Violation
{
protected:
    const int baseFine;

public:
    Violation(int base) : baseFine(base) {}
    virtual int getFine() const = 0;
};

class SpeedingViolation : public Violation
{
private:
    int overspeed;
    static const int overspeedFee;

public:
    SpeedingViolation(int base, int speed) : Violation(base), overspeed(speed) {}

    int getFine() const
    {
        return baseFine + overspeed * overspeedFee;
    }
};
const int SpeedingViolation::overspeedFee = 5000;

class ParkingViolation : public Violation
{
private:
    int time;
    static const int timeFee;

public:
    ParkingViolation(int base, int time) : Violation(base), time(time) {}
    int getFine() const
    {
        return baseFine + time * timeFee;
    }
};
const int ParkingViolation::timeFee = 3000;

int main()
{
    Violation *birsag[2];
    int sum = 0;

    birsag[1] = new SpeedingViolation(1000, 5);
    birsag[2] = new ParkingViolation(2000, 8);

    for (int i = 0; i < 2; ++i)
    {
        sum += birsag[i]->getFine();
    }

    std::cout << " A birsag osszege" << sum << "Ft" << std::endl;

    for (int i = 0; i < 2; ++i)
    {
        delete birsag[i];
    }

    return 0;
}
