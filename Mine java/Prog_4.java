package LabProject;

//Que : Write a program that calculate percentage marks of the student if marks of 6 subjects are given.
//Author : Vipul Chaudhary
//Date : 11 aug 2021

import java.util.Scanner;

public class Prog_4 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the marks (Out of 100) of 6 lab13_subject  ");
        float total = 0;
        for(int i = 0 ; i<6 ; i++)
        {
            float marks = sc.nextFloat();
            total += marks;
        }

        System.out.println("So The percentage of " + total + " is " + (total / 6)+"%");
    }
}
