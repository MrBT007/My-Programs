#include<bits/stdc++.h>
using namespace std;
const int N = 1e+5;

vector<int>parent(N);
vector<int>sz(N);

void make_set(int i)
{
    parent[i] = i;
    sz[i] = 1;
}

int find_set(int v)
{
    if(v==parent[v])return v;

    return parent[v] = find_set(parent[v]);
}

void union_set(int u,int v)
{
    u = find_set(u);
    v = find_set(v);
    if(u!=v)
    {
        if(sz[u]<sz[v])
            swap(u,v);
        parent[v] = u;
        sz[u]+=sz[v];
    }
}

int main()
{
    for(int i = 0;i<N;i++)
    {
        make_set(i);
    }

    cout<<"Enter Verices and Edges : ";
    int vertices,edges;
    cin>>vertices>>edges;

    vector<vector<int>>edgeArray;
    for(int i = 0;i<edges;i++)
    {
        int u,v,w;cin>>u>>v>>w;
        edgeArray.push_back({w,u,v});
    }
    sort(edgeArray.begin(),edgeArray.end());
    int cost = 0;
    for(auto i:edgeArray)
    { 
        int w = i[0];
        int u = i[1];
        int v = i[2];

        int x = find_set(u);
        int y = find_set(v);

        if(x == y)continue;
        else
        {
            cout<<u<<" "<<v<<"\n";
            cost+=w;
            union_set(u,v);
            
        }
    }
    cout<<"Total Cost : "<<cost;
    
}