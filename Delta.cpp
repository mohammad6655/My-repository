#include <iostream>
#include <cmath>

int main()
{
    // implement the quadratic formula
    float a, b, c;
    std::cout << "Enter the ciefiicaients of a quadratic equation: " << '\n';
    std::cout << "\ta: ";
    std::cin >> a;
    std::cout << "\tb: ";
    std::cin >> b;
    std::cout << "\tc: ";
    std::cin >> c;
    std::cout << "The equation is : " << a << "*x*x  + " << b << "*x + " << c << " = 0 " << '\n';
    float d = b * b - 4 * a * c; // discriminant
    float sqrtd = sqrt(d);
    float x1 = ((-b + sqrtd) / (2 * a));
    float x2 = ((-b - sqrtd) / (2 * a));
    std::cout << "The solutions are: " << '\n';
    std::cout << "\tx1 = " << x1 << '\n';
    std::cout << "\tx2 = " << x2 << '\n';
    std::cout << "check: " << '\n';
    std::cout << "\ta+x1*x1 + b*x1 + c = " << a * x1 * x1 + b * x1 + c << '\n';
    std::cout << "\ta+x2*x2 + b*x2 + c = " << a * x2 * x2 + b * x2 + c << '\n';
    return 0;
}