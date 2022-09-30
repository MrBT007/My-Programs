package LabProject.Unit_2;

class vishnu
{
    String avtaar;
    int avtaarNo;
    String Killed;

    vishnu(String avtaar,int avtaarNo)
    {
        this.avtaar = avtaar;
        this.avtaarNo = avtaarNo;
    }

    vishnu(String avtaar,int avtaarNo,String Killed)
    {
        this.avtaar = avtaar;
        this.avtaarNo = avtaarNo;
        this.Killed = Killed;
    }
    vishnu(vishnu object)
    {
        avtaar = object.avtaar;
        avtaarNo = object.avtaarNo;
        Killed = object.Killed;
    }

}

public class prog_4 {
    public static void main(String[] args)
    {
        vishnu vaman = new vishnu("Vaman",5);
        System.out.println("Vishnu's "+vaman.avtaarNo+"th Avtaar is "+vaman.avtaar);

        System.out.println();
        vishnu Narsimha = new vishnu("Narsimha",4,"Hiranyakashipu");
        System.out.println("Vishnu's "+Narsimha.avtaarNo+"th Avtaar is "+Narsimha.avtaar);
        System.out.println(Narsimha.avtaar+" killed "+Narsimha.Killed);
        System.out.println();

        vishnu Kurma = new vishnu("Kurma",2);
        vishnu kurma = new vishnu(Kurma);
        System.out.println("Vishnu's "+kurma.avtaarNo+"nd Avtaar is "+kurma.avtaar);

    }
}