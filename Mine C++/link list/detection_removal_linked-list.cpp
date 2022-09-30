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

void insertAttail(node *&head, int val)
{
    node *n = new node(val);
    node *temp = head;

    if (head == NULL)
    {
        head = n;
        return;
    }

    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

void display(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL";
}

void makeCycle(node *&head, int pos)
{
    node *temp = head;
    node *starNode;
    int count = 1;
    while (temp->next != NULL)
    {
        if (count == pos)
        {
            starNode = temp;
        }
        temp = temp->next;
        count++;
    }
    temp->next = starNode;
}

bool detectCycle(node *&head)
{
    node *fast = head;
    node *slow = head;

    while (fast->next != NULL && fast != NULL)
    {
        slow = slow->next;
        fast = fast->next->next;

        if (fast == slow)
        {
            return true;
        }
    }
    return false;
}

void removeCycle(node *&head)
{
    node *fast = head;
    node *slow = head;

    do
    {
        slow = slow->next;
        fast = fast->next->next;
    } while (slow != fast);

    fast->next = head;
    while (slow->next != fast->next)
    {
        fast = fast->next;
        slow = slow->next;
    }
    slow->next = NULL;
}

int main()

{
    FASTIO
    node *head = NULL;
    insertAttail(head, 1);
    insertAttail(head, 2);
    insertAttail(head, 3);
    insertAttail(head, 4);
    insertAttail(head, 5);
    insertAttail(head, 6);

    makeCycle(head, 3);
    // display(head);
    cout << detectCycle(head);
    removeCycle(head);
    cout << "\n";
    cout << detectCycle(head);
    cout << "\n";
    display(head);

    return 0;
}