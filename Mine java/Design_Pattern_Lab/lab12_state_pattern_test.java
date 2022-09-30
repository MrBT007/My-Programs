package LabProject.Design_Pattern_Lab;

public class lab12_state_pattern_test
{
    public static void main(String[] args) {

        lab12_context context = new lab12_context();
        System.out.print("By default ");
        context.getState().alert();

        context.setState(new lab12_vibrate());
        context.getState().alert();

        context.setState(new lab12_silent());
        context.getState().alert();

        context.setState(new lab12_ringing());
        context.getState().alert();
    }
}
