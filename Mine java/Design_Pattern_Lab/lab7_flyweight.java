package LabProject.Design_Pattern_Lab;

import java.util.Scanner;

public class lab7_flyweight
{
    public static void main(String[] args)
    {
        System.out.println("Welcome to the shop!");
        System.out.println("What do you want to buy ?");
        Scanner cin = new Scanner(System.in);
        String s = cin.next();

        lab7_vehicle v = lab7_Vehicle_Factory.getVehicle(s);
        System.out.println("Which colour of "+s+" do you want ?");
        String color = cin.next();
        v.assignColour(color);
        v.startEngine();

//        v.assignColour("Black");
//        v.startEngine();
    }
}
