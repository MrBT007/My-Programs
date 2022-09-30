package LabProject.Design_Pattern_Lab;

import java.util.Scanner;

public class lab5_Abstract {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Hello There");
        System.out.println("Welcome to the Shop");
        System.out.println("Press 1 for Laptop\nPress 0 for Mobile");
        int factory = scanner.nextInt();
        if (factory == 1) {
            Device dell = FactoryGenerator.getFactory(FactoryType.LAPTOPFACTORY).getGadget(DeviceType.DELL);
            System.out.println(dell.getDetails());
            Device hp = FactoryGenerator.getFactory(FactoryType.LAPTOPFACTORY).getGadget(DeviceType.HP);
            System.out.println(hp.getDetails());
        } else if (factory == 0) {
            Device op = FactoryGenerator.getFactory(FactoryType.MOBILEFACTORY).getGadget(DeviceType.ONEPLUS);
            System.out.println(op.getDetails());
            Device nokia = FactoryGenerator.getFactory(FactoryType.MOBILEFACTORY).getGadget(DeviceType.NOKIA);
            System.out.println(nokia.getDetails());
        } else {
            System.out.println("Error !! Try again and press 0 or 1");
        }
    }

}
