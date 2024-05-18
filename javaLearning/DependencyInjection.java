import java.lang.Math;
interface shape {
    double area();
}

interface shapeWithParameter extends shape {

    double perimeter();
}

class Rectangle implements shapeWithParameter
{
   private int width;
   private int height;

   public Rectangle(int width,int height)
   {
     this.height =height;
     this.width = width;
   }
   @Override
   public double area()
   {
     return width*height*1.0;
   }
   public double perimeter()
   {
     return 2*(width+height)*1.0;
   }
}

class Circle implements shape
{
    private double radius;

   public Circle(double radius)
    {
          this.radius = radius;
    }

@Override
public double area() {
    return Math.PI*radius*radius;
}

}

public class DependencyInjection
{
    

     public static void main(String[] args) {

      shapeWithParameter rectangle = new Rectangle(45,50);
        System.out.println("Rectangle Area: " +  rectangle.area());
        System.out.println("Rectangle Perimeter: " + ((shapeWithParameter) rectangle).perimeter());

        shape circle = new Circle(4.5);
        System.out.println("area of circle "+ circle.area());
     }
}