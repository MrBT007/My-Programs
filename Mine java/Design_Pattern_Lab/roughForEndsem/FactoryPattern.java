package LabProject.Design_Pattern_Lab.roughForEndsem;

import java.util.ArrayList;
import java.util.List;
import java.util.Scanner;

public class FactoryPattern
{
    public static void main(String[] args) throws CloneNotSupportedException {
//        System.out.println("Enter Your choice between 1-3");
        Scanner cin = new Scanner(System.in);
//        int choice = cin.nextInt();
//        if(choice > 3 || choice < 0)
//            System.out.println("You have entered wrong number");
//        else
//        {
//            OsFActory_rough osFActoryRough = new OsFActory_rough();
//            OS os = osFActoryRough.getInstance(choice);
//            os.spec();
//        }

//        phonebuilder phone = new phonebuilder();
//        phone.setBattery(6000);
//        phone.setOs("Android");
//        phone.setProcessor("Snapdragon 6969");
//        phone.setRam(64);
//        phone.setRom(1024);
//        phone.setScreensize(6.6);
//
//        System.out.println(phone);


//        prototype_employee e = new prototype_employee();
//        e.addlocalData();
//
//        prototype_employee e1 = (prototype_employee) e.clone();
//        prototype_employee e2 = (prototype_employee) e.clone();
//
//        List<String> list1 = e1.getList();
//        list1.add("Sahil");
//        List<String> list2 = e2.getList();
//        list2.remove("Dhruvil");
//
//        System.out.println("Original List : "+e.getList());
//        System.out.println("E1 List : "+list1);
//        System.out.println("E2 List : "+list2);

//        SingletonTest obj = SingletonTest.getInstance();
//        SingletonTest obj2 = SingletonTest.getInstance();
//
//        System.out.println("obj's Address is : "+obj.hashCode());
//        System.out.println("obj2's Address is : "+obj2.hashCode());

//        System.out.println("Enter 0 for Laptop");
//        System.out.println("Enter 1 for Mobile");
//         int choice = cin.nextInt();
//         if(choice == 0)
//         {
//            devicerough dell = factorygenerator.getGadget(Factorytype.LAPTOPFACTORY).getGadget(Devicetype.DELL);
//            devicerough hp = factorygenerator.getGadget(Factorytype.LAPTOPFACTORY).getGadget(Devicetype.HP);
//             System.out.println(dell);
//             System.out.println(hp);
//         }
//         else if(choice == 1)
//         {
//             devicerough samsung = factorygenerator.getGadget(Factorytype.MOBILEFACTORY).getGadget(Devicetype.SAMSUNG);
//             devicerough oneplus = factorygenerator.getGadget(Factorytype.MOBILEFACTORY).getGadget(Devicetype.ONEPLUS);
//             System.out.println(samsung);
//             System.out.println(oneplus);
//         }
//         else System.out.println("Wrong Input!!");

//            component keyboard = new leaf("Keyboard",800);
//            component mouse = new leaf("Mouse",400);
//            component speaker = new leaf("Speaker",1000);
//            component monitor = new leaf("Monitor",15000);
//            component cpu = new leaf("cpu",10000);
//            component harddrive = new leaf("Hard drive",3000);
//            component ram = new leaf("RAM",6000);
//
//            composite peripheral = new composite("Peripheral");
//            composite motherboard = new composite("Motherboard");
//            composite cabinet = new composite("Cabinet");
//            composite computer = new composite("Computer");
//
//            peripheral.addComponent(keyboard);
//            peripheral.addComponent(monitor);
//            peripheral.addComponent(mouse);
//            peripheral.addComponent(speaker);
//
//            motherboard.addComponent(cpu);
//            motherboard.addComponent(ram);
//
//            cabinet.addComponent(harddrive);
//            cabinet.addComponent(motherboard);
//
//            computer.addComponent(cabinet);
//            computer.addComponent(peripheral);
//
//            computer.showPrice();

//        car sportscar = new sportscar(new basiccar());
//        sportscar.assemble();
//        System.out.println("--------------------");
//        car sportsluxurycar = new sportscar(new luxurycar(new basiccar()));
//        sportsluxurycar.assemble();

        context context = new context();

        startstate startstate = new startstate();
        startstate.doAction(context);
        System.out.println(startstate.toString());

        stopstate stopstate = new stopstate();
        stopstate.doAction(context);
        System.out.println(startstate.toString());
    }
}

