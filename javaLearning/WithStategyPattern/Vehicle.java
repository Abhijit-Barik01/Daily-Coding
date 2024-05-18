package WithStategyPattern;

import WithStategyPattern.Strategy.DriveSt;

public class Vehicle {
    public DriveSt driveobject;
     Vehicle(DriveSt driveobj)
     {
        this.driveobject= driveobj;
     }
     
    public void drive()
     {
        driveobject.drive();
     }

    
}
