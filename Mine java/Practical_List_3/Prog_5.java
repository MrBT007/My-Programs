package LabProject.Practical_List_3;

import java.io.BufferedWriter;
import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Arrays;
import java.util.Scanner;

public class Prog_5 {
    public static void main(String[] args) throws IOException {
        File file = new File("E:\\My programs\\Mine java\\Practical_List_3\\StudentDetails.txt");

        if (file.createNewFile()) {
            System.out.println("File is created");
        }

        String[] data = new String[3];
        Scanner cin = new Scanner(System.in);

        FileWriter writer = new FileWriter(file);
        BufferedWriter bufferedWriter = new BufferedWriter(writer);

        System.out.println("Student's Name :");
        data[0] = cin.nextLine();
        System.out.println("Student's Branch :");
        data[1] = cin.nextLine();
        System.out.println("Student's Roll No :");
        data[2] = cin.nextLine();

        bufferedWriter.write(Arrays.toString(data));
        bufferedWriter.newLine();
        bufferedWriter.close();
    }
}
