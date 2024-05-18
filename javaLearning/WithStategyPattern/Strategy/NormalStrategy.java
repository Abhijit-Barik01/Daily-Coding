package WithStategyPattern.Strategy;

public class NormalStrategy implements DriveSt {
    @Override
    public void drive()
    {
        System.out.println("normal drive capablity");
    }
    
}
