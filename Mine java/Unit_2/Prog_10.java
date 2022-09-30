package LabProject.Unit_2;

class Movies
{
    String moviename;
    float collection;

    Movies(String moviename, float income)
    {
        this.moviename = moviename;
        this.collection = income;
    }
    void Income()
    {
        System.out.println("Income of "+this.moviename+" is "+this.collection);
    }
    void get_Info_About_This_Movie()
    {
        System.out.println("This function will give you Information of Movie");
    }
}

class MS_Dhoni extends Movies
{

    MS_Dhoni(String moviename, float income)
    {
        super(moviename, income);
    }

    @Override
    void get_Info_About_This_Movie()
    {
        System.out.println("Movie name is : "+this.moviename);
        System.out.println("Collection of "+this.moviename+" is : "+this.collection+" Cr");
    }
}

class Bahubali extends Movies
{

    Bahubali(String moviename, float income) {
        super(moviename, income);
    }

    @Override
    void get_Info_About_This_Movie() {
        System.out.println("Movie name is : "+this.moviename);
        System.out.println("Collection of "+this.moviename+" is : "+this.collection+" Cr");
    }
}

class Shershaah extends Movies
{

    Shershaah(String moviename, float income) {
        super(moviename, income);
    }

    @Override
    void get_Info_About_This_Movie() {
        System.out.println("Movie name is : "+this.moviename);
        System.out.println("Collection of "+this.moviename+" is : "+this.collection+" Cr");
    }
}

public class Prog_10 {
    public static void main(String[] args)
    {
        Bahubali bahubali = new Bahubali("Bahubali-the Begining",608.2f);
        bahubali.get_Info_About_This_Movie();
        System.out.println();
        MS_Dhoni ms_dhoni = new MS_Dhoni("MS Dhoni : The Untold Story",216f);
        ms_dhoni.get_Info_About_This_Movie();
    }
}