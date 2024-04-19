class Shape{
    public int area()
    {
        return 0;
    }
}

 class Reactange extends Shape{
    private int  width;
    private  int height;

    public Reactange(int width,int height)
    {
        this.width = width;
        this.height= height;
    }

    public int getWidth(
        return width;
    )
    
    @Override
    public int  area()
    {
        return width*height;
    }

 }

  class Circle extends Shape{
    private int  radius;

    public Circle()
    {
        this.radius = radius;
    }

    public int getWidth(
        return radius;
    )
    
    @Override
    public int  area()
    {
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

public class Liskov{
  public static void main(String args[])
  {
    CalculareArea obj = new CalculareArea();
    Shape Shapes[] ={new Reactange(4,1), new Circle(3)};

    Systembj.CalculareTotalArea(Shapes);
  }
}