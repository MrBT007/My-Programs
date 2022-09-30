// // Name : Bhut Tushar

// #include <bits/stdc++.h>
// #define FASTIO
// using namespace std;

// // Function Overloading

// class A
// {
//     public:
//     void fun()
//     {
//         cout<<"This function has no attribute\n";
//     }
//     void fun(int x)
//     {
//         cout<<"This function has int attribute\n";
//     }
//     void fun(int x ,double y)
//     {
//         cout<<"This function has two no of attributes -> int and double \n";
//     }
// };



// int main()

// {
//     FASTIO
//     A o;
//     o.fun();
//     o.fun(4);
//     o.fun(5,2.3);
    
//     return 0;
// }


// Name : Bhut Tushar

// Operator overloading

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

class Complex
{
    private:
        int real , imaginary ;
        public:
        // constructor for execute private attributes
            Complex(int r , int i)
            {
                real = r;
                imaginary = i;
            }

    Complex operator + (Complex const &obj)
    {
        Complex res(real,imaginary);
        res.real = real + obj.real ;
        res.imaginary = imaginary + obj.imaginary;
        return res;
    }

    void Display()
    {
        cout<<real<<" + "<<imaginary<<"i\n";
    }
};

int main()

{
    FASTIO
    Complex c1(4,6) ;
    Complex c2(8,2);
    Complex c3 = c1 + c2;
    c3.Display();

    return 0;
}


// Name : Bhut Tushar

// Run time Polymorphism (Virtual Function)

// #include <bits/stdc++.h>
// #define FASTIO
// using namespace std;

// class base
// {
//     public:
//     void print()
//     {
//         cout<<"This is base class's print function\n";
//     }
//     virtual void display()
//     {
//         cout<<"This is base class's display function\n";
//     }
// };

// class derived : public base
// {
//     public:
//     void print()
//     {
//         cout<<"This is derived class's print function\n";
//     }
//     void display()
//     {
//         cout<<"This is derived class's display function\n";
//     }
// };
 
// int main()

// {
//     FASTIO
//     base* baseptr;
//     derived d;
//     baseptr = &d;

//     baseptr -> print(); // its a base pointer so it prints base's print function

//     baseptr -> display(); // for this we have written virtual before function .. so it is ignored by compiler and prints derived class's function
//     return 0;
// }

/*
    baseptr ma derived class nu address nakhvathi baseptr derived class ne point kare 
    etle derived class ma find karse



*/