package LabProject.Design_Pattern_Lab;

import java.util.*;

interface Component {
    void showPrice();

    int returnPrice();
}

class leaf implements Component {
    int price;
    String name;

    public leaf(String name,int price) {
        this.name = name;
        this.price = price;
    }

    @Override
    public void showPrice() {
        System.out.println("Leaf -> " + name + " :: " + price);
    }

    @Override
    public int returnPrice() {
        return this.price;
    }

}

class composite implements Component {

    String name;
    List<Component> components = new ArrayList();

    public composite(String name) {
        this.name = name;
    }

    public void addComponent(Component component) {
        components.add(component);
    }

    @Override
    public void showPrice() {
        System.out.println("Composite -> " + name + " :: " + returnPrice());
        for (Component c : components) {
            c.showPrice();
        }
    }

    @Override
    public int returnPrice() {
        int total = 0;
        for (Component c : components) {
            total += c.returnPrice();
        }
        return total;
    }

}

public class computerParts {
}
