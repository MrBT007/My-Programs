package LabProject.Design_Pattern_Lab;

public class lab11_stations implements lab11_container {

    public String stations[] = {"99.9", "104", "91.1", "78.3", "95.3", "93.2"};

    @Override
    public lab11_iterator getIterator() {
        return new stationName();
    }

    public class stationName implements lab11_iterator {
        int idx = 0;

        @Override
        public boolean hasNext() {
            return (idx < stations.length);
        }

        @Override
        public Object next() {
            if (this.hasNext()) return stations[idx++];
            return null;
        }
    }
}