class OsFActory_rough
{
    OS getInstance(int choice)
    {
        if(choice == 1)
            return new Android();
        else if(choice == 2)
            return new iOS();
        return new windows();
    }
}

interface OS
{
    void spec();
}

class Android implements OS{

    @Override
    public void spec() {
        System.out.println("You have selected Android");
    }
}

class iOS implements OS{

    @Override
    public void spec() {
        System.out.println("You have selected iOS");
    }
}

class windows implements OS{

    @Override
    public void spec() {
        System.out.println("You have selected Windows");
    }
}

class phonebuilder
{
    private String os, processor;
    private Double screensize;
    private int ram,rom,battery;

    public void setBattery(int battery) {
        this.battery = battery;
    }

    public void setOs(String os) {
        this.os = os;
    }

    public void setProcessor(String processor) {
        this.processor = processor;
    }

    public void setRam(int ram) {
        this.ram = ram;
    }

    public void setRom(int rom) {
        this.rom = rom;
    }

    public void setScreensize(Double screensize) {
        this.screensize = screensize;
    }

    @Override
    public String toString() {
        return "Phone{" +
                "os='" + os + '\'' +
                ", processor='" + processor + '\'' +
                ", screensize=" + screensize +
                ", ram=" + ram +
                ", rom=" + rom +
                ", battery=" + battery +
                '}';
    }
}

class prototype_employee implements Cloneable
{
    List<String> employee;

    public prototype_employee(List<String> temp)
    {
        this.employee = temp;
    }
    public prototype_employee()
    {
        employee = new ArrayList<String>();
    }
    public void addlocalData()
    {
        employee.add("Devesh");
        employee.add("Arpit");
        employee.add("Harsh");
        employee.add("Dhruvil");
        employee.add("Dhruv");
        employee.add("Meet");
        employee.add("Tushar");
    }

    @Override
    protected Object clone() throws CloneNotSupportedException {
        List<String> temp = new ArrayList<String>();
        for(String s:this.getList())
            temp.add(s);

        return new prototype_employee(temp);
    }

    public List<String> getList() {
        return this.employee;
    }
}

class SingletonTest
{
    private SingletonTest(){}

    static SingletonTest obj = new SingletonTest();

    public static SingletonTest getInstance()
    {
        return obj;
    }
}

abstract class devicerough
{
    public abstract String getDetails();
}

class factorygenerator
{
    public static abstractfactory getGadget(Factorytype factorytype)
    {
        switch (factorytype)
        {
            case MOBILEFACTORY:
                return new Mobilefactory();
            case LAPTOPFACTORY:
                return new laptopfactory();
        }
        return null;
    }
}

class abstractfactory
{
    devicerough getGadget(Devicetype devicetype)
    {
        return null;
    }

    public devicerough getGadget()
    {
        return null;
    }
}

enum Factorytype
{
    LAPTOPFACTORY,MOBILEFACTORY
}

enum Devicetype
{
    DELL,HP,SAMSUNG,ONEPLUS
}

class Mobilefactory extends abstractfactory
{
    @Override
    devicerough getGadget(Devicetype devicetype) {
        switch (devicetype)
        {
            case SAMSUNG:
                return new samsung("8GB","Snapdragon 666","64GB");
            case ONEPLUS:
                return new oneplus("12GB","Snapdragon 777","128GB");
        }
        return null;
    }
}

class samsung extends devicerough
{
    String ram,processor,memory;
    public samsung(String s, String s1, String s2)
    {
        this.ram = s;
        this.processor = s1;
        this.memory = s2;
    }

    @Override
    public String getDetails() {
        return null;
    }

    @Override
    public String toString() {
        return "samsung{" +
                "ram='" + ram + '\'' +
                ", processor='" + processor + '\'' +
                ", memory='" + memory + '\'' +
                '}';
    }
}

