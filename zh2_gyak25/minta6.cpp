#include <iostream>
#include <string>

class Chocolate
{
protected:
    std::string name;
    double weight;
    std::string *ingredients;
    int ingredientCount;
    static double unitPrice;

public:
    // Konstruktor
    Chocolate(const std::string &name, double weight, const std::string ing[], int count)
        : name(name), weight(weight), ingredientCount(count)
    {
        ingredients = new std::string[count];
        for (int i = 0; i < count; ++i)
        {
            ingredients[i] = ing[i];
        }
    }

    Chocolate(const Chocolate &other)
        : name(other.name), weight(other.weight), ingredientCount(other.ingredientCount)
    {
        ingredients = new std::string[ingredientCount];
        for (int i = 0; i < ingredientCount; ++i)
        {
            ingredients[i] = other.ingredients[i];
        }
    }
    ~Chocolate() { delete[] ingredients; }

    static void setUnitPrice(double price) { unitPrice = price; }

    double getPrice() const { return weight * unitPrice; }

    friend std::ostream &operator<<(std::ostream &os, const Chocolate &c)
    {
        os << static_cast<int>(c.weight) << "g-os " << c.name << " csokoládé (";
        for (int i = 0; i < c.ingredientCount; ++i)
        {
            os << c.ingredients[i];
            if (i < c.ingredientCount - 1)
                os << " ";
        }
        os << ")";
        return os;
    }
};

double Chocolate::unitPrice = 0.0;

int main()
{
    Chocolate::setUnitPrice(20.5);

    std::string ings[] = {"Kakaó", "Cukor", "Tejpor"};
    Chocolate choco("Bilka", 100.0, ings, 3);

    std::cout << choco << " " << choco.getPrice() << " Ft-ért" << std::endl;

    return 0;
}
