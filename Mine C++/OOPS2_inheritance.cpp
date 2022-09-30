// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

class A
{
    public:
        void func()
        {
            cout<<"This line comes form Class A (Parent Class)\n";
        }
};

class B : public A
{
};

class C
{
    public :
        void funcC()
        {
            cout<<"This line comes from Class C\n";
        }
};

class D
{
    public :
        void funcD()
        {
            cout<<"This line comes from Class D\n";
        }
};

class CD : public C , public D
{
    // here also we can write any attributes
};

class E
{
    public:
        void funcE()
        {
             cout<<"This line comes from Class E\n";
        }
};

class E1 : public E
{
    public:
        void funcE1()
        {
             cout<<"This line comes from Class E1\n";
        }
};

class E2 : public E1
{
};

int main()

{
    FASTIO
    
    cout<<"Single Inheritance\n";
    // Single Inheritance

    B b;
    b.func(); //first it finds its own atributes .. if not there then find it in its parent class

    // Multiple Inheritance
    cout<<"Multiple Inheritance\n";
    CD obj;
    obj.funcC();
    obj.funcD();

    // MultiLevel Inheritance
    cout<<"MultiLevel Inheritance\n";
    E2 ob;
    ob.funcE();
    ob.funcE1();

    /*

    Hybrid Inheeritance

                    Class A (parent class)
                   /
            Class B      Class C
                  \       /
                   Class D 

        ahiya class D ma class A ,class B , class C na attributes hase


    Hierarchical inheritance

                          Class A (Parent Class)
                         /       \
                       /          \
              Class B             Class C
            /   \                /       \
    Class D     Class E      Class F     Class G
    */


    return 0;
}