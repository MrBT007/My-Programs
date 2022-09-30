package LabProject.Design_Pattern_Lab;

public class lab13_Observer_test {
    public static void main(String[] args)
    {
        lab13_channel channel = new lab13_channel();
        lab13_subscriber sub1 = new lab13_subscriber("Rocky");
        lab13_subscriber sub2 = new lab13_subscriber("Pushpa");
        lab13_subscriber sub3 = new lab13_subscriber("Adheera");
        lab13_subscriber sub4 = new lab13_subscriber("Strange");
        lab13_subscriber sub5 = new lab13_subscriber("Tushar");

        channel.subscribe(sub1);
        channel.subscribe(sub2);
        channel.subscribe(sub3);
        channel.subscribe(sub4);
        channel.subscribe(sub5);

        channel.unsubscribe(sub3);

        sub1.subscriChannel(channel);
        sub2.subscriChannel(channel);
        sub3.subscriChannel(channel);
        sub4.subscriChannel(channel);
        sub5.subscriChannel(channel);

        channel.upload("How South Indian Cinema is growing");

    }
}
