package LabProject.Practical_List_3;

import java.util.Scanner;

public class Prog_7 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.println("Enter the values of x and y");
        System.out.print("x = ");
        int x = cin.nextInt();
        System.out.print("y = ");
        int y = cin.nextInt();

        try
        {
            System.out.println("x/y is " + x/y);
        }
        catch (ArithmeticException ae)
        {
            System.out.println("ERROR : No such value can divide by Zero");
        }
    }
}
