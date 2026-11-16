#include <iostream>
using namespace std;

// Abstract Base Class
class Shape
{
public:
    virtual void area() = 0;

    virtual void display()
    {
        cout << "\nCalculating Area...\n";
    }

    virtual ~Shape() {}
};

// Circle Class
class Circle : public Shape
{
    float radius;

public:
    Circle(float r)
    {
        radius = r;
    }

    void area()
    {
        cout << "Area of Circle: "
             << 3.14 * radius * radius << endl;
    }
};

// Rectangle Class
class Rectangle : public Shape
{
    float length, breadth;

public:
    Rectangle(float l, float b)
    {
        length = l;
        breadth = b;
    }

    void area()
    {
        cout << "Area of Rectangle: "
             << length * breadth << endl;
    }
};

// Triangle Class
class Triangle : public Shape
{
    float base, height;

public:
    Triangle(float b, float h)
    {
        base = b;
        height = h;
    }

    void area()
    {
        cout << "Area of Triangle: "
             << 0.5 * base * height << endl;
    }
};

int main()
{
    Circle c(5);
    Rectangle r(10, 5);
    Triangle t(6, 4);

    Shape *ptr;

    cout << "--- RUNTIME POLYMORPHISM ---\n";

    ptr = &c;
    ptr->display();
    ptr->area();

    ptr = &r;
    ptr->display();
    ptr->area();

    ptr = &t;
    ptr->display();
    ptr->area();

    return 0;
}
