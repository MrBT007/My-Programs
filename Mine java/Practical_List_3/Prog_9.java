package LabProject.Practical_List_3;

import java.util.Scanner;

class ageException extends Exception{
    @Override
    public String toString() {
        return "Age should be 0 < age < 125";
    }
}

public class Prog_9 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.println("Enter Your age : ");
        boolean flag = true;
        while(flag) {
            int age = cin.nextInt();
            if (age <= 0 || age > 125) {
                try {
                    throw new ageException();
                } catch (Exception e) {
                    System.out.println("Error: " + e);
                    System.out.println(e.toString());
                }
            } else {
                System.out.println("Age is valid");
                flag = false;
            }
        }
    }
}
