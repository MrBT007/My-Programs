package LabProject.Design_Pattern_Lab;

public class lab10_originator {
    String state;

    public void setState(String state) {
        this.state = state;
    }

    public String getState() {
        return state;
    }

    public lab10_memento saveStateToMemento() {
        return new lab10_memento(state);
    }

    public void getStateFromMemento(lab10_memento memento) {
        state = memento.state;
    }
}
