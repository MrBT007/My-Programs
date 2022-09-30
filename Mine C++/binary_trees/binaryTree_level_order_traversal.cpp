// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

struct Node
{
public:
    int data;
    Node *left;
    Node *right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

// int insertInQ(Node *root)
// {
//     if (root->left)
//     {
//         return root->left->data;
//     }
//     if (root->right)
//     {
//         return root->right->data;
//     }
//     if (!(root->left or root->right))
//     {
//         return -1;
//     }
// }

void printLevelOrder(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    queue<Node *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        Node *node = q.front();
        if (node == NULL)
        {
            cout << "\n";
            q.pop();
            q.push(NULL);
        }
        if (node != NULL)
        {
            cout << node->data << " ";
            q.pop();

            if (node->left != NULL)
                q.push(node->left);
            if (node->right != NULL)
                q.push(node->right);
        }
        if(!q.empty())
        {
            q.push(NULL);
        }
    }
}
int main()

{
    FASTIO
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(9);
    root->right->right = new Node(10);
    root->left->right->left = new Node(6);
    root->left->right->right = new Node(7);
    root->right->left->right = new Node(11);
    root->right->right->left = new Node(12);
    root->right->right->left->right = new Node(13);

    printLevelOrder(root);
    return 0;
}