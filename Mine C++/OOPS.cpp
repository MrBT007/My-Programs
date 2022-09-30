// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

class student
{
    // By default all atributes are private .. we only can access it in class not else
    string name; // this is private attribute
public:          // where we write public after all atributes got public .. we can access it from any whare
    int age;
    bool gender; // 1 => male , 0 => female

    void setName(string s) // private attribute ne aa rite input lai sakay
    {
        name = s;
    }

    student(string s, int a, int g)
    {
        cout << "Parameterised Structure"
             << "\n";
        name = s;
        age = a;
        gender = g;
    }

    student()
    {
        cout << "Default Constructor"
             << "\n";
    }

    student(student &a)
    {
        cout << "Copy constructor\n";
        name = a.name;
        age = a.age;
        gender = a.gender;
    }

    ~student() // Destructor
    {
        cout << "DESTROYED CLASS\n";
    }
    // aa destructor 3 time call thayo because aapne 'a' ,'b' , 'c'  3 objects banavya hata

    // operator overloading..
    bool operator==(student &a)
    {
        if (name == a.name && age == a.age && gender == a.gender) // ahiya name == a.name ma name che te operand je operate thaay tenu che
        {
            return true;
        }
        return false;
    }

    void printInfo()
    {
        cout << "Name = " << name << "\n";
        cout << "Age = " << age << "\n";
        cout << "Gender = " << gender << "\n";
    }
};

int main()

{
    FASTIO
    // student arr[3];
    // for (int i = 0; i < 3; i++)
    // {
    // string s;
    // cout<<"Name = ";
    // // cin>>arr[i].name; in this it shows error because name attribute defined as private
    // cin>>s;
    // arr[i].setName(s); // private attribute ne aa rite input lai sakay
    // cout<<"Age = ";
    // cin>>arr[i].age;
    // cout<<"Gender = ";
    // cin>>arr[i].gender;
    // }
    cout << "\n";

    // for (int i = 0; i < 3; i++)
    // {
    //     arr[i].printInfo();
    // }

    student a("Vishal", 20, 1);
    a.printInfo();

    cout << "\n";
    cout << "For student b (empty)\n";
    student b("Vinay", 20, 1); // jo tenu koi default structure no banava ma aave to te error throw karse

    cout << "\n";
    cout << "For student c (copy constructor)\n";
    // student c(a); also we can write this way
    student c = a; // a na darek value c ma copy thai che
    c.printInfo();

    /*
        Defult copy constructor and copy constructor vacche difference

        Default copy constructor ma tena pointer to copy thay che pan te kaya location e point kare che te copy nathi thatu
        => aa prakar ni copy ne "SHALLOW COPY" kevay

        own made Copy constructor ma pointer and te kaya location par point kare che bev copy thaay che 
        => aa prakar ni copy ne "DEEP COPY" kevay

        => etla mate aapne potanu copy constructor banavu joie   
    */

    // Operator Overloading

    if (c == a) // ahiya jya sudhi operator overload na karyo hoy tya sudhi error aavse
    {
        cout << "Same\n";
    }
    else
    {
        cout << "Not Same\n";
    }

    return 0;
} //Destructor ahiya call thaay .. means jyare program puro thaay tyare badha variable destroy thaay tyare call thay

/*

Encapsulation : teno matlab ke koi data jene user ne batavani koi jaroorat nathi tene user thi hide karvama aave

            Class

Data Members        Member Function

=> We can access both form claa , inherited class and outside oof class by access modifiers

            Access Modifiers

Public                  Private                     Protected

access from       only access from             access from class and inherited  
anywhere          class                        class (child class)

Advantage of encapsulation : increased Security of data


*/