package LabProject.Design_Pattern_Lab;

public class OnePlus extends Device {
    private String ram;
    private String processor; private String storage;

    public OnePlus(String ramsize,String processorType,String storage){ this.ram=ramsize;
        this.processor=processorType; this.storage=storage;
    }
    public String getDetails()
    {
        return "OnePlus config is ram size: "+this.ram+"\nand Processor type: "+this.processor+" \nStorage type: "+this.storage+".";
    }
    public String toString()
    {
        return "OnePlus("+"ram: "+ram+",Processor: "+processor+",Storage: "+storage+".";
    }

}
