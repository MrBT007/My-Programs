package LabProject;

import java.util.Scanner;

public class Prog_15 {

    public static int factorial(int n)
    {
        if(n==0)
            return 1;
        return (n*factorial(n-1));
    }
    public static void main(String[] args) {

        Scanner cin = new Scanner(System.in);
        System.out.println("Enter the number of row");
        int n = cin.nextInt();
        for(int i = 0; i<=n ;i++)
        {
                for(int j = 0 ;j<= n-i;j++)
                {
                    System.out.print(" ");
                }
                for(int j = 0;j<=i; j++)
                {
                    System.out.print(" " + factorial(i)/(factorial(i-j)*factorial(j)));
                }
            System.out.println();
            }
        }
    }
