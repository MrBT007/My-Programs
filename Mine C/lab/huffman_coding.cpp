#include <bits/stdc++.h>
using namespace std;

int optimizedFreq = 0;

struct minHeapNode
{
    char data;
    int freq;
    minHeapNode *left, *right;
    minHeapNode(char data, int freq)
    {
        left = NULL;
        right = NULL;
        this->data = data;
        this->freq = freq;
    }
};

struct cmp
{
    bool operator()(minHeapNode *l, minHeapNode *r)
    {
        return (l->freq > r->freq);
    }
};

void printcodes(struct minHeapNode *root, string s)
{
    if (!root)
        return;

    if (root->data != '$')
    {
        optimizedFreq += root->freq * s.length();
        cout << root->data << " : " << s << "\n";
    }

    printcodes(root->left, s + "0");
    printcodes(root->right, s + "1");
}

void huffmanCode(vector<char> data, vector<int> freq)
{
    struct minHeapNode *left, *right, *top;

    priority_queue<minHeapNode *, vector<minHeapNode *>, cmp> minheap;

    for (int i = 0; i < data.size(); i++)
    {
        minheap.push(new minHeapNode(data[i], freq[i]));
    }

    while (minheap.size() != 1)
    {
        left = minheap.top();
        minheap.pop();

        right = minheap.top();
        minheap.pop();

        top = new minHeapNode('$', left->freq + right->freq);
        top->left = left;
        top->right = right;

        minheap.push(top);
    }

    printcodes(minheap.top(), "");
}

int main()
{
    cout << "Enter number of characters\n";
    int n;
    cin >> n;
    cout << "Enter characters\n";
    vector<char> data(n);
    for (int i = 0; i < n; i++)
    {
        cin >> data[i];
    }
    cout << "Enter frequencies\n";
    vector<int> frequency(n);
    for (int i = 0; i < n; i++)
    {
        cin >> frequency[i];
    }

    huffmanCode(data, frequency);
    cout << "Total saved bit : " << accumulate(frequency.begin(), frequency.end(), 0) * 8 - optimizedFreq << "\n";
    return 0;
}