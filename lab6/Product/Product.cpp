#include "Product.h"

Product::Product(int pid, const std::string &pname, double pprice)
    : price((pprice > MAX_PRICE) ? MAX_PRICE : pprice) {} // ( (feltétel) ? haigen : hanem) // ternary operator

Product::~Product()
{
}

// TODO maradek tagfv
int Product::getTotalProducts()
{
    return totalProducts;
}

double Product::getMaxPrice()
{
    return MAX_PRICE;
}

void Product::getId() const
{
    std::cout << "ID: " << id << std::endl;
}

void Product::getName() const
{
    std::cout << "Name: " << name << std::endl;
}

void Product::getPrice() const
{
    std::cout << "Price: " << price << std::endl;
}

void Product::printDetails() const
{
    std::cout << "ID: " << id << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Price: " << price << std::endl;
}
