package LabProject.Design_Pattern_Lab;

public class lab12_silent implements lab_12_mobileState{
    @Override
    public void alert() {
        System.out.println("Mobile is in Silent state");
    }
}
