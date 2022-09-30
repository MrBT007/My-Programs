package LabProject.Unit_2;

import java.util.Scanner;

public class Prog_6
{
    static int sumArray(int[] array)
    {
        int sum=0;
        for(int i:array) {
            sum += i;
        }
        return sum;
    }
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.print("How many numbers do you want to add? : ");
        int n = cin.nextInt();
        int [] arr = new int[n];
        System.out.print("Enter the numbers : ");
        for(int i = 0 ; i< n ; i++)
        {
            arr[i] = cin.nextInt();
        }
        int result = sumArray(arr);
        System.out.print("Sum of all Numbers is : "+ result);
    }
}
