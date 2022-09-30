// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
#define n 20
using namespace std;

class queues
{
    int *arr;
    int front;
    int back;

public:
    queues()
    {
        arr = new int[n];
        front = -1;
        back = -1;
    }

    void enqueue(int x)
    {
        if (back == n - 1)
        {
            cout << "Queue overflow\n";
            return;
        }
        back++;
        arr[back] = x;
        if (front == -1)
        {
            front++;
        }
    }
    void dequeue()
    {
        if (front == -1 or front > back)
        {
            cout << "No elements to dequeue\n";
            return;
        }
        front++;
    }
    int peek()
    {
        if (front == -1 or front > back)
        {
            cout << "No elements in queues\n";
            return -1;
        }
        return arr[front];
    }
    bool empty()
    {
        if (front == -1 or front > back)
        {
            return true;
        }
        return false;
    }
};

int main()

{
    FASTIO
    queues q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);

    cout << q.peek() << "\n";
    q.dequeue();
    cout << q.peek() << "\n";
    q.dequeue();
    cout << q.peek() << "\n";
    q.dequeue();
    cout << q.peek() << "\n";
    q.dequeue();
    cout << q.empty();
    return 0;
}