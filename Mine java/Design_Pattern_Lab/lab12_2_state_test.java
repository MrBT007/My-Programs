package LabProject.Design_Pattern_Lab;

public class lab12_2_state_test
{
    public static void main(String[] args) {
        lab12_2_context context = new lab12_2_context();
//        context.getState().toString();

        lab12_2_startState startState = new lab12_2_startState();
        startState.doAction(context);
        System.out.println(context.getState().toString());

        lab12_2_stopState stopState = new lab12_2_stopState();
        stopState.doAction(context);
        System.out.println(context.getState().toString());
    }
}
