package LabProject;

//Que : Write a program in Java to generate first n prime numbers.
//Author : Vipul Chaudhary
//Date : 11 aug 2021

import java.util.Scanner;

public class Prog_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number n , till which you want to print prime numbers:: ");
        int n = sc.nextInt();
        boolean isPrime = true;

        for(int i = 2 ; i<= n ; i++)
        {
            for(int j=2 ; j <= i/2 ; j++)
            {
              if(i%j==0)
              {
                  isPrime = false;
                  break;
              }
            }
            if(isPrime)
            {
            System.out.print(i + " ");
            }
            isPrime = true;
        }

    }
}
