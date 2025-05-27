#include <iostream>

// ------------------------- 1.feladat -------------------------
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

    int calculatePower() const override
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

    int calculatePower() const override
    {
        return magicStrength * magicStrength;
    }
};

class IGameEntity
{
public:
    virtual ~IGameEntity() = default;

    virtual std::string getDescription() const = 0;
    virtual int calculatePower() const = 0;
};

void DisplayItemDetails(const IGameEntity &item)
{
    std::cout << "Item Description: " << item.getDescription() << std::endl;
    std::cout << "Item Power: " << item.calculatePower() << std::endl;
}

int main()
{
    Potion healthPotion("Health Potion", 25);
    MagicItem magicWand("Magic Wand", 50);

    DisplayItemDetails(healthPotion);
    DisplayItemDetails(magicWand);

    return 0;
}
// ------------------------- 2.feladat -------------------------

class Store
{
private:
    IGameEntity *inventory[10]; // egyszerű tároló, ami 10 elemnek ad helyet

public:
    Store()
    {
        for (int i = 0; i < 10; i++)
        {
            inventory[i] = nullptr; // kezdetben nincs benne semmi
        }
    }

    void addItem(IGameEntity *item, int index)
    {
        if (index >= 0 && index < 10)
        {
            inventory[index] = item; // hozzáadjuk a kollekcióhoz
        }
    }

    void displayItems() const
    {
        for (int i = 0; i < 10; ++i)
        {
            if (inventory[i])
            {
                std::cout << "Item" << i + 1 << "- Description: " << inventory[i]->getDescription() << std::endl;
                std::cout << "Power:" << inventory[i]->calculatePower() << std::endl;
            }
        }
    }
};

int main()
{
    // Termékek létrehozása
    Potion healingPotion("Health Potion", 25);
    MagicItem magicWand("Magic Wand", 10);

    // Áruházás létrehozása
    Store store;

    // Termékek hozzáadása az áruházi kollekcióhoz
    store.addItem(&healingPotion, 0);
    store.addItem(&magicWand, 1);

    // Az áruház kiírása
    store.displayItems();

    return 0;
}
