package LabProject.Practical_List_3;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;

public class Prog_1
{
    public static void main(String[] args)
    {
        int lines = 0;
        StringBuilder dataFromFile = new StringBuilder();
        try {
        File f = new File("E:\\My programs\\Mine java\\Practical_List_3\\file.txt");
            Scanner fileReading = new Scanner(f);
        while (fileReading.hasNextLine())
        {
            lines++;
            String temp = fileReading.nextLine() + " ";
            dataFromFile.append(temp);
        }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
        System.out.println(dataFromFile);
        System.out.println("There are "+ lines +" Lines");
        System.out.println("There are " + dataFromFile.length() + " characters");

        char [] arr = new char[dataFromFile.length()];
        int words = 0;
        for(int j=0;j<dataFromFile.length();j++)
        {
            arr[j]= dataFromFile.charAt(j);
            if(arr[j]==' ')
                words++;
        }
        System.out.println("There are " + words + " words");
    }
}
