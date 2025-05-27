#include <iostream>
#include <string>

template <class T>
class Container
{
private:
    T id;

public:
    Container(T idparam = 0) : id(idparam) {} // T másolókonstruktor!
    T getId() const { return id; }            // másoló konstruktor
};

template <class U>
class Cargo
{
private:
    Container<U> *containers;
    int count;

public:
    Cargo() : count(0), containers(nullptr) {}
    ~Cargo()
    {
        delete[] containers;
    }

    void addContainer(Container<U> &param)
    {
        Container<U> *temp = new Container<U>[count + 1];
        for (int i = 0; i < count; i++)
        {
            temp[i] = containers[i]; // op= a T-re is!
        }
        temp[count] = param;
        count++;
        delete[] containers;
        containers = temp;
    }

    Container<U> *getContainerWithId(const U &pid)
    {
        for (int i = 0; i < count; i++)
        {
            if (containers[i].getId() == pid)
            {
                return &containers[i];
            }
        }
        return nullptr;
    }
};

int main(int argc, char *argv[])
{
    Container<int> c1(1);
    Container<int> c2(2);
    Container<int> c3(3);
    Cargo<int> cargo;
    cargo.addContainer(c1);
    cargo.addContainer(c2);
    cargo.addContainer(c3);

    Container<int> *result = cargo.getContainerWithId(2);
    if (result != nullptr)
        std::cout << result->getId() << std::endl;

    getchar();
    return 0;
}