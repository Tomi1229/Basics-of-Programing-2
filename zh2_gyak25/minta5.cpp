#include <iostream>

template <class T>
class Container
{
private:
    T first;
    T second;

public:
    Container(T first, T second) : first(first), second(second) {}

    T getFirst() const { return first; }
    T getSecond() const { return second; }

    void setFirst(T param) { return first = param; }
    void setSecond(T param) { return second = param; }
};

template <typename U>
void swapElements(Container<U> &obj)
{
    U temp = obj.getFirst();       // d) kell másolhatóság
    obj.setFirst(obj.getSecond()); // d) kell hozzárendelhetőség (operator=)
    obj.setSecond(temp);
}

int main()
{

    Container<int> c(5, 10);
    std::cout << "Before swap: " << c.getFirst() << "and " << c.getSecond() << std::endl;
    swapElements(c);
    std::cout << "After swap: " << c.getFirst() << "and " << c.getSecond() << std::endl;
    // d) kell << túlterhelése
    return 0;
}