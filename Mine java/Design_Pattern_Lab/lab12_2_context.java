package LabProject.Design_Pattern_Lab;

public class lab12_2_context
{
    private lab12_2_state state;

    public lab12_2_context()
    {
        state = null;
    }

    public void setState(lab12_2_state state) {
        this.state = state;
    }

    public lab12_2_state getState() {
        return state;
    }
}
