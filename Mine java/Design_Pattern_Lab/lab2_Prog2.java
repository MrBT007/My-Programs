package LabProject.Design_Pattern_Lab;

import java.util.Scanner;

public class lab2_Prog2
{
    public static void main(String[] args)
    {
        System.out.println("Press 0 for Bike\nPress 1 for Car");
        System.out.print("Make your choice : ");
        Scanner cin = new Scanner(System.in);
        int choice = cin.nextInt();

        VehicleBuilder v = new VehicleBuilder();

        // Assuming Bike is 2 Seater
        if(choice == 1)
        {
            System.out.print("Enter Seats : ");
            int seats = cin.nextInt();
            v.setSeats(seats);
        }
        else
        {
            v.setSeats(2);
        }

        System.out.print("Enter Model Name : ");
        String model = cin.next();
        v.setModel(model);

        System.out.print("Enter Number of Gears : ");
        int gears = cin.nextInt();
        v.setGears(gears);

        System.out.print("Enter Mileage : ");
        int mileage = cin.nextInt();
        v.setMileage(mileage);

        System.out.println();
        System.out.print(v);
    }
}
