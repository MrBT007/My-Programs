    package LabProject.Unit_2;

    public class Prog_7
    {
        String changing = "Gangadhar";
        int n1 , n2;

        //Passing by value
        void change_pass_by_value(String s)
        {
            s = "SpiderMan";
        }

        //Passing by reference
        void change_pass_by_reference(Prog_7 s)
        {
            changing = "Shaktimaan";
        }

        void  setValue(int x , int y)
        {
            n1 = x;
            n2 = y;
        }
        int returning_Value()
        {
            return n1 + n2;
        }

        Prog_7 returningObject()
        {
            Prog_7 x = new Prog_7();
            x.setValue(23 , 16);
            return  x;
        }
        public static void main(String[] args) {

            Prog_7 P1 = new Prog_7();
            String name = "Peter";
            System.out.println("Before calling change " + name);
            P1.change_pass_by_value(name);
            System.out.println("after calling change " + name);

            Prog_7 P2 = new Prog_7();
            System.out.println("Before calling change " + P2.changing);
            P2.change_pass_by_reference(P2);
            System.out.println("after calling change " + P2.changing);

            Prog_7 P3 = new Prog_7();
            P3.setValue(11 , 22);
            System.out.println("Returning value " + P3.returning_Value());

            Prog_7 P4 = new Prog_7();
            P4 = P4.returningObject();
            System.out.println("Returning object value "+P4.returning_Value());
        }
    }


