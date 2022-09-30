package LabProject.Design_Pattern_Lab;

public class lab8_LuxuryCar extends lab8_CarDecorator
{
    public lab8_LuxuryCar(lab8_Car c) {
        super(c);
    }

    @Override
    public void assemble() {
        super.assemble();
        System.out.println("Adding Features of Luxury Car");
    }
}
