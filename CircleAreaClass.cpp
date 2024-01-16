// Circle class
#include <iostream>
#include <iomanip>
#include <conio.h>

using std::fixed;
using std::setprecision;
class Circle
{
private:
    int x;
    int y;
    double radius;

public:
    Circle(int = 0, int = 0, double = 0.0); // defualt constructor

    void setX(int);
    int getX() const;

    void setY(int);
    int getY() const;

    void setRadius(double);
    double getRadius() const;

    double getDiameter() const;
    double getCircumference() const;

    double getArea() const;

    void print() const;
};
Circle::Circle(int a, int b, double r)
{
    x = a;
    y = b;
    setRadius(r);
}
void Circle::setRadius(double r)
{
    radius = (r < 0.0 ? 0.0 : r);
}
void Circle::setX(int a) { x = a; }
int Circle::getX() const { return x; }
void Circle::setY(int b) { y = b; }
int Circle::getY() const { return y; }
double Circle::getRadius() const { return radius; }
double Circle::getDiameter() const
{
    return 2 * radius;
}
double Circle::getCircumference() const
{
    return 3.14159 * getDiameter();
}
double Circle::getArea() const
{
    return 3.14159 * radius * radius;
}
void Circle::print() const
{
    std::cout << "Center = [" << x << ", " << y << ']' << '\n';
    std::cout << "Radius = " << radius;
}
int main()
{
    Circle c(20, 30, 3.5);

    std::cout << "X coordinate= " << c.getX();
    std::cout << "\nY coordinate= " << c.getY();
    std::cout << "\nRadius= " << c.getRadius();

    c.setX(3);
    c.setY(4);
    c.setRadius(2.5);

    std::cout << "\n\nThe new :\n";
    c.print();

    std::cout << fixed << setprecision(2);

    std::cout << "\nDiameter= " << c.getDiameter();
    std::cout << "\nCircumference= " << c.getCircumference();
    std::cout << "\nArea= " << c.getArea();

    getch();
}