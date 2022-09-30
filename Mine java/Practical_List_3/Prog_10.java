package LabProject.Practical_List_3;

import java.util.Scanner;

class InsufficientBalance extends Exception {
    @Override
    public String toString() {
        return "Not Sufficient Balance";
    }
}

public class Prog_10 {
    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        int balance = 1000;
        boolean flag = true;

        while (flag) {
            if(balance == 0)
            {
                System.out.println("Now you have Zero Balance");
                break;
            }
            System.out.println("Enter the amount for withdrawal");
            int inputBalance = cin.nextInt();

            if (balance <= 0 || inputBalance > balance) {
                try {
                    throw new InsufficientBalance();
                } catch (InsufficientBalance e) {
                    System.out.println(e);
                }
                flag = false;
            } else {
                System.out.println(inputBalance + " has been Debited");
                balance -= inputBalance;
                if(balance != 0)
                {
                    System.out.println("Now your Balance is " + balance);
                }
            }
        }
    }

}


