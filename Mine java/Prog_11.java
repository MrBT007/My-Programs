package LabProject;

/*
Write a Java Program to find area of Geometric figures using method Overloading.
 */

import java.util.Scanner;

public class Prog_11 {
  static float area(int r, float pi) {
    System.out.println("Calculating area of circle ...");
    return pi * r * r;
  }

  static float area(float l, float b) {
    System.out.println("Calculating area of rectangle ...");
    return l * b;
  }

  static float area(float l) {
    System.out.println("Calculating area of square ...");
    return l * l;
  }

  static int area(int a, int b) {
    System.out.println("Calculating area of eclipse ...");
    return 2 * a * b;
  }

  public static void main(String[] args) {
    Scanner cin = new Scanner(System.in);

    System.out.println("To get the area of circle , press 1");
    System.out.println("To get the area of rectangle , press 2");
    System.out.println("To get the area of square , press 3");
    System.out.println("To get the area of eclipse , press 4");
    System.out.println("Enter Your choice:");

    int choice = cin.nextInt();

    switch (choice) {
      case 1 -> {
        System.out.print("Enter the value of radius (integer) : ");
        int r = cin.nextInt();
        System.out.println("The area is : " + area(r, 3.14f) + " Unit");
      }
      case 2 -> {
        System.out.print("Enter length and width : ");
        float l = cin.nextFloat();
        float b = cin.nextFloat();
        System.out.println("The area is : " + area(l, b) + " Unit");
      }
      case 3 -> {
        System.out.print("Enter the value of length : ");
        float l = cin.nextFloat();
        System.out.println("The area is : " + area(l) + " Unit");

      }
      case 4 -> {
        System.out.print("Enter the value of a and b (integer) : ");
        int a = cin.nextInt();
        int b = cin.nextInt();
        System.out.println("The area is : " + area(a, b) + " Unit");
      }
    }
  }
}
