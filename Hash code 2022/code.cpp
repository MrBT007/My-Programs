#include<bits/stdc++.h>
using namespace std;

const int N = 1e+5;
vector<int>parent(N);
vector<int>size(N);

void make_set()
{
    for(int i = 0;i<N;i++)
    {
        parent[i] = i;
        size[i] = 1;
    }
}

int find_set(int v)
{
    if(v == parent[v])return v;

    return parent[v] = find_set(parent[v]);
}

void union_set(int u,int v)
{
    u = find_set(u);
    v = find_set(v);

    if(u!=v)
    {
        if(size[u]<size[v])
        {
            swap(u,v);
        }
        parent[v] = u;
        size[v]+=size[u];
    }
}

int main()
{
    make_set();
    cout<<"Enter number of vertices and edges\n";
    int vertices,edges;cin>>vertices>>edges;
    vector<vector<int>>edgeArr;
    for(int i = 0;i<edges;i++)
    {
        int w,u,v;
        cin>>u>>v>>w;
        edgeArr.push_back({w,u,v});
    }
    sort(edgeArr.begin(),edgeArr.end());
    int cost = 0;
    cout<<"\nEdges are ...\n";
    for(auto i:edgeArr)
    {
        int w = i[0];
        int u = i[1];
        int v = i[2];

        int x = find_set(u);
        int y = find_set(v);

        if(x == y)continue;
        else
        {
            cout<<u<<" - "<<v<<"\n";
            cost+=w;
            union_set(u,v);
        }
    }
    cout<<"Total Cost : "<<cost<<"\n";
}
