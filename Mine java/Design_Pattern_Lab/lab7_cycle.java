package LabProject.Design_Pattern_Lab;

public class lab7_cycle implements lab7_vehicle
{
    private final String MAXSPEED;
    private  String color;

    lab7_cycle()
    {
        MAXSPEED = "15 km/hr";
    }

    @Override
    public void assignColour(String color)
    {
        switch (color)
        {
            case "Blue": this.color = "Blue";break;
            case "Black": this.color = "Black";break;
            case "Brown": this.color = "Brown";break;
            case "Green": this.color = "Green";break;
            case "Yellow": this.color = "Yellow";break;
            case "Red": this.color = "Red";break;
            default: throw new IllegalArgumentException("There is no color like "+
                    color +
                    " or else try to write first letter capital");
        }
    }

    @Override
    public void startEngine() {
        System.out.println(color+" coloured Cycle with max speed is : "+MAXSPEED);
    }
}
