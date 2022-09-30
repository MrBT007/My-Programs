package LabProject.Unit_2;

interface i1
{
    public void functioni1();
}
interface i2
{
    public void functioni2();

}

class C implements i1,i2
{
    public void functioni1()
    {
        System.out.println("From Interface 1");
    }

    public void functioni2()
    {
        System.out.println("From Interface 2");
    }
}

public class Prog_14 {
    public static void main(String[] args)
    {
        C c = new C();
        c.functioni1();
        c.functioni2();
    }
}