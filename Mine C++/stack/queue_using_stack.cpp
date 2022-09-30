// // Name : Bhut Tushar
// // approach 1

// #include <bits/stdc++.h>
// #define FASTIO
// using namespace std;

// class que
// {
//     stack<int> s1;
//     stack<int> s2;

// public:
//     void enqueue(int x)
//     {
//         s1.push(x);
//     }
//     int peekandpop()
//     {
//         if (s1.empty() and s2.empty())
//         {
//             cout << "No elements to perform dequeue\n";
//              return -1;
//         }
//         if (s2.empty())
//         {
//             while (!s1.empty())
//             {
//                 s2.push(s1.top());
//                 s1.pop();
//             }
//         }
//         int topele = s2.top();
//         s2.pop();
//         return topele;
//     }
//     bool empty()
//     {
//         if (s1.empty() and s2.empty())
//         {
//             return true;
//         }
//         return false;
//     }
// };

// int main()

// {
//     FASTIO
//     que q;
//     q.enqueue(1);
//     q.enqueue(2);
//     q.enqueue(3);
//     q.enqueue(4);

//     cout<<q.peekandpop()<<"\n";
//     cout<<q.peekandpop()<<"\n";
//     cout<<q.peekandpop()<<"\n";
//     cout<<q.peekandpop()<<"\n";
//     cout<<q.peekandpop()<<"\n";
//     return 0;
// }
// Name : Bhut Tushar
// approach 2

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

class que
{
    stack<int> s1;

public:
    void enqueue(int x)
    {
        s1.push(x);
    }
    int peekandpop()
    {
        if (s1.empty())
        {
            cout << "No elements to perform dequeue\n";
            return -1;
        }
        int x = s1.top();
        s1.pop();
        if (s1.empty())
        {
            return x;
        }
        int item = peekandpop();
        s1.push(x);
        return item;
    }
    /*
    4       
    3       3
    2       2       2
    1       1       1       1

    jyare koi ek element aave tyare tene print karvanu
    
                    4
            3       3
    2       2       2  

    aa mujab bakina elements fill thay

*/
    bool empty()
    {
        if (s1.empty())
        {
            return true;
        }
        return false;
    }
};

int main()

{
    FASTIO
    que q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout << q.peekandpop() << "\n";
    cout << q.peekandpop() << "\n";
    cout << q.peekandpop() << "\n";
    cout << q.peekandpop() << "\n";
    cout << q.peekandpop() << "\n";
    return 0;
}