package LabProject.Unit_2;

class MainClass
{
    void function()
    {
        System.out.println("This is main function");
    }
}

class C2 extends MainClass
{
    @Override
    void function()
    {
        System.out.println("Overriding in same program");
    }
}

public class Prog_15
{
    public static void main(String[] args) {
        MainClass mainClass = new MainClass();
        mainClass.function();
        C2 c2 = new C2();
        c2.function();
    }
}
