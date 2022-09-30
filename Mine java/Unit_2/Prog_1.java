package LabProject.Unit_2;

import java.util.Scanner;

class distance
{
    double x,y,dist;
    Scanner cin = new Scanner(System.in);
    void getX()
    {
        System.out.println("Enter X cordinate (cm)");
        x = cin.nextDouble();
    }
    void getY()
    {
        System.out.println("Enter Y cordinate (cm)");
        y = cin.nextDouble();
    }
    double calculateDistance()
    {
        dist = Math.sqrt((x*x) + (y*y));
        return dist;
    }
    double ToInch()
    {
        double inches = dist/2.54;
        return inches;
    }
    double ToMeter()
    {
        return dist/100;
    }
    double ToFeet()
    {
        return dist/30.48;
    }
}

public class Prog_1
{
    public static void main(String[] args)
    {
        distance d = new distance();
        d.getX();
        d.getY();
        System.out.println("Distance between X coordinate and Y coordinate = "+d.calculateDistance());
        System.out.println(d.calculateDistance()+" in inches is "+" = "+d.ToInch());
        System.out.println(d.calculateDistance()+" in Meter is "+" = "+d.ToMeter());
        System.out.println(d.calculateDistance()+" in Feet is "+" = "+d.ToFeet());
    }
}
