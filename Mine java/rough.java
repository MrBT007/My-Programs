package LabProject;

import java.util.Scanner;
public class rough {
    public static void main(String[] args) {

        Scanner scanner=new Scanner(System.in);
        String s = "Timur";
        String t= scanner.next();

        if(t.contains("T")&&t.contains("i")&&t.contains("m")&&t.contains("u")&&t.contains("r")){
            System.out.println("Yes");

        }
        else
            System.out.println("No");
    }

}