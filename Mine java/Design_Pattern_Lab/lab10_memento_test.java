package LabProject.Design_Pattern_Lab;

public class lab10_memento_test {
    public static void main(String[] args) {
        lab10_originator originator = new lab10_originator(); // creates a state
        lab10_caretaker caretaker = new lab10_caretaker(); // holds state of originator

        originator.setState("Order Placed");
        caretaker.add(originator.saveStateToMemento());

        System.out.println("Current State of Order : " + originator.getState());

        originator.setState("Shipped");
        caretaker.add(originator.saveStateToMemento());

        System.out.println("Current State of Order : " + originator.getState());

        originator.setState("Out for delivery");
        caretaker.add(originator.saveStateToMemento());

        System.out.println("Current State of Order : " + originator.getState());

        originator.setState("Arriving Sunday");
        originator.setState("Arrived");
        caretaker.add(originator.saveStateToMemento());

        System.out.println("Current State of Order : " + originator.getState());
        System.out.println();

        originator.getStateFromMemento(caretaker.get(0)); // change the state back
        System.out.println("First saved state is " + originator.getState());
        originator.getStateFromMemento(caretaker.get(1));
        System.out.println("Second saved state is " + originator.getState());
    }
}
