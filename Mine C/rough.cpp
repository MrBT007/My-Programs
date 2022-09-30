#include<bits/stdc++.h>
using namespace std;

struct minHeapNode
{
    minHeapNode*left,*right;
    char data;
    int freq;
    minHeapNode(char data,int freq)
    {
        left = right = NULL;
        this->data = data;
        this->freq = freq;
    }
};

int cost = 0;

struct cmp
{
    bool operator()(minHeapNode* l, minHeapNode* r)
    {
        return l->freq>r->freq;
    }
};

void printCode(minHeapNode* root,string str)
{
    if(!root)return;

    if(root->data != '$')
    {
        cout<<root->data<<" "<<str<<"\n";
        cost+=str.length()*root->freq;
    }

    printCode(root->left,str+"0");
    printCode(root->right,str+"1");
}

void huffman(vector<char>data,vector<int>freq)
{
    minHeapNode* left,*right,*top;
    priority_queue<minHeapNode*,vector<minHeapNode*>,cmp>heap;
    for(int i = 0;i<data.size();i++)
    {
        heap.push(new minHeapNode(data[i],freq[i]));
    }
    while(heap.size()!=1)
    {
        left = heap.top();
        heap.pop();

        right = heap.top();
        heap.pop();

        top = new minHeapNode('$',left->freq+right->freq);
        top->left = left;
        top->right = right;
        heap.push(top);
    }
    printCode(heap.top(),"");
}

int main()
{
    cout<<"Enter total number of data\n";
    int n;cin>>n;
    cout<<"Enter Data and frequency\n";
    vector<char>data(n);
    for(int i = 0;i<n;i++)
    {
        cin>>data[i];
    }
    vector<int>freq(n);
    for(int i = 0;i<n;i++)
    {
        cin>>freq[i];
    }
    huffman(data,freq);
    cout<<"Total Saved bit : "<<accumulate(freq.begin(),freq.end(),0)*8-cost<<"\n";
    return 0;
}