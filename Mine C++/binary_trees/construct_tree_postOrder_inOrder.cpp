// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

class Node
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

int search(int inorder[], int start, int end, int val)
{
    for (int i = 0; i < 4; i++)
    {
        if (inorder[i] == val)
        {
            return i;
        }
    }
    return -1;
}

void inOrderprint(Node *root)
{
    if (root == NULL)
    {
        return;
    }
    inOrderprint(root->left);
    cout << root->data << " ";
    inOrderprint(root->right);
}

Node *constructTree(int postOrder[], int inOrder[], int start, int end)
{
    static int idx = 0;
    if (start > end)
    {
        return NULL;
    }

    int curr = postOrder[idx];
    idx++;

    Node *node = new Node(curr);
    if (start == end)
    {
        return node;
    }

    int pos = search(inOrder, start, end, curr);
    node->right = constructTree(postOrder, inOrder, pos + 1, end);
    node->left = constructTree(postOrder, inOrder, start, pos - 1);

    return node;
}

int main()

{
    FASTIO
    int postorder[] = {4, 2, 5, 3, 1};
    int inorder[] = {4, 2, 1, 5, 3};

    Node *root = constructTree(postorder, inorder, 0, 4);
    inOrderprint(root);

    return 0;
}