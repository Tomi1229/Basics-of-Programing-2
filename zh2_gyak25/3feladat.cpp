#include <iostream>

// ------------------------- 1.feladat -------------------------
class Potion : public IGameEntity, public ISize
{
private:
    std::string description;
    int healingPower;
    double volume;

public:
    Potion(std::string desc, int power, double volume) : description(desc), healingPower(power), volume(volume) {}

    std::string getDescription() const override
    {
        return description;
    }

    int calculatePower() const override
    {
        return volume * 3;
    }

    double getVolume() const override
    {
        return volume;
    }
};

class MagicItem : public IGameEntity, public ISize
{
private:
    std::string name;
    int magicStrength;
    double size;

public:
    MagicItem(std::string name, int magicStrenght, double size) : name(name), magicStrength(magicStrenght), size(size) {}

    std::string getDescription() const override
    {
        return "Magic Item: " + name;
    }

    int calculatePower() const override
    {
        return size * 5;
    }

    double getVolume() const override
    {
        return size;
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
                std::cout << "Item:" << i + 1 << "- Description: " << inventory[i]->getDescription() << std::endl;
                std::cout << "Power:" << inventory[i]->calculatePower() << std::endl;
                if (const ISize *sizeItem = dynamic_cast<const ISize *>(inventory[i]))
                {
                    std::cout << "Volume:" << sizeItem->getVolume() << "cubic meters \n";
                }
            }
        }
    }
};

int main()
{
    // Termékek létrehozása
    Potion healingPotion("Health Potion", 25, 2.5);
    MagicItem magicWand("Magic Wand", 10, 1.2);

    // Áruházás létrehozása
    Store store;

    // Termékek hozzáadása az áruházi kollekcióhoz
    store.addItem(&healingPotion, 0);
    store.addItem(&magicWand, 1);

    // Az áruház kiírása
    store.displayItems();

    return 0;
}
// ------------------------- 3.feladat -------------------------

class ISize
{
public:
    virtual double getVolume() const = 0;

    virtual ~ISize() {}
};