/*
    prims(E,cost,n,t)
    {
        // E is set of edges
        // cost is n*n adjancy matrix
        // t is array
        // MST is computed and stored in array t[1:n-1,edge name(1:2)]

        1. let(k,l) be an edge of mincost in E. - O(E)
        2. mincost = cost[k,l]
        3. t[1,1] = k , t[1,2] = l
            for(i = 1 to n) - O(n)
            {
                if(cost[i,l] < cost[i,k]) near[i] = l
                else near[i] = k

                near[k] = 0, near[l] = 0

                for(i = 2 to n-1) // one edge for k->l is already added - O(n)
                {
                    let j be an index such that near[j]!=0 and cost[j,near[j] is minimal]
                    t[i,1] = j, t[i,2] = near[j]
                    mincost = mincost + cost[j,near[j]]
                    near[j] = 0
                }
                for(k = 1 to n) - (n)
                {
                    if(near[k] = 0 and cost[k,near[k]]>cost[k,j])
                    {
                        near[k] = j
                    }
                }
            }

        // O(n^2) --> O(vertex^2)
    }
*/

/*
    changing the minimum path to current path is called relaxing
*/

/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
    જય ભૂત દાદા

    Name : Bhut Tushar
*/

#include <bits/stdc++.h>

#define ll long long
#define ull unsigned long long
#define sz size()
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define SORT(v) sort(all(v))
#define REVSORT(v) sort(all(v), greater<int>())
#define MAX(v) max_element(all(v))
#define MIN(v) min_element(all(v))
#define rep(from, to) for (int i = from; i <= to; i++)
#define rep_back(from, to) for (int i = from; i >= to; i--)
#define take(v) rep(0, v.size()) cin >> v[i];
#define FASTIO                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
using namespace std;

/* ========== YOUR CODE HERE ========= */

void google(int i)
{
    cout << "Case #" << i << ": ";
}

int minDist(vector<int>&key,vector<bool>&isNodeSelected)
{
    int minEdge = INT_MAX;
    int minidx;

    for(int i = 0;i<key.size();i++)
    {
        if(!isNodeSelected[i] and minEdge>key[i])
        {
            minEdge = key[i];
            minidx = i;
        }
    }
    return minidx;
}

void printMST(vector<int>parent,vector<vector<int>>graph)
{
    cout<<"Edge \tWeight\n";
    for(int i = 1;i<parent.size();i++)
    {
        cout<<parent[i]<<" - "<<i<<" \t"<<graph[i][parent[i]]<<"\n";
    }
}

void prim(vector<vector<int>>&graph)
{
    int n = graph.size();
    vector<int>parent(n);
    vector<int>key(n,INT_MAX);
    vector<bool>isNodeSelected(n,false);

    key[0]=0;
    parent[0]=-1;

    for(int i = 0;i<graph.size()-1;i++)
    {
        int u = minDist(key,isNodeSelected);
        isNodeSelected[u] = true;

        for(int v = 0;v<n;v++)
        {
            if(!isNodeSelected[v] and graph[u][v] and graph[u][v] < key[v])
            {
                parent[v] = u;
                key[v] = graph[u][v];
            }
        }
    }
    printMST(parent,graph);
}

int main()
{
    FASTIO;
    vector<vector<int>> graph = { { 0, 2, 0, 6, 0 },
                        { 2, 0, 3, 8, 5 },
                        { 0, 3, 0, 0, 7 },
                        { 6, 8, 0, 0, 9 },
                        { 0, 5, 7, 9, 0 } };

    prim(graph);
    return 0;
}
