interface Shape{
    double area();
}

class Reactange implements Shape
{
    private double width;
    private double height;

    public Reactange(double width,double height)
    {
     this.width = width;
     this.height= height;
    }

    public double getWidth()
    {
        return width;
    }
    @Override
    public double area()
    {
        return width*height;
    }
}

class Circle implements Shape
{
    private double radius;

    public Circle(double radius)
    {
        this.radius = radius;
    }

     public double getRadius() {
        return radius;
    }

    @Override
    public double area() {
        return Math.PI * radius * radius;
    }

}

class CalculareArea{

    public double CalculareTotalArea(Shape Shapes[])
    {
        double total =0;
        for(Shape shape : Shapes)
        {
            total= total+shape.area();
        }
            
        
        return total;
    }
}

public class OpenClosed{
    public static void main(String args[])
    {
        CalculareArea obj = new CalculareArea();
        Shape Shapes[] = {new Reactange(4.5,6.5),new Circle(4.5) };

        double totalArea = obj.CalculareTotalArea(Shapes);

       System.out.println("Total Area: "+totalArea);

    }


}