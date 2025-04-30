// A fentiekre támaszkodva, önállóan készíts el egy Dog osztályt: a kutyának neve (string) és életkora van.
// • A kutyákat is lehessen szerializálni és deszerializálni. Ezt a Serializable interfész megvalósításával
// elkészítve, a Saver/Loader páros, illetve az operator<< is automatikusan működni fog.
// • Kutya példányokat is perzisztálj
// • A kutyákat is lehessen összehasonlítani, szintén életkor alapján.

#pragma once

#include "comparable.h"
#include "serializable.h"
#include <string>

class Dog : public Comparable, public Serializable
{
    std::string name;
    unsigned char age;

public:
    Dog(const std::string &name, unsigned char age);

    void setAge(unsigned char age);
    // ha unsigned char-t adna vissza, mindig át kellene castolni int-té, hogy ne karaktert írjon ki
    int getAge() const;

    void serialize(std::ostream &os) const;
    void deserialize(std::istream &is);

    virtual bool operator==(const Comparable &other) const;
    virtual bool operator<(const Comparable &other) const;
};

std::ostream &operator<<(std::ostream &os, const Serializable &right);