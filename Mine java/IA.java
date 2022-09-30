/*
Name : Bhut Tushar
Roll No : 20BCP023
*/
package LabProject;
import java.io.*;
import java.util.Scanner;

class NotAlphabetException extends Exception {
    @Override
    public String toString() {
        return "Character is not an alphabet in content";
    }
}

public class IA{
    static boolean isAlphabet(String name) {
        char[] charArr = name.toCharArray();
        for (char ch : charArr) {
            if (!Character.isLetter(ch) && ch != ' ') {
                return false;
            }
        }
        return true;
    }

    static void readFile(String fname) throws IOException {
        FileInputStream fileInput = new FileInputStream(fname);
        int i = 0;
        System.out.println("Write into File: ");
        while ((i = fileInput.read()) != -1) {
            if (i >= 97 && i <= 122) {
                i -= 32;
            }
            System.out.print((char) i);
        }
        System.out.println();
        fileInput.close();
    }

    static void writeIntoFile(String filename, String content) throws NotAlphabetException {
        try {
            File newFile = new File(filename);
            newFile.createNewFile();
            if (!isAlphabet(content)) {
                throw new NotAlphabetException();
            }
            FileOutputStream fout = new FileOutputStream(filename);
            byte byt[]=content.getBytes();
            fout.write(byt);
            fout.close();
        } catch (IOException e) {
            File newFile = new File("AutoFile.txt");
            try {
                newFile.createNewFile();
                if (!isAlphabet(content)) {
                    throw new NotAlphabetException();
                }
                FileOutputStream fileout = new FileOutputStream(filename);
                byte byt[]=content.getBytes();
                fileout.write(byt);
                fileout.close();
            } catch (IOException e1) {
                System.out.println(e1);
            }
        }

    }

    public static void main(String[] args) {
        Scanner cin = new Scanner(System.in);
        System.out.println("Enter Your File name: ");
        String filename = cin.nextLine();
        try {
            readFile(filename);
        } catch (Exception e) {
            System.out.println(e);
        }

        System.out.println("Enter File Name in which want to Write: ");
        filename = cin.nextLine();
        System.out.println("Enter Content: ");
        String contents = cin.nextLine();
        try{
            writeIntoFile(filename, contents);
            System.out.println("Writing ...");
        }catch(Exception e){
            System.out.println(e);
        }
        cin.close();
    }
}