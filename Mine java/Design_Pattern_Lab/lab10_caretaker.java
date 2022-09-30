package LabProject.Design_Pattern_Lab;

import java.util.ArrayList;

public class lab10_caretaker {
    private ArrayList<lab10_memento> mementoList = new ArrayList<lab10_memento>();

    public void add(lab10_memento mementoState) {
        mementoList.add(mementoState);
    }

    public lab10_memento get(int idx) {
        return mementoList.get(idx);
    }
}
