#include <iostream>
#include <string>
// using namespace std; // If we haven't written it then it throws an errror because we have to define namespace .. will reflect in line 6
using namespace std;
//Write function here

// int sum(int a, int b)
// {
//     int c;
//     c = a + b;
//     return c;
// }

//CLASS

class Employee
{
private:
    int secretPassword;

public:
    string name;
    int salary;

    //Constructor

    Employee(string naam, int pagar, int sp)
    {
        this->name = naam; // name is from public variable
        this->salary = pagar;
        this->secretPassword = sp; // salary is from public variable
    }                              // Its use that we do not have to defined each Employee's atributes .. just make a constructor
    // In constructor .. it takes string as naam and salary as pagar

    void printDetails()
    {
        cout << "The Employee name is " << this->name << " and the salary is " << this->salary << " Dollars " << endl;
        //Here note that 'this->' means the object (Employee).. for which this code executes
    }
    void getSP()
    {
        cout << "The secret Password of employee is " << this->secretPassword << endl;
    }
};

int main()
{
    // std::cout << "Hello World"; if we haven't written then we have to write std:: then we can move ahead
    // cout << "Hello World" << endl; // eldl is new line character
    // cout << "New line \n";         // Also we can use /n as new line character
    // // cout --> Output in console

    // // Variables

    // int a;
    // short sa = 8;
    // long b;
    // long long c;
    // // Increasing order short--> int--> long --> long long   (containing bytes and numbers)

    // float const d = 69.69;
    // double d2;
    // long double d3;
    // // Increasing order float--> double--> long double    (containing bytes and numbers)
    // cout << d << endl;
    // // d = 45.2; Here it will throw error because we have defined d as a constant
    // cout << sa;

    // // Input from User

    // int t, s;

    // cout << "Enter First Number" << endl;
    // cin >> t; // This is method to input from user

    // cout << "Enter Second Number" << endl;
    // cin >> s;

    // printf("t+s = %d \n", t + s);
    // printf("t-s = %d \n", t - s);
    // printf("t*s = %d \n", t * s);
    // printf("t/s = %f \n", (float)t / s);

    // cout << "t+s = " << t + s << endl;
    // cout << "t-s = " << t - s << endl;
    // cout << "t*s = " << t * s << endl;
    // cout << "t/s = " << t / s << endl;        // This will give an Integer value
    // cout << "t/s = " << (float)t / s << endl; // This will give an Float value and this method called TYPECASTING and floating value will be printed

    // // If - Else Statement

    // int age;
    // cout << "Enter your age" << endl;
    // cin >> age;

    // if (age > 150 || age < 1)
    // {
    //     printf("INvalid Age !!");
    // }
    // else if (age >= 18)
    // {
    //     printf("You can vote");
    // }
    // else
    // {
    //     printf("You can not vote");
    // }

    // switch
    //     Statement

    //         switch (age)
    //     {
    //     case 12:
    //         cout << "You are 12 years old" << endl;
    //         break;
    //     case 18:
    //         cout << "You are 18 years old" << endl;
    //         break;
    //     default:
    //         cout << "You are niether 12 nor 18" << endl;
    //         break;
    //     }
    // // LOOPS
    // int index = 0;
    // // while (index < 30)
    // // {
    // //     cout<< "We are at index number "<<index<<endl;
    // //     index += 1;
    // // }

    // do
    // {
    //     cout << "We are at index number " << index << endl;
    //     index += 1;

    // } while (index > 25); // If condition not satisfies .. then executes at least one time

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Number is " << i << endl;
    // }

    // Function

    //     int t,
    //     s;

    // cout << "Enter First Number" << endl;
    // cin >> t; // This is method to input from user

    // cout << "Enter Second Number" << endl;
    // cin >> s;

    // cout << "Returned Value of Sum Function is " << sum(s, t);

    // ARRAY

    // 1 - D Array

    //     int arr[5];

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "Enter the number at " << i << endl;
    //     cin >> arr[i];
    // }

    // for (int i = 0; i < 5; i++)
    // {
    //     cout << "The number at " << i << "th element is " << arr[i] << endl;
    // }

    // // 2-D Array

    // int arr2d[2][3] = {
    //     {1, 2, 3},
    //     //  0,0  0,1  0,2
    //     {4, 5, 6}
    //     //  0,0  0,1  0,2
    // };

    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 3; j++)
    //     {
    //         cout << "Value at " << i << "," << j << " is " << arr2d[i][j] << endl;
    //     }
    // }

    // Typecasting

    // float n = 89.6;
    // cout<<(int) n; //Which is not rounding number ..it is ignoring numbers after decimal point

    // Strings

    // string name = "Tushar"; // Here also T -> 0 ,u -> 1 , s -> 2 and so on .. index are

    // cout<<"The name is "<<name<<endl;
    // cout<<"The Length of name is "<<name.length()<<endl;
    // cout<<"The name is "<<name.substr(0,4)<<endl; //Starts with 0 and goes to 3 not including 4
    // cout<<"The name is "<<name.substr(2,4)<<endl; //Starts with 2 and goes to 3 not including 4

    // POINTER

    // int p = 78; // Also we can make the float pointer
    // int *ptrp = &p; //pointer stores the address of p
    // cout << "The value of p by it self is " << p << endl;
    // cout << "The value of p by pointer is " << *ptrp << endl;
    // cout << "The address of p by it self " << &p << endl;
    // cout << "The address of p by pointer is " << ptrp << endl;

    //CLASS

    Employee BT("Tushar", 500, 225566);
    // BT.name = "Tushar";
    // BT.salary = 500;

    Employee JP("Jay", 400, 115588);

    cout << BT.name << endl; //We can also write this because it is public variable
    // cout<<BT.secretPassword<<endl; //It throws an error beacause we written secret Password as private variable

    // cout << "The Employee name is " << BT.name << " and the salary is " << BT.salary <<" Dollars "<< endl;

    //Also we can use method which is defined in class
    BT.printDetails();
    JP.printDetails();

    // For getting password we have to write a constructor in Employee function where .. object gives its Paassword
    BT.getSP();
    JP.getSP();

    return 0;
}