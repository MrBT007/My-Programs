package LabProject.Unit_2;

class OtherClass extends MainClass
{
    @Override
    void function()
    {
        System.out.println("Function from another package");
    }
}
public class Prog_15_2
{
    public static void main(String[] args) {
        OtherClass otherClass = new OtherClass();
        otherClass.function();
    }
}