class oneplus extends devicerough
{
    String ram,processor,memory;
    public oneplus(String s, String s1, String s2)
    {
        this.ram = s;
        this.processor = s1;
        this.memory = s2;
    }

    @Override
    public String getDetails() {
        return null;
    }

    @Override
    public String toString() {
        return "oneplus{" +
                "ram='" + ram + '\'' +
                ", processor='" + processor + '\'' +
                ", memory='" + memory + '\'' +
                '}';
    }
}

class laptopfactory extends abstractfactory
{
    @Override
    devicerough getGadget(Devicetype devicetype) {
        switch (devicetype)
        {
            case DELL:
                return new dell("8GB","Intel","Nvidia");
            case HP:
                return new hp("8GB","AMD","GTX");
        }
        return null;
    }
}

class dell extends devicerough
{
    String ram,processor,gpu;
    public dell(String s, String intel, String nvidia)
    {
        this.ram = s;
        this.processor = intel;
        this.gpu = nvidia;
    }

    @Override
    public String getDetails() {
        return null;
    }

    @Override
    public String toString() {
        return "dell{" +
                "ram='" + ram + '\'' +
                ", processor='" + processor + '\'' +
                ", gpu='" + gpu + '\'' +
                '}';
    }
}

class hp extends devicerough
{
    String ram,processor,gpu;
    public hp(String s, String intel, String nvidia)
    {
        this.ram = s;
        this.processor = intel;
        this.gpu = nvidia;
    }

    @Override
    public String getDetails() {
        return null;
    }

    @Override
    public String toString() {
        return "hp{" +
                "ram='" + ram + '\'' +
                ", processor='" + processor + '\'' +
                ", gpu='" + gpu + '\'' +
                '}';
    }
}

interface component
{
    void showPrice();
    int returnPrice();
}

class leaf implements component
{
    String name;
    int price;
    public leaf(String name, int price)
    {
        this.name = name;
        this.price = price;
    }
    @Override
    public void showPrice()
    {
        System.out.println("Lead -> "+name+" :: Price "+price);
    }

    @Override
    public int returnPrice()
    {
        return this.price;
    }
}

class composite implements component
{
    String name;
    List<component> components = new ArrayList<component>();

    public composite(String name)
    {
        this.name = name;
    }

    public void addComponent(component component)
    {
        components.add(component);
    }
    @Override
    public void showPrice()
    {
        System.out.println("Composite -> "+name+":: price = "+returnPrice());
        for(component c:components)
        {
            c.showPrice();
        }
    }

    @Override
    public int returnPrice()
    {
        int total = 0;
        for(component c:components)
        {
            total += c.returnPrice();
        }
        return total;
    }
}

interface car
{
    public void assemble();
}

class sportscar extends cardecorator
{
    public sportscar(car car) {
        super(car);
    }

    @Override
    public void assemble() {
        super.assemble();
        System.out.println("Adding features of Sports car");
    }
}

class cardecorator implements car
{
    protected car car;

    public cardecorator(car car)
    {
        this.car = car;
    }
    @Override
    public void assemble() {
        this.car.assemble();
    }
}

class basiccar implements car
{
    @Override
    public void assemble() {
        System.out.println("Basic Car");
    }
}

class luxurycar extends cardecorator
{

    public luxurycar(car car) {
        super(car);
    }

    @Override
    public void assemble() {
        super.assemble();
        System.out.println("Adding features of Luxury car");
    }
}
class context
{
    private state state;
    public context()
    {
        state = null;
    }

    public state getState() {
        return state;
    }

    public void setState(state state) {
        this.state = state;
    }
}
interface state
{
    public void doAction(context context);
}
class startstate implements state
{
    @Override
    public void doAction(context context) {
        System.out.println("You are in Start State");
        context.setState(this);
    }

    @Override
    public String toString() {
        return "Start State";
    }
}
class stopstate implements state
{
    @Override
    public void doAction(context context) {
        System.out.println("You are in Stop State");
        context.setState(this);
    }

    @Override
    public String toString() {
        return "Stop State";
    }
}