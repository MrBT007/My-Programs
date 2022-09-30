package LabProject.Unit_2;

class DataTypes
{
    private int password;
    public int followers;
    final int balance = 100;

    DataTypes(int followers)
    {
        this.followers = followers;
//        balance = 105; can't assign it because it is final
    }

}
class changeIt
{
    String s ;
    changeIt(String s)
    {
        this.s = s;
    }
}

public class Prog_5 {
    static void change(String s)
    {
        s ="Changing Gangadhar to Shaktiman";
    }
    static void changing(changeIt changer)
    {
        changer.s = "Changed Gangadhar to Shaktiman by using Reference call";
    }
    public static void main(String[] args)
    {

        DataTypes dataTypes = new DataTypes(2400);
        dataTypes.followers = 2500;
//        dataTypes.password = 15; password is private so we can't change it

        String str = "Gangadhar";
        System.out.println(str);
        change(str);
        System.out.println("After passing by value");
        System.out.println(str);
        System.out.println();

        changeIt string = new changeIt("Use call by reference");
        System.out.println(string.s);
        changing(string);
        System.out.println(string.s);
    }
}