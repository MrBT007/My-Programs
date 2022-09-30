package LabProject.Design_Pattern_Lab;

public class lab6_composite {
    public static void main(String[] args) {
        Component hardDrive = new leaf("HardDrive",3500);

        Component mouse = new leaf("Mouse",200);

        Component keyboard = new leaf("Key-Board",900);

        Component monitor = new leaf("Monitor",3500);

        Component ram = new leaf("RAM",7000);

        Component cpu = new leaf("CPU",10000);


        composite peripheral = new composite("Peripheral");
        composite cabinet = new composite("Cabinet");
        composite motherboard = new composite("Mother-Board");
        composite computer = new composite("Computer");

        motherboard.addComponent(cpu);
        motherboard.addComponent(ram);

        peripheral.addComponent(mouse);
        peripheral.addComponent(keyboard);
        peripheral.addComponent(monitor);

        cabinet.addComponent(hardDrive);
        cabinet.addComponent(motherboard);

        computer.addComponent(peripheral);
        computer.addComponent(cabinet);

        computer.showPrice();
//        motherboard.showPrice();
    }
}
