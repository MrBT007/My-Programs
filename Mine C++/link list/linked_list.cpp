// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

class node
{
public:
    int data;
    node *next;

    //constructor
    node(int val)
    {
        data = val;
        next = NULL;
    }
};

// insertion
void insertAtHead(node *&head, int val)
{
    node *n = new node(val);
    n->next = head;
    // ahiya n etle enterd value na next ne recent je head hoy tene point karie .. jethi first ma n rahe and pachi recent head je hoy te
    head = n;
    // ane pachi head ne n par point karie je thi pahela je head hato tyathi point hati ne n par aavi jaay
}

//searching in linked list
bool search(node *head, int key)
{
    node *temp = head; //iterator
    while (temp != NULL)
    {
        if (temp->data == key)
        {
            return true;
        }
        temp = temp->next;
    }
    return false;
}

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

// Deletion from Head
void deleteAtHead(node *&head)
{
    node *todelete = head;
    head = head->next;

    delete todelete;
}

// Deletion for single node and multiple node but not for head
void deletion(node *&head, int val)
{
    if (head->next == NULL)
    {
        deleteAtHead(head);
        return;
    }

    node *temp = head;
    while (temp->next->data != val)
    {
        temp = temp->next;
    }
    node *todelete = temp->next;
    temp->next = temp->next->next;

    delete todelete;
}

void display(node *head)
{
    node *temp = head;
    // jo ahiya temp ni jagyae khali head j lidhu hot to pan chalet
    // kem k evu nathi hotu k head pointer linked list ma move thai jaat ..e pan temp ni jem j traversing karet
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

    display(head);
    cout << endl;
    insertAtHead(head, 4);
    display(head);
    cout << endl;

    cout << search(head, 3) << "\n";
    cout << search(head, 5) << "\n";

    deletion(head, 3);
    display(head);
    cout << endl;
    deleteAtHead(head);
    display(head);
    cout << endl;

    return 0;
}