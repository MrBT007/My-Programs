package LabProject.Design_Pattern_Lab;

public class LaptopFactory extends AbstractDeviceFactory
{
    Device getGadget(DeviceType deviceType){
        switch(deviceType)
        {
            case HP:return new Hp("8gb","Intel","NVDIA");
            case DELL:return new Dell("12gb","AMD","NVDIA");
        }

        return null;
    }

    @Override
    public Device getGadget() { return null;
    }

}
