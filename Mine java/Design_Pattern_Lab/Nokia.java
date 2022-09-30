package LabProject.Design_Pattern_Lab;

public class Nokia extends Device
{
    private String ram; private String processor; private String storage;

    public Nokia(String ramsize,String processorType,String storage){ this.ram=ramsize;
        this.processor=processorType; this.storage=storage;
    }
    public String getDetails()
    {
        return "Nokia config is ram size: "+this.ram+" and processor type: "+this.processor+" \nStorage type: "+this.storage+".";
    }
    public String toString()
    {
        return "Nokia("+"ram: "+ram+",Processor: "+processor+",Storage: "+storage+".";
    }

}
