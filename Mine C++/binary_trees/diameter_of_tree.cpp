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

int calculateHeight(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    return max(calculateHeight(root->left),calculateHeight(root->right)) + 1;
}
/*

    O(n^2) because here first find height of every node ----> O(n)

    now calculateDiameter will run for n node and will call calculateHeight that node
    means for every node we will call calculateHeight ----> O(n) * O(n) ==> O(n^2)

    So for this code time complexity is O(n^2) 



int calculateDiameter(Node* root)
{
    if(root == NULL)
    {
        return 0;
    }
    int leftHeight = calculateHeight(root->left);
    int rightHeight = calculateHeight(root->right);
    int currentDiameter = leftHeight + rightHeight +1;

    int leftDiameter = calculateDiameter(root->left);
    int rightDiameter = calculateDiameter(root->right);

    return max(currentDiameter,max(leftDiameter,rightDiameter));
}

*/

int calculateDiameter(Node* root, int* height)
{
  if(!root)
  {
      *height = 0;
      return 0;
  }
  int lh = 0, rh = 0;
  int ldiameter = calculateDiameter(root->left,&lh);
  int rdiameter = calculateDiameter(root->right,&rh);
  
  int currdiameter = lh + rh+ 1;
  *height = max(lh,rh)+1;

return max(currdiameter,max(ldiameter,rdiameter));
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

    int height = 0;
    cout<<"Diameter of tree is "<<calculateDiameter(root,&height); 
    
    return 0;
}