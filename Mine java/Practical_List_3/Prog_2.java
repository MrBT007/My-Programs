package LabProject.Practical_List_3;

import java.io.*;
import java.util.Scanner;

public class Prog_2 {
    public static void main(String[] args) {
        File source = new File("E:\\My programs\\Mine java\\Practical_List_3\\file.txt");
        File target = new File("E:\\My programs\\Mine java\\Practical_List_3\\file2.txt");
        try{
            FileReader reader = new FileReader(source);
            FileWriter writer = new FileWriter(target);
            String data = "";
            Scanner fileReader = new Scanner(reader);
            while(fileReader.hasNextLine())
            {
                data = fileReader.nextLine().toUpperCase();
            }
            writer.write(data);
            writer.close();
            System.out.println(data);

        }catch(IOException e){
            System.out.println("There was error occurred : " + e);
        }


    }
}
