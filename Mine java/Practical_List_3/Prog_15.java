package LabProject.Practical_List_3;
import java.io.File;
import java.io.FileNotFoundException;
import java.io.FileReader;
import java.util.Scanner;

public class Prog_15 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter path of file 1");
        String fName1 = sc.nextLine();
        System.out.println("Enter path of file 2");
        String fName2 = sc.nextLine();
        t1 obj = new t1(fName1);
        t2 obj2 = new t2(fName2);
        File f1 = new File(fName1);
        File f2 = new File(fName2);
        long l1 = f1.length();
        long l2 = f2.length();

        if(l1>l2){
            obj.setPriority(Thread.MAX_PRIORITY);
            obj2.setPriority(Thread.MIN_PRIORITY);
        }else{
            obj2.setPriority(Thread.MAX_PRIORITY);
            obj.setPriority(Thread.MIN_PRIORITY);
        }
        obj.start();
        obj2.start();
    }
}

class t1 extends Thread{
    String fName;
    t1(String fileName){
        this.fName=fileName;
    }
    @Override
    public void run() {
        try {
            FileReader fr = new FileReader(fName);
            int x;
            while((x=fr.read())!=-1){
                System.out.print((char)x);

            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}

class t2 extends  Thread{
    String fName;
    t2(String fileName){
        this.fName=fileName;
    }
    @Override
    public void run() {
        try {
            FileReader fr = new FileReader(fName);
            int x;
            while((x=fr.read())!=-1){
                System.out.print((char)x);
            }
        } catch (Exception e) {
            e.printStackTrace();
        }
    }
}