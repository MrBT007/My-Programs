package LabProject.Design_Pattern_Lab;

public class lab8_Decorator
{
    public static void main(String[] args)
    {
        lab8_Car sportsCar = new lab8_SportsCar(new lab8_basicCar());
        sportsCar.assemble();
        System.out.println("------------------");

        lab8_Car sportsluxuryCar = new lab8_SportsCar(new lab8_LuxuryCar(new lab8_basicCar()));
        sportsluxuryCar.assemble();
    }
}
