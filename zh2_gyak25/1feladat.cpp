#include <string>
#include <iostream>
// 1) feladat megoldása
class Potion : public IGameEntity
{
private:
    std::string description;
    int healingPower;

public:
    Potion(std::string desc, int power) : description(desc), healingPower(power) {}

    std::string getDescription() const override
    {
        return description;
    }

    int calcultePower() const override
    {
        return healingPower * 2;
    }
};

class MagicItem : public IGameEntity
{
private:
    std::string name;
    int magicStrength;

public:
    MagicItem(std::string name, int magicStrenght) : name(name), magicStrength(magicStrenght) {}

    std::string getDescription() const override
    {
        return "Magic Item: " + name;
    }

    int calcultePower() const override
    {
        return magicStrength * magicStrength;
    }
};

class IGameEntity
{
public:
    virtual ~IGameEntity() = default;

    virtual std::string getDescription() const = 0;
    virtual int calcultePower() const = 0;
};

void DisplayItemDetails(const IGameEntity &item)
{
    std::cout << "Item Description: " << item.getDescription() << std::endl;
    std::cout << "Item Power: " << item.calcultePower() << std::endl;
}

int main()
{
    Potion healthPotion("Health Potion", 25);
    MagicItem magicWand("Magic Wand", 50);

    DisplayItemDetails(healthPotion);
    DisplayItemDetails(magicWand);

    return 0;
}