package LabProject.Design_Pattern_Lab;

import java.util.ArrayList;
import java.util.List;

public class Vehicle implements Cloneable
{
    private List<String> vehicleList;

    public Vehicle()
    {
        this.vehicleList = new ArrayList<String>();
    }
    public Vehicle(List<String>ls)
    {
        this.vehicleList = ls;
    }
    public void insertData()
    {
        vehicleList.add("Renault Kwid");
        vehicleList.add("Hyundai Venue");
        vehicleList.add("Hyundai i20");
        vehicleList.add("Suzuki Baleno");
        vehicleList.add("Suzuki Swift");
        vehicleList.add("Volkswagen Polo");
    }
    public void modify()
    {
        String m = (String)this.vehicleList.get(0);
        System.out.println(m);
    }
    public List<String> getVehicleList()
    {
        return this.vehicleList;
    }
    public Object clone() throws CloneNotSupportedException
    {
        List<String> temp = new ArrayList<String>();

        for(int i = 0;i<vehicleList.size();i++)
        {
            temp.add(vehicleList.get(i));
        }
        return new Vehicle(temp);
    }
}
