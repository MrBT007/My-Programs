package LabProject.Practical_List_3;

import java.io.*;
import java.util.Arrays;
import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Prog_3 {
    public static void main(String[] args) {
        File file = new File("E:\\My programs\\Mine java\\Practical_List_3\\file3.txt");
        Set<String> dataSet = new HashSet<String>();
        try {
            Scanner fileReader = new Scanner(file);
            while (fileReader.hasNextLine()) {
                String data = fileReader.nextLine();
                dataSet.add(data);
            }
            Arrays [] dataArr = new Arrays[dataSet.size()];
                try {
                    BufferedWriter fw = new BufferedWriter(new FileWriter(file));
                    for(String s :dataSet ) {
                        System.out.println(s);
                        fw.write(s +"\n");
                    }
                    fw.close();
                } catch (IOException e) {
                    e.printStackTrace();
                }
        } catch (FileNotFoundException e) {
            e.printStackTrace();
        }
    }
}
