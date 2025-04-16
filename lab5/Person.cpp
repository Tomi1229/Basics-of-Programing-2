#include "Person.h"
#include <iostream>
#include <string>

// függvéyek elé <OsztáyNév>:: kell

const std::string Person::getFirstName()
{
    return firstName;
}

const std::string Person::getLastName()
{
    return lastName;
}

Person::Person(const std::string firstName, const std::string lastName)
{
    // Fontos: minden tagváltozót beállítani
    setFirstName(firstName);
    setLastName(lastName);
    setTaxID("");
    // privateKey = new char[2001]; 5ös feladat
    generatePrivateKey();
    contact = nullptr;
}

Person::Person(const std::string firstName, const std::string lastName, const char *taxID)
{
    // Fontos: minden tagváltozót beállítani
    setFirstName(firstName);
    setLastName(lastName);
    setTaxID(taxID);
    generatePrivateKey();
    contact = nullptr;
}

// copy konstruktor

Person::~Person()
{
    delete PrivateKey;
    // delete[] PrivateKey; // 5ös feladat
}