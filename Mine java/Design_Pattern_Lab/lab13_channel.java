package LabProject.Design_Pattern_Lab;

import java.util.ArrayList;
import java.util.List;

public class lab13_channel implements lab13_subject {
    private List<lab13_subscriber> subscribers = new ArrayList<>();
    public String videoTitle;
    @Override
    public void subscribe(lab13_subscriber subscriber) {
        subscribers.add(subscriber);
    }

    @Override
    public void unsubscribe(lab13_observer subscriber) {
    subscribers.remove(subscriber);
    }

    @Override
    public void notifySubscriber() {
        for (lab13_observer sub:subscribers)
        {
            sub.update();
        }
    }

    @Override
    public void upload(String title) {
        this.videoTitle = title;
        notifySubscriber();
    }
}
