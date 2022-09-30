// Name : Bhut Tushar

#include <bits/stdc++.h>
#define FASTIO
using namespace std;

void insertAtBottom(stack<int> &st, int ele)
{
    if (st.empty())
    {
        st.push(ele);
        return;
    }
    

    int topele = st.top();
    st.pop();
    insertAtBottom(st,ele);

    st.push(topele);
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    

    int ele = st.top();
    st.pop();
    reverseStack(st);
    insertAtBottom(st,ele);
}

int main()

{
    FASTIO
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    // while (!st.empty())
    // {
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }cout<<"\n";
    reverseStack(st);
    while (!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }cout<<"\n";

    
    return 0;
}