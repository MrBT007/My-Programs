package LabProject.Practical_List_3;

import java.io.File;
import java.io.FileReader;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;

public class Prog_6 {
    public static void main(String[] args) throws IOException {
        File file = new File("E:\\My programs\\Mine java\\Practical_List_3\\data.txt");
        Scanner cin = new Scanner(System.in);

        if (file.createNewFile()) {
            System.out.println("File is Created");
        }

        try {
            System.out.println("Press 0 for Write , 1 for Read");
            int choice = cin.nextInt();

            switch (choice) {
                case 0 -> {
                    System.out.println("Enter the data :");
                    String temp = cin.nextLine();
                    String data = cin.nextLine();

                    FileWriter writer = new FileWriter(file , true);
                    writer.write(data+"\n");
                    writer.close();
                }

                case 1 -> {
                    FileReader reader = new FileReader(file);
                    int i;
                    System.out.println("Data is : ");
                    while ((i = reader.read()) != -1)
                        System.out.print((char) i);
                    reader.close();
                }
            }
        } catch (IOException e) {
            e.printStackTrace();
        }
    }
}
