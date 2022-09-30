package LabProject.Unit_2;

class Engineer
{
    void who_I_am()
    {
        System.out.println("I am an Enginner");
    }
    void what_I_do()
    {
        System.out.println("Developing world");
    }
}

class Software_Engineer extends Engineer
{
    @Override
    void who_I_am() {
        System.out.println("I am a Software Engineer");
    }

    @Override
    void what_I_do() {
        System.out.println("I am making software Efficient");
    }
}

class Civil_Enginner extends Engineer
{
    @Override
    void who_I_am() {
        System.out.println("I am a Civil Engineer");
    }

    @Override
    void what_I_do() {
        System.out.println("I am making Building,bridge etc");
    }
}

public class Prog_11 {
    public static void main(String[] args)
    {
        Engineer civil_enginner = new Software_Engineer();
        civil_enginner.who_I_am();
        civil_enginner.what_I_do();
    }
}