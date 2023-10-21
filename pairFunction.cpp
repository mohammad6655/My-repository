#include <iostream>

template<typename T>

struct Pair
{
    T first{};
    T second{};
};
template <typename T>
T max(Pair<T> p)
{
    return (p.first > p.second) ? p.first : p.second;
}
int main()
{
    Pair<int> p1{5, 6};
    Pair<double> p2{5, 6};
    std::cout << max<int>(p1) << " is larger.";
    std::cout << max<double>(p2) << " is larger.";
    return 0;
}