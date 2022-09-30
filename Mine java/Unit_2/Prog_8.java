package LabProject.Unit_2;

class  const1{
    String name;
    String college;
    String school;
    const1(String name , String college)
    {
        this.name = name;
        this.college = college;
    }
    const1(String name , String college , String school )
    {
        //calling the 2 parameterised constructor
        this("Nayan","Nirma");

        this.school = school;
    }
    void display()
    {
        System.out.println("Name: "+name);
        System.out.println("College: "+college);
        System.out.println("School: "+school);

        // for const2 school will be printed as null
    }
}

public class Prog_8
{
    public static void main(String[] args)
    {
        const1 c = new const1("Tushar" , "PDEU");
        c.display();
        c = new const1( "Nayan" , "Nirma" , "SOT");
        c.display();
    }
}
