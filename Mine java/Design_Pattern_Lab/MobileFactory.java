package LabProject.Design_Pattern_Lab;

public class MobileFactory extends AbstractDeviceFactory {
    Device getGadget(DeviceType deviceType) {
        switch (deviceType) {
            case ONEPLUS:
                return new OnePlus("8gb", "Snapdragon 885", "64gb");
            case NOKIA:
                return new Nokia("12gb", "Mediatek Helio G65 ", "128Gb");
        }
        return null;
    }

    @Override
    public Device getGadget() {
        return null;
    }

}
