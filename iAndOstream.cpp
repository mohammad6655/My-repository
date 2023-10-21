#include <iostream>

enum Color
{
    red,
    green,
    blue,
};

std::ostream &operator<<(std::ostream &out, Color color)
{
    if (color == red)
        out << "red";
    else if (color == green)
        out << "green";
    else if (color == blue)
        out << "blue";
    else
        out << "???";
    return out;
}

std::istream &operator>>(std::istream &in, Color &color)
{
    int input{};
    in >> input;
    color = static_cast<Color>(input);
    return in;
}
int main()
{
    std::cout << "Enter a color (0=red, 1=green, 20=blue): ";
    Color shirt{blue};
    std::cout << "Your shirt is " << shirt;
    return 0;
}