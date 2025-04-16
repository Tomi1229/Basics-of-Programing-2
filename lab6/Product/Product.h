#pragma once
#include <iostream>
#include <string>

class Product
{
private:
    static int totalProducts;
    static constexpr double MAX_PRICE = 5000.0; // maximum ár

    // nem helyes
    // static const int size=10;
    // int arr[size];

    const int id;
    const std::string name;
    const double price;

public:
    Product(int pid, const std::string &pname, double pprice);

    ~Product();

    static int getTotalProducts(); // Objektumt�l függetlenöl visszaadja a darabszámot

    static constexpr double getMaxPrice(); // A max lehetséges ár, sosem változik

    void getId() const;

    void getName() const;

    void getPrice() const;

    void printDetails() const;
};
