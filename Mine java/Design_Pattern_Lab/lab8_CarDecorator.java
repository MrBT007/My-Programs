package LabProject.Design_Pattern_Lab;

public class lab8_CarDecorator implements lab8_Car
{
    protected lab8_Car car;
    public lab8_CarDecorator(lab8_Car c)
    {
        this.car = c;
    }
    @Override
    public void assemble()
    {
        this.car.assemble();
    }
}
