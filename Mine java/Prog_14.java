package LabProject;

import java.util.Scanner;

public class Prog_14 {
  public static void main(String[] args) {
    Scanner cin = new Scanner(System.in);
    System.out.println("Enter number of row for Matrix 1");
    int n1 = cin.nextInt();
    System.out.println("Enter number of column for matrix 1 or number of row for Matrix 2");
    int n2 = cin.nextInt();
    System.out.println("Enter number of column for Matrix 2");
    int n3 = cin.nextInt();
    int[][] m1 = new int[n1][n2];
    System.out.println("Enter the elements of 1st matrix : ");
    for (int i = 0; i < n1; i++) {
      for (int j = 0; j < n2; j++) {
        m1[i][j] = cin.nextInt();
      }
    }
    int[][] m2 = new int[n2][n3];
    System.out.println("Enter the elements of 2nd matrix : ");
    for (int i = 0; i < n2; i++) {
      for (int j = 0; j < n3; j++) {
        m2[i][j] = cin.nextInt();
      }
    }
    int[][] ans = new int[n1][n3];
    for (int i = 0; i < n1; i++) {
      for (int j = 0; j < n3; j++) {
        ans[i][j] = 0;
      }
    }

    for (int i = 0; i < n1; i++) // row of m1
    {
      for (int j = 0; j < n3; j++) // colums of m2
      {
        for (int k = 0; k < n2; k++) {
          ans[i][j] += m1[i][k] * m2[k][j];
        }
      }
    }

    System.out.println("So , The value of M1 X M2 is ");
    System.out.println("____________________");
    for (int i = 0; i < n1; i++) {
      for (int j = 0; j < n3; j++) {
        System.out.print(ans[i][j] + " ");
      }
      System.out.println();
    }
  }
}
