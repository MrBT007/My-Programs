package LabProject.Practical_List_3;

import java.io.FileInputStream;
import java.io.FileOutputStream;

public class Prog_4 {

    public static void main(String[] args) {
        try {
            FileOutputStream outputStream = new FileOutputStream("one.txt");
            String data = "Name : Bhut Tushar, Branch : CSE";
            byte [] dataInByte = data.getBytes();
            outputStream.write(dataInByte);
            outputStream.close();
            System.out.println("Data Written Successfully in File");
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
        System.out.println("Data Reading ....");
        try {
            FileInputStream inputStream = new FileInputStream("one.txt");
            int i = 0;
            while ((i = inputStream.read()) != -1) {
                System.out.print((char) i);
            }
            inputStream.close();
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}  