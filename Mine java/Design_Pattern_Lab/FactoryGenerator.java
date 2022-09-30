package LabProject.Design_Pattern_Lab;

public abstract class FactoryGenerator {
    public static AbstractDeviceFactory getFactory(FactoryType ftype) {
        switch (ftype) {
            case LAPTOPFACTORY:
                return new LaptopFactory();
            case MOBILEFACTORY:
                return new MobileFactory();
        }
        return null;
    }
}
