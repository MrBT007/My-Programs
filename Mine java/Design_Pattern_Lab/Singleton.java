package LabProject.Design_Pattern_Lab;

public class Singleton {

    private static Singleton soleInstance = new Singleton();
    public int num;

    private Singleton() {
        System.out.println("~~~ Created ~~~");
    }

    public static Singleton getSoleInstance() {
        return soleInstance;
    }

    public static void setSoleInstance(Singleton soleInstance) {
        Singleton.soleInstance = soleInstance;
    }

    public int getData() {
        return num;
    }

    public void setData(int num) {
        this.num = num;
    }
}
