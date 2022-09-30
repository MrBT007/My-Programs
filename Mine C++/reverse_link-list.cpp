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
    if (head == NULL)
    {
        head = n;
        return;
    }

    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = n;
}

node *reverseLinkList(node *&head)
{
    // ahiya jo 2 pointer j use karie to ek previous ma and ek current node par rey
    // and jyare aapne teni link badlie .. tyare je next valu node hoy teni sathe link tooti jaay
    // jethi aapne current ne aagal move na kari sakie

    // etla mate aapne 3 pointer no use karie chie jema .. previous , cuurent and next node ne point kare
    node *previousptr = NULL;
    node *currentptr = head;
    node *nextptr;

    while (currentptr != NULL)
    {
        nextptr = currentptr->next;
        currentptr->next = previousptr;

        previousptr = currentptr;
        currentptr = nextptr;
    }
    return previousptr;
}

node *reverseRecursive(node *&head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }

    node *newhead = reverseRecursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return newhead;
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
int main()

{
    FASTIO
    node *head = NULL;
    insertAtTail(head, 1);
    insertAtTail(head, 2);
    insertAtTail(head, 3);
    insertAtTail(head, 4);

    display(head);
    // cout << "\n";

    // Iterative

    // node *newhead = reverseLinkList(head);
    // display(newhead);
    cout << "\n";

    // Recursive

    node *newhead = reverseRecursive(head);
    display(newhead);

    return 0;
}