package LabProject.Design_Pattern_Lab;

public class Hp extends Device
{
    private String ram;
    private String processor; private String gpu;

    public Hp(String ramsize, String processorType, String gpuType) { this.ram = ramsize;
        this.processor = processorType; this.gpu = gpuType;
    }

    public String getDetails() {
        return "HP config is ram size: " + this.ram + "\nand processor type: " + this.processor + " \nGpu type: " + this.gpu + ".\n";
    }

    public String toString() {
        return "HP (" + "ram: " + ram + ",Processor: " + processor + ",Gpu: " + gpu
                + ".\n";
    }

}
