/**
 * AbstarctConcept
 */

abstract class Solution{

public abstract void drive();
public abstract void fly();

public void playMusic()
{
    System.out.println("Music started");
}

}
abstract class Wagon extends Solution
{
    public  void  drive()
    {
        System.out.println(" we can drive baby");
    }
}
 class Wagonupdate extends Wagon
 {
    public void fly()
     {
        System.out.println(" we can fly");
     }
 }

public class AbstarctConcept {
    public static void main(String []args)
    {
        Wagonupdate  obj = new Wagonupdate();
        obj.drive();
        obj.playMusic();
        Solution obj1= new Wagonupdate();
        obj1.drive();

    }

    
}