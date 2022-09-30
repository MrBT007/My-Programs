package LabProject.Design_Pattern_Lab;

public class lab13_subscriber implements lab13_observer{

    private String name;
    private lab13_channel channel = new lab13_channel();

    lab13_subscriber(String name)
    {
        this.name = name;
    }
    @Override
    public void update() {
        System.out.println(name+" uploaded video on "+channel.videoTitle);
    }

    @Override
    public void subscriChannel(lab13_channel ch) {
        channel = ch;
    }
}
