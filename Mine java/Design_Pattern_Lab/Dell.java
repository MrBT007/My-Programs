package LabProject.Design_Pattern_Lab;

public class Dell extends Device {
    private String ram;
    private String processor;
    private String gpu;

    public Dell(String ramsize, String processorType, String gpuType) {
        this.ram = ramsize;
        this.processor = processorType;
        this.gpu = gpuType;
    }

    public String getDetails() {
        return "Dell config is ram size: " + this.ram + " \nand processor type: " + this.processor + " \nGpu type: " + this.gpu + ".\n";
    }

    public String toString() {
        return "Dell(" + "ram: " + ram + ",Processor: " + processor + ",Gpu: " + gpu + ".\n";

    }
}