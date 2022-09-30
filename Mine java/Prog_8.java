package LabProject;
/*
que : Create a class which ask the user to enter a sentence,
and it should display count of each vowel type in the sentence. The program should continue till user enters a word
“quit”. Display the total count of each vowel for all sentences.

author : Bhut Tushar
date : 12-8-2021
*/

import java.util.Scanner;

public class Prog_8 {
    public static void main (String[]args)
    {
      Scanner sc = new Scanner(System.in);

      while (true)
      {
        System.out.print("Enter a Sentence : ");
        String st = sc.nextLine();
        String finalstr = st.toUpperCase();

        if (st.equalsIgnoreCase("quit"))
        {
            break;
        }
        else
        {
            int count = 0;
            for (int i = 0; i < st.length(); i++) {
            char ch = finalstr.charAt(i);
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
            {
              count++;
            }
          }
          System.out.println(count);
        }
      }
    }
  }

