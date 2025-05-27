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