package LabProject.Unit_2;

import java.util.Scanner;

class Distance2 {
    private double distance;
    private double feet;
    private double inches;

    public Distance2(double distance) {
        this.distance = distance;
        this.feet = distance * 3.281D;
        this.inches = distance * 39.37D;
    }

    public double getDistance()
    {
        return this.distance;
    }

    public double getFeet()
    {
        return this.feet;
    }

    public double getInches()
    {
        return this.inches;
    }
}

public class Prog_2 {

        public static void main(String[] args) {
            Scanner scanner = new Scanner(System.in);
            System.out.println(" Enter distance(m) : ");
            Double value = scanner.nextDouble();
            scanner.nextLine();
            Distance2 dist = new Distance2(value);
            System.out.println("Distance entered by user is " + dist.getDistance());
            System.out.println(value + " m in feet is " + dist.getFeet());
            System.out.println(value + " m in inches is " + dist.getInches());
        }
    }
