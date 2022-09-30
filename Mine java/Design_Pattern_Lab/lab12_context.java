package LabProject.Design_Pattern_Lab;

public class lab12_context
{
    private lab_12_mobileState state;
    lab12_context()
    {
        state = new lab12_ringing();
    }

    public void setState(lab_12_mobileState state) {
        this.state = state;
    }

    public lab_12_mobileState getState() {
        return state;
    }
}
