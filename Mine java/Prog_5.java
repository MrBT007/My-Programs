package LabProject;

//que : Write a program in Java to find maximum of three numbers using conditional operator.
//Author : Vipul Chaudhary
//Date : 11 aug 2021

import java.util.Scanner;

public class Prog_5 {
    public static void main(String[] args) {
        System.out.print("Enter the three number : ");
        Scanner sc = new Scanner(System.in);
        float num1 = sc.nextFloat();
        float num2 = sc.nextFloat();
        float num3 = sc.nextFloat();

        if(num1>num2 && num1>num3)
        {
            System.out.println(num1 + " is the maximum number");
        }
        else if(num2>num1 && num2>num3)
        {
            System.out.println(num2 + " is the maximum number");
        }
        else
        {
            System.out.println(num3 + " is the maximum number");
        }
    }
}
