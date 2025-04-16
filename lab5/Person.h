#include <string>
using namespace std;

class Person
{
private:
    string firstName;
    string lastName;
    char taxID[10];
    char PrivateKey[2001];
    // char *PrivateKey; // 5ös feladat
    Person *contact;

public:
    // konstruktor
    Person(const string firstName, const string lastName);
    Person(const string firstName, const string lastName, const char *taxID);

    // getterek
    const string getFirstName();
    const string getLastName();
    const char getTaxID();
    const Person &getContact();

    // setterek
    void setFirstName(const string firstName);
    void setLastName(const string lastName);
    void setTaxID(const char *taxID);
    void setContact(const Person &contact);

    // függvények
    void print();
    void generatePrivateKey();

    // destruktor
    ~Person();
};