#include <iostream>
#include <cmath>
using namespace std;

class Shape{
    public:
        virtual double area() const = 0;
};

class ShapeWithParameter : public Shape
{
    public:
        virtual double parameter() const = 0;
};

class Rectangle : public ShapeWithParameter
{
    private:
    double width;
    double height;

    public:
    Rectangle( double width,double height):width(width),height(height){}

    double area() const override
    {
        return width*height;
    }
    double parameter() const override
    {
        return 2*(width+ height);
    }
};

int main()
{

    ShapeWithParameter *rec = new Rectangle(4.4,5.5);
    cout<<(rec->area());
}