// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

class node
{
public:
    int data;
    node *next;

    node(int val)
    {
        data = val;
        next = NULL;
    }
};
class queues
{
    node *front;
    node *back;

public:
    queues()
    {
        front = NULL;
        back = NULL;
    }
    void enqueue(int x)
    {
        node *n = new node(x);
        if (front == NULL)
        {
            back = n;
            front = n;
            return;
        }
        back->next = n;
        back = n;
    }
    void dequeue()
    {
        if (front == NULL)
        {
            cout << "No elements to dequeue\n";
            return;
        }

        node *todelete = front;
        front = front->next;

        delete todelete;
    }

    int peek()
    {
        if (front == NULL)
        {
            cout << "No elements are available in queues\n";
            return -1;
        }

        return front->data;
    }

    bool empty()
    {
        if (front == NULL)
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