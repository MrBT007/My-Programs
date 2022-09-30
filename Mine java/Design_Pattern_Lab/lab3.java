package LabProject.Design_Pattern_Lab;

import java.util.List;

public class lab3 {
    public static void main(String[] args) throws CloneNotSupportedException {
        Vehicle i = new Vehicle();
        i.insertData();

        Vehicle j = (Vehicle) i.clone();
        List<String> list = j.getVehicleList();
        list.add("Renault Kwid");
        System.out.println(i.getVehicleList());

        j.getVehicleList().remove("Hyundai i20");
        System.out.println(list);
        System.out.println(i.getVehicleList());
        j.modify();
    }
}
