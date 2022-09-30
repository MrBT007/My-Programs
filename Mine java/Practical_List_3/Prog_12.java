package LabProject.Practical_List_3;

class threa1 extends Thread {
    @Override
    public void run() {
        System.out.println("This method will run, when we call start() method");
        System.out.println("Thread 1");
    }
}
class thread2 extends Thread {
    @Override
    public void run() {
        System.out.println("Thread 2");
        int i=0;
        while (i!=5)
        {
            System.out.println("The thread came from thread2");
            try {
                Thread.sleep(2000); // takes 2000 ms after each thread
            } catch (InterruptedException e) {
                e.printStackTrace();
            }
            i++;
        }
    }
}

public class Prog_12 {
    public static void main(String[] args) {
        threa1 t1 = new threa1();
        thread2 t2 = new thread2();

        t2.start();
        t1.start();

        t1.setName("Thread No : 1");

        System.out.println(t1.getName());
    }
}
