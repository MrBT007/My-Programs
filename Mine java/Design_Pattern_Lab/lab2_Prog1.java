package LabProject.Design_Pattern_Lab;

public class lab2_Prog1
{
    public static void main(String[] args)
    {
        PhoneBuilder p = new PhoneBuilder()
                .setBattery(6000)
                .setProcessor("Qualcomm")
                .setOs("Android")
                .setScreenSize(6.6)
                .setRam(6);

        System.out.println(p);
    }
}
