#include <iostream>
#include <iomanip>
#include <conio.h>
#include <string>
#include <vector>

using std::fixed;
using std::setprecision;
using std::string;
using std::vector;

class Shape
{
public:
    virtual double getArea() const
    {
        return 0.0;
    }
    virtual double getVolume() const
    {
        return 0.0;
    }

    // pure virtual functions; overridden in derived classes
    virtual void print() const = 0;

    virtual string getName() const = 0; // return shape name
};

class Point : public Shape
{
private:
    int x;
    int y;

public:
    Point(int = 0, int = 0);

    void setX(int a) { x = a; }
    int getX() const { return x; }

    void setY(int b) { y = b; }
    int getY() const { return y; }

    virtual string getName() const { return "Point: "; }

    virtual void print() const { std::cout << '[' << getX() << ", " << getY() << ']'; }
};

// default constructor
Point::Point(int m, int n) : x(m), y(n)
{
    // empty body
}
class Circle : public Point
{
private:
    double radius;

public:
    Circle(int = 0, int = 0, double = 0.0);

    void setRadius(double r) { radius = (r < 0.0 ? 0.0 : r); }
    double getRadius() const { return radius; }

    double getDiameter() const { return 2 * getRadius(); }
    double getCircumference() const { return 3.14159 * getDiameter(); }
    virtual double getArea() const { return 3.1419 * getRadius() * getRadius(); }

    virtual string getName() const { return "Circle:   "; }

    virtual void print() const
    {
        std::cout << "center= ";
        Point::print();
        std::cout << ";   radius = " << getRadius();
    }
};

// default constructor
Circle::Circle(int xValue, int yValue, double radiusValue) : Point(xValue, yValue) // call base-class constructor
{
    setRadius(radiusValue);
}
class Cylinder : public Circle
{
private:
    double height;

public:
    Cylinder(int = 0, int = 0, double = 0.0, double = 0.0);

    void setHeight(double h) { height = (h < 0.0 ? 0.0 : h); }

    double getHeight() const
    {
        return height;
    }

    virtual double getArea() const { return 2 * Circle::getArea() + getCircumference() * getHeight(); }
    virtual double getVolume() const { return Circle::getArea() * getHeight(); }

    virtual string getName() const { return "Cylinder: "; }

    virtual void print() const
    {
        Circle::print();
        std::cout << ";     height" << getHeight();
    }
};

// default constructor
Cylinder::Cylinder(int xValue, int yValue, double radiusValue, double heightValue) : Circle(xValue, yValue, radiusValue)
{
    setHeight(heightValue);
}

void f1(const Shape *);

void f2(const Shape &);

int main()
{
    std::cout << fixed << setprecision(2);

    Point point(7, 11);

    std::cout << point.getName();
    point.print();

    std::cout << '\n';

    Circle circle(22, 8, 3.5);
    std::cout << circle.getName();
    circle.print();

    std::cout << '\n';

    Cylinder cylinder(10, 10, 3.3, 10);
    std::cout << cylinder.getName();
    cylinder.print();

    std::cout << "\n\n================================================\n";

    // create vector of three base-class obers

    vector<Shape *> sv(3);

    sv[0] = &point;

    sv[1] = &circle;

    sv[2] = &cylinder;

    for (int i = 0; i < sv.size(); i++)
        f1(sv[i]);

    std::cout << "\n====================================================\n";

    for (int j = 0; j < sv.size(); j++)
        f2(*sv[j]);

    getch();
}

// make virtual function calls off a base-class ober
// using dynamic binding
void f1(const Shape *p)
{
    std::cout << p->getName();

    p->print();

    std::cout << "\narea= " << p->getArea();
    std::cout << "\nvolume = " << p->getVolume() << '\n';
}

// make virtual function calls off a base-class refernce
// using dynamic binding
void f2(const Shape &R)
{
    std::cout << R.getName();

    R.print();

    std::cout << "\narea = " << R.getArea();
    std::cout << "\nvolume = " << R.getVolume() << '\n';
}