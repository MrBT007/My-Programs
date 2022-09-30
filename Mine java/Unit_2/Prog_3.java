package LabProject.Unit_2;


class Bike
{
    int noOfWheels;
    int noOfGears;
    String s;
    Bike(int w,int g,String PorD)
    {
        this.noOfWheels = w;
        this.noOfGears = g;
        this.s = PorD;
    }
}

class Car extends Bike
{
    String model;
    Car(int w, int g,String PorD,String modelName)
    {
        super(w,g,PorD);
        this.model = modelName;
    }
}

public class Prog_3 {
    public static void main(String[] args)
    {
        Bike bike = new Bike(2,4,"Petrol");

        System.out.println("No of Wheels of Bike is  "+bike.noOfWheels);
        System.out.println("No of Gears of Bike is  "+bike.noOfGears);
        System.out.println("Petrol or Diesel "+bike.s);

        Car car = new Car(4,6,"Petrol","Kwid");
        System.out.println();
        System.out.println("No of Wheels of Car is  "+car.noOfWheels);
        System.out.println("No of Gears of Car is  "+car.noOfGears);
        System.out.println("Petrol or Diesel "+car.s);
        System.out.println("Model is "+car.model);

    }
}