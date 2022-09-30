package LabProject.Design_Pattern_Lab;

public class lab12_2_startState implements lab12_2_state{
    @Override
    public void doAction(lab12_2_context context) {
        System.out.println("Player is in Start State");
        context.setState(this);
    }

    @Override
    public String toString() {
        return "Start State";
    }
}
