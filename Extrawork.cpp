#include <iostream>
using namespace std;

class Shape
{
public:
    virtual void area() = 0;
};

class circle : public Shape
{
public:
    void area()
    {
        cout << "For the Area of the circle:";
    }
};
class rectangle : public Shape
{
public:
    void area()
    {
        cout << "For the Area of the rectangle:";
    }
};
class square : public Shape
{
public:
    void area()
    {
        cout << "For the Area of the square:";
    }
};

int main()
{
    Shape *s1 = new square();
    s1->area();
}