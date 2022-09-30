package LabProject.Design_Pattern_Lab;

public class OSFactory
{

    public Os getInstance(int choice)
    {
        if(choice == 1) return new IOS();
        else if(choice == 2) return new Android();
        else if(choice == 4) return new BlackBerry();
        else return new Windows();
    }
}
