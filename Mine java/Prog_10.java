package LabProject;

/*
Write an interactive program to print a diamond shape. For example, if user enters the number 3, the diamond will be as follows:
   *
  * *
 * * *
  * *
   *
 */

import java.util.Scanner;

public class Prog_10 {
  public static void main(String[] args) {
    Scanner cin = new Scanner(System.in);
    System.out.print("Enter the number of lines : ");
    int n = cin.nextInt();

    for (int i = 1; i <= n; i++) {
      for (int j = i; j < n; j++) {
        System.out.print(" ");
      }
      for (int k = 1; k <= i; k++) {
        System.out.print(" *");
      }
      for (int j = i; j < n; j++) {
        System.out.print(" ");
      }
      System.out.println();
    }

    for (int i = n-1; i >= 1; i--) {
      for (int j = i; j < n; j++) {
        System.out.print(" ");
      }
      for (int k = 1; k <= i; k++) {
        System.out.print(" *");
      }
      for (int j = i; j < n; j++) {
        System.out.print(" ");
      }
      System.out.println();
    }

  }
}
