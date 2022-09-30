package LabProject.Unit_2;

class LordVishnu{
    public
    String main = "Lord Vishnu";
}

class Mahesh{
    public
    String main = "Lord Shiva is also called as Mahesh";
}

class Krishna extends LordVishnu{
    public
    String avtaar = "Krishna is Avtaar of Vishnu";
}
class Balram extends Krishna{
    public
    String s = "Balram is elder brother of Krishna";
}

class Hanuman extends Mahesh{
    public
    String avtaar = "Hanuman is Avtaar of Shiva";
}

class Ram extends LordVishnu{
    public
    String avtaar = "Lord Ram is Avtaar of Vishnu";
}

public class Prog_9
{
    public static void main(String[] args) {
        LordVishnu clg = new LordVishnu();
        System.out.println(clg.main);
        System.out.println();

        Krishna krishna = new Krishna();
        System.out.println(krishna.avtaar);
        System.out.println(krishna.main);
        System.out.println();

        Ram ram = new Ram();
        System.out.println(ram.avtaar);
        System.out.println(ram.main);
        System.out.println();

        Balram balram = new Balram();
        System.out.println(balram.s);
        System.out.println(balram.main);
        System.out.println();

        Hanuman hanuman = new Hanuman();
        System.out.println(hanuman.avtaar);
        System.out.println(hanuman.main);

    }
}
