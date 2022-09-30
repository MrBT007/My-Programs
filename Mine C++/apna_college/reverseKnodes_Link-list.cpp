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

node *reverseK_node(node *&head, int k)
{
    node *prevptr = NULL;
    node *currentptr = head;
    node *nextptr;

    int count = 0;

    while (currentptr != NULL and count < k)
    {
        nextptr = currentptr->next;
        currentptr->next = prevptr;
        prevptr = currentptr;
        currentptr = nextptr;
        count++;
    }

    // ahiya while loop 2 vaar j chale che matlab k aa example ma 1 vaar while loop chale tyare
    // currentptr 3 par aave and next ptr 4 par
    // have 4 parthi pachu reverse karvanu chalu karvanu che .. etle tena par je pointer point kare tene pass karvo pade
    // etla mate ahiya nextpointer pass karelo che
    if (nextptr != NULL)
    {
        head->next = reverseK_node(nextptr, k);
    }
    return prevptr;
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
    int k = 2;

    display(head);
    cout << "\n";
    node *newhead = reverseK_node(head, k);
    display(newhead);
    return 0;
}