package LabProject.Design_Pattern_Lab;

import java.util.HashMap;

public class lab7_Vehicle_Factory
{
    public static HashMap<String ,lab7_vehicle> hashMap = new HashMap<String ,lab7_vehicle>();

    public static lab7_vehicle getVehicle(String type)
    {
        lab7_vehicle v = null;
        if(hashMap.containsKey(type))
        {
            v = hashMap.get(type);
        }
        else
        {
            switch (type)
            {
                case "Truck":
                    System.out.println("Truck is created");
                    v = new lab7_truck();
                    break;
                case "Cycle":
                    System.out.println("Cycle is created");
                    v = new lab7_cycle();
                    break;
                default:
                    throw new IllegalArgumentException("Vehicle type "+
                            type +
                            " is doesn't exist or else try to write first letter capital");
            }
            hashMap.put(type,v);
        }
        return v;
    }
}
