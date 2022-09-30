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

void insertAtTail(node *&head, int val)
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

void makeIntersect(node *&head1, node *&head2, int pos)
{
    node *temp1 = head1;
    node *temp2 = head2;
    int count = 1;
    while (temp1 != NULL && count != pos)
    {
        temp1 = temp1->next;
        count++;
    }
    while (temp2->next != NULL)
    {
        temp2 = temp2->next;
    }
    temp2->next = temp1;
}

int length(node *&head)
{
    node *temp = head;
    int l = 0;
    while (temp != NULL)
    {
        temp = temp->next;
        l++;
    }
    return l;
}

int detectIntersection(node *&head1, node *&head2)
{
    int l1 = length(head1);
    int l2 = length(head2);
    node *ptr1;
    node *ptr2;
    int d = 0;
    if (l1 > l2)
    {
        d = l1 - l2;
        ptr1 = head1;
        ptr2 = head2;
    }
    else
    {
        d = l2 - l1;
        ptr1 = head2;
        ptr2 = head1;
    }
    while (d)
    {
        ptr1 = ptr1->next;
        if (ptr1 == NULL)
        {
            return -1;
        }
        d--;
    }

    while (ptr1 != NULL && ptr2 != NULL)
    {
        if (ptr1 == ptr2)
        {
            return ptr1->data;
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return -1;
}

void display(node *head)
{
    while (head != NULL)
    {
        cout << head->data << "->";
        head = head->next;
    }
    cout << "NULL\n";
}

int main()

{
    FASTIO
    node *head1 = NULL;
    node *head2 = NULL;
    insertAtTail(head1, 1);
    insertAtTail(head1, 2);
    insertAtTail(head1, 3);
    insertAtTail(head1, 4);
    insertAtTail(head1, 5);
    insertAtTail(head1, 6);
    insertAtTail(head1, 7);
    insertAtTail(head2, 8);
    insertAtTail(head2, 9);
    makeIntersect(head1, head2, 1);
    display(head1);
    display(head2);
    cout << detectIntersection(head1, head2);

    return 0;
}