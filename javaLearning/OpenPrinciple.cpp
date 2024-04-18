#include<iostream>
#include<cmath>
#include<vector>
using namespace  std;


class Shape{
    public:
    double virtual area() const = 0;

};

class Rectangle: public Shape{
    private:
    double width;
    double height;
    public:
     Rectangle(double width ,double height): width(width),height(height){}
     double getWidth()
     {
        return width;
     }

     double area() const override
     {
        return 2*width*height;
     }
};


class Circle: public Shape{
    private:
    double radius;

    public:
     Circle(double radius): radius(radius){}
     double getWidth()
     {
        return radius;
     }

     double area() const override
     {
        return 2*M_PI*radius*radius;
     }
};

class CalculateArea
{
     public:
    int totalArea = 0;
      double calCulate(vector<Shape*>&shapes)
      {
            for (auto shape: shapes)
            {
                    totalArea = totalArea+ shape->area();
            }
            return totalArea;
      }
    
};

int main()
{
    vector<Shape*> shapes = {new Rectangle(5, 4), new Circle(3)};

    CalculateArea arr;

    double totalArea = arr.calCulate(shapes);
    cout<<"total area "<< totalArea;

    for(auto sh :shapes )
    {delete sh;}
    return 0;

}