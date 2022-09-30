package LabProject.Design_Pattern_Lab;

public interface lab13_subject
{
    void subscribe(lab13_subscriber subscriber);
    void unsubscribe(lab13_observer subcriber);
    void notifySubscriber();
    void upload(String title);
}
