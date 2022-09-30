// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
#define n 100

using namespace std;

class stacks // stack buil-in hatu etle stacks karyu
{
private:
    int *arr;
    int top;

public:
    stacks()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack Overflow\n";
            return;
        }

        top++;
        arr[top] = x;
    }

    void pop()
    {
        if (top == -1)
        {
            cout << "No elements to pop\n";
            return;
        }

        top--;
    }

    int Top()
    {
        if (top == -1)
        {
            cout << "No element in stack\n";
            return -1;
        }
        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()

{
    FASTIO

    stacks tp;
    tp.push(1);
    tp.push(2);
    tp.push(3);
    cout << tp.Top() << "\n";
    tp.pop();
    cout << tp.Top() << "\n";
    return 0;
}