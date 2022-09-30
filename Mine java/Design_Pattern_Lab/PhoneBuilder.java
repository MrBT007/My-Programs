package LabProject.Design_Pattern_Lab;

public class PhoneBuilder
{
    private String os,processor;
    private Double screenSize;
    private int battery,ram;


    public PhoneBuilder setOs(String os) {
        this.os = os;
        return this;
    }

    public PhoneBuilder setProcessor(String processor) {
        this.processor = processor;
        return this;
    }

    public PhoneBuilder setScreenSize(Double screenSize) {
        this.screenSize = screenSize;
        return this;
    }

    public PhoneBuilder setBattery(int battery) {
        this.battery = battery;
        return this;
    }

    public PhoneBuilder setRam(int ram) {
        this.ram = ram;
        return this;
    }

    @Override
    public String toString() {
        return "PhoneBuilder { " +
                "os='" + os + '\'' +
                ", processor='" + processor + '\'' +
                ", screenSize=" + screenSize +
                ", battery=" + battery +
                ", ram=" + ram +
                " }";
    }
}
