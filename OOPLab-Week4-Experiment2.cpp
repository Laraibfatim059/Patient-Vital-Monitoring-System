#include <iostream>
using namespace std;

class Circle
{
private:
    double radius;
    double pi = 3.14159;

public:
    Circle()
    {
        setRadius(0.0);
    }

    Circle(double r)
    {
        setRadius(r);
    }

    void setRadius(double r)
    {
        radius = r;
    }

    double getRadius()
    {
        return radius;
    }

    double getArea()
    {
        return pi * getRadius() * getRadius();
    }

    double getDiameter()
    {
        return getRadius() * 2;
    }

    double getCircumference()
    {
        return 2 * pi * getRadius();
    }
};

int main()
{
    double r;

    cout << "Enter the radius of the circle: ";
    cin >> r;

    Circle c(r);

    cout << "\nRadius: " << c.getRadius() << endl;
    cout << "Area: " << c.getArea() << endl;
    cout << "Diameter: " << c.getDiameter() << endl;
    cout << "Circumference: " << c.getCircumference() << endl;

    return 0;
}
