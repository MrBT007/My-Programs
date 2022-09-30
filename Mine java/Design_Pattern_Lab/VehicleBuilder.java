package LabProject.Design_Pattern_Lab;

public class VehicleBuilder
{
    private int Mileage,gears,seats;
    private String model;

    public VehicleBuilder setModel(String model) {
        this.model = model;
        return this;
    }

    public VehicleBuilder setMileage(int mileage) {
        Mileage = mileage;
        return this;
    }

    public VehicleBuilder setGears(int gears) {
        this.gears = gears;
        return this;
    }

    public void setSeats(int seats) {
        this.seats = seats;
    }

    @Override
    public String toString() {
        return "Vehicle { " +
                "Mileage=" + Mileage +
                ", gears=" + gears +
                ", seats=" + seats +
                ", model='" + model + '\'' +
                " }";
    }
}
