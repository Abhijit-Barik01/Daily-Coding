package WithStategyPattern;

import WithStategyPattern.Strategy.SportsDriveStrategy;

public class offRoadVehicle  extends Vehicle{
    offRoadVehicle(){
        super(new SportsDriveStrategy());
    }
    
}
