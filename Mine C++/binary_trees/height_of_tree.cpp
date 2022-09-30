// Name : Bhut Tushar

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

int claculateHeight(Node* root)
{
    if (root == NULL)
        return 0;

    int leftHeight = claculateHeight(root->left);
    int rightHeight = claculateHeight(root->right);

    return max(leftHeight,rightHeight) + 1;
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

    cout<<"Count node is "<<claculateHeight(root)<<endl;
    
    return 0;
}