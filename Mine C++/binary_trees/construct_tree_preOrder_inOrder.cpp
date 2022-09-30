// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val)
    {
        data = val;
        left = NULL;
        right = NULL;
    }
};

int search(int inorder[],int start , int end , int curr)
{
    for (int i = start; i <= end ; i++)
    {
        if (inorder[i] == curr)
        {
            return i;
        }
        
    }
    return -1;
    
}

Node* constructTree(int preorder[],int inorder[],int start,int end)
{
    if (start>end)
    {
        return NULL;
    }
    
    static int idx = 0;
    int curr = preorder[idx];
    idx++;

    Node* node = new Node(curr);
    if (start == end)
    {
        return node;
    }
    
    int pos = search(inorder,start,end,curr);
    node->left = constructTree(preorder,inorder,start,pos-1);
    node->right = constructTree(preorder,inorder,pos+1,end);
}     

void printInOrder(Node* root)
{
    if(root == NULL)
    {
        return;
    }
    printInOrder(root->left);
    cout<<root->data<<" ";
    printInOrder(root->right);
}
int main()

{
    FASTIO
    int preorder[] = {1,2,4,3,5};
    int inorder[] = {4,2,1,5,3};

    Node*root = constructTree(preorder,inorder,0,4);
    printInOrder(root);
    return 0;
}