package LabProject;

//que : Write a program to count the number of words that start with capital letters.

import java.util.Scanner;

public class Prog_7 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the sentence");
        String str = sc.nextLine();
        int count = 0;
        for(String s: str.split(" "))
        {
            if(str.charAt(0)>='A' && str.charAt(0)<='Z')
            {
                count++;
            }
        }
        System.out.println("Total "+count+"  words which are starts with capital letter.");
    }
}
