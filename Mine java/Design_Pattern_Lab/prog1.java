package LabProject.Design_Pattern_Lab;

import java.util.Scanner;

public class prog1
{
    public static void main(String[] args)
    {
        System.out.println("Press 1 for IOS");
        System.out.println("Press 2 for Android");
        System.out.println("Press 3 for Windows");
        System.out.println("Press 4 for BlackBerry OS");
        System.out.print("Enter your choice : ");

        Scanner cin = new Scanner(System.in);
        int choice = cin.nextInt();
        OSFactory osFactory = new OSFactory();
        Os os = osFactory.getInstance(choice);
        System.out.println("------------------------");
        os.spec();
    }
}
