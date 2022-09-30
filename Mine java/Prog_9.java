package LabProject;

/*
Write an interactive program to print a string entered in a pyramid form. For instance, the string “stream” has to be displayed as follows:
             S
            S t
           S t r
         S t r e
       S t r e a
     S t r e a m

 */

import java.util.Scanner;

public class Prog_9 {
  public static void main(String[] args) {
    String str = "Stream";
    int length = str.length();
    for (int i = 1; i <= length; i++) {
      for (int j = length-1; j >= i; j--) {
        System.out.print(" ");
      }
      for (int k = 0; k < i; k++) {
        System.out.print(str.charAt(k) + " ");
      }
      System.out.println();
    }
  }
}
