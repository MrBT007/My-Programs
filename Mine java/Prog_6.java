package LabProject;

//Que : Write a program to accept a line and check how many consonants and vowels are there in line.
//Author : Vipul Chaudhary
//Date : 11 aug 2021

import java.util.Scanner;

public class Prog_6 {
    public static void main(String[] args) {
        System.out.println("Enter a String (Only Letters >=a||A && <=z||Z)");
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        int vowel = 0;
        int consonant = 0;
        String ans = str.toUpperCase();

        for(int i=0 ; i<str.length() ; i++)
        {
            char ch = ans.charAt(i);
            if(ch=='A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
                vowel++;
            }
            else if(ch >= 'A' && ch<='Z')
            {
                consonant++;
            }
        }
        System.out.println("Number of Vowels in the string is "+ vowel);
        System.out.println("Number of Consonants in the string is "+ consonant);
    }
}
