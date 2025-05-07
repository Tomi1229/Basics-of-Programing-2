#include "dog.h"

using namespace std;

Dog::Dog(const string &name, unsigned char age) : name(name), age(age) {}
void Dog::setAge(unsigned char age)
{
    this->age = age;
}
int Dog::getAge() const
{
    return age;
}

void Dog::serialize(ostream &os) const
{
    os << name << '\t' << (int)age << endl;
}
void Dog::deserialize(istream &is)
{
    string nameInput;
    int ageInput;

    is >> nameInput >> ageInput;
    name = nameInput;
    age = (unsigned char)ageInput;
}
bool Dog::operator==(const Comparable &other) const
{
    const Dog *dog = dynamic_cast<const Dog *>(&other);
    if (dog)
        return age == dog->age;
    return false;
}
bool Dog::operator<(const Comparable &other) const
{
    const Dog *dog = dynamic_cast<const Dog *>(&other);
    if (dog)
        return age < dog->age;
    return false;
}