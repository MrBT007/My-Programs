package LabProject.Practical_List_3;

class user extends Thread {
    @Override
    public void run() {
        int i = 0;
        while(i!=10){
        System.out.println("Creating user");
            i++;
        }
    }
}

class thread extends Thread {
    @Override
    public void run() {
        int i = 0;
        while(i!=10){
            System.out.println("Thread without priority");
            i++;
        }
    }
}

class background extends Thread {
    @Override
    public void run() {
        System.out.println("Serving data to user ..");
    }
}

public class Prog_14 {
    public static void main(String[] args) {
        user user  = new user();
        background data = new background();
        thread t = new thread();

        user.setPriority(Thread.MAX_PRIORITY);
        data.setPriority(Thread.MIN_PRIORITY);

        user.start();
        data.start();
        t.start();
    }
}
