package LabProject.Practical_List_3;

import java.util.Scanner;

public class Prog_8 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int arr[] = {7,12,0,123,15};

        try{
            System.out.println("Enter that two index");
            int x = cin.nextInt();
            int y = cin.nextInt();
            int a = arr[x];
            int b = arr[y];
            try
            {
                System.out.println("Division of "+a+"/"+b+" = " + a/b);
            }
            catch (ArithmeticException ae)
            {
                System.out.println("Cant divide by that element");
            }
        }
        catch (ArrayIndexOutOfBoundsException ai)
        {
            System.out.println("Array index bounds");
        }

    }
}
