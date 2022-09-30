package LabProject;

//Que: Write a program to enter two numbers and perform mathematical operations on them.
//Author : Vipul Chaudhary
//Date : 11 aug 2021

import java.util.Scanner;

public class Prog_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Two numbers : ");
        int num1 = sc.nextInt();
        int num2 = sc.nextInt();
        System.out.println(num1+" + "+num2+" = "+(num1+num2));
        System.out.println(num1+" - "+num2+" = "+(num1-num2));
        System.out.println(num1+" * "+num2+" = "+(num1*num2));
        System.out.println(num1+" / "+num2+" = "+((float)num1/num2));
        // Here (float) means we have typecasted int to float
        System.out.println(num1+" % "+num2+" = "+(num1%num2));
    }
}
