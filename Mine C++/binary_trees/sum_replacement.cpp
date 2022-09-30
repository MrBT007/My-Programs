/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
    જય ભૂત દાદા

    Name : Bhut Tushar
*/

// #include<allGod>
#include <bits/stdc++.h>

#define ll long long
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define mod 1000000007
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

/* ========== YOUR CODE HERE ========= */

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

void sumreplacement(Node* root)
{
    if(!root)
        return;

    sumreplacement(root->left);
    sumreplacement(root->right);

    if(root->left != NULL)
        root->data += root->left->data;

    if(root->right != NULL)
        root->data += root->right->data;
}

void preorder(Node* root)
{
    if(!root) return;

    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
int main()

{
    FASTIO;
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->left->left->left = new Node(7);
    root->right->right = new Node(6);

    sumreplacement(root);
    preorder(root);
    return 0;
}