#include <iostream>
#include <string>

class Ticket
{
protected:
    const unsigned distance;
    static const unsigned basePrice;

public:
    Ticket(unsigned pdist) : distance(pdist) {}
    virtual double getPrice() const = 0;
};
const unsigned Ticket::basePrice = 30;

class StandardTicket : public Ticket
{
    static const double normalFactor;

public:
    StandardTicket(unsigned pdist) : Ticket(pdist) {}
    double getPrice()
    {
        return distance * basePrice * normalFactor;
    }
};
const double StandardTicket::normalFactor = 1.0;

class StudentTicket : public Ticket
{
    static const double studentFactor;

public:
    StudentTicket(unsigned pdist) : Ticket(pdist) {}
    double getPrice()
    {
        return distance * basePrice * studentFactor;
    }
};
const double StudentTicket::studentFactor = 0.5;
class SeniorTicket : public Ticket
{
    static const double seniorFactor;

public:
    SeniorTicket(unsigned pdist) : Ticket(pdist) {}
    double getPrice()
    {
        return distance * basePrice * seniorFactor;
    }
};
const double SeniorTicket::seniorFactor = 0.3;

int main(int argc, char *argv[])
{
    Ticket *tickets[3];
    double sum = 0;
    tickets[0] = new StandardTicket(100);
    tickets[1] = new StudentTicket(200);
    tickets[2] = new SeniorTicket(300);
    for (int i = 0; i < 3; i++)
    {
        sum += tickets[i]->getPrice();
        delete tickets[i];
    }
    std::cout << "Total price: " << sum << std::endl;
    getchar();
    return 0;
}
