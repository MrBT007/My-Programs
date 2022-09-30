package LabProject.Design_Pattern_Lab;

public class lab11_iterator_test {
    public static void main(String[] args) {
        lab11_stations stations = new lab11_stations();

        for (lab11_iterator it = stations.getIterator(); it.hasNext(); ) {
            String st = (String) it.next();
            System.out.println("Radio Station : " + st);
        }
    }
}
