package LabProject.Unit_2;

import java.util.Locale;
import java.util.Scanner;

public class Prog_12 {
    public static void main(String[] args)
    {
        System.out.println("Enter two strings");
        Scanner cin = new Scanner((System.in));
        String a = cin.next();
        String b = cin.next();

        String s1 = a.toLowerCase();
        String s2 = b.toLowerCase();
        boolean flag = true;

        if(s1.length() == s2.length())
        {
            int j = s2.length()-1;
            for (int i = 0;i<s1.length();i++)
            {
                if(s1.charAt(i) != s2.charAt(j))
                {
                    flag = false;
                }
                j--;
            }
        }
        else
        {
            flag = false;
        }

        if(flag)
        {
            System.out.println("String "+s1+" and "+s2+" are rotation of each other");
        }
        else
        {
            System.out.println("String "+s1+" and "+s2+" are not rotation of each other");
        }
    }
}