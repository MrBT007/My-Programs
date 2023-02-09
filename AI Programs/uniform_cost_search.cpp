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
#define no cout << "NO" << endl;
#define yes cout << "YES" << endl;
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

struct ComparePairs
{
    bool operator()(const pair<int, string> &a, const pair<int, string> &b)
    {
        return a.first > b.first; // compares the integers (first element of the pair)
    }
};

map<string, string> parent;

void bfs(map<string, vector<string>> &edges, string source, map<pair<string, string>, int> &cost_edges,string goal)
{
    priority_queue<pair<int, string>, vector<pair<int, string>>, ComparePairs> pq;

    map<string, bool> visited;
    pq.push({0, source});

    map<string,int>costOfAllNode;
    for(auto i:edges)
    {
        costOfAllNode[i.first] = INT_MAX;
    }
    // parent[source] = source;

    while (!pq.empty())
    {
        pair<int, string> top = pq.top();
        pq.pop();

        // cout<<top.second<<"\n";
        if (top.second == goal)
        {
            cout << "Minimum cost_edges : " << top.first << "\n";
            return;
        }

        visited[top.second] = true;

        for (auto i : edges[top.second])
        {
            if (!visited[i] and costOfAllNode[i] > costOfAllNode[top.second]+cost_edges[{top.second,i}])
            {
                parent[i] = top.second;
                costOfAllNode[i] = costOfAllNode[top.second]+cost_edges[{top.second,i}];
                pq.push({top.first + cost_edges[{top.second, i}], i});
            }
        }
    }
}

int main()
{
    FASTIO;

    map<string, vector<string>> edges;

    edges["a"].push_back("b");
    edges["b"].push_back("a");
    edges["a"].push_back("g1");
    edges["s"].push_back("a");
    edges["s"].push_back("b");
    edges["s"].push_back("d");
    edges["b"].push_back("c");
    edges["c"].push_back("g2");
    edges["c"].push_back("f");
    edges["c"].push_back("s");
    edges["d"].push_back("s");
    edges["d"].push_back("c");
    edges["d"].push_back("e");
    edges["f"].push_back("g3");
    edges["f"].push_back("d");
    edges["e"].push_back("g3");

    //edges-cost_edges
    map<pair<string, string>, int> cost_edges;

    cost_edges[{"a", "b"}] = 3;
    cost_edges[{"a", "g1"}] = 9;
    cost_edges[{"b", "a"}] = 2;
    cost_edges[{"b", "c"}] = 1;
    cost_edges[{"s", "a"}] = 5;
    cost_edges[{"s", "b"}] = 9;
    cost_edges[{"s", "d"}] = 6;
    cost_edges[{"c", "s"}] = 6;
    cost_edges[{"c", "g2"}] = 5;
    cost_edges[{"c", "f"}] = 7;
    cost_edges[{"d", "s"}] = 1;
    cost_edges[{"d", "e"}] = 2;
    cost_edges[{"d", "c"}] = 2;
    cost_edges[{"e", "g3"}] = 7;
    cost_edges[{"f", "g3"}] = 8;
    cost_edges[{"f", "d"}] = 2;


    //Undirected Graph

    // edges["a"].push_back("b");
    // edges["b"].push_back("a");
    // edges["a"].push_back("c");
    // edges["c"].push_back("a");
    // edges["a"].push_back("d");
    // edges["d"].push_back("a");
    // edges["b"].push_back("d");
    // edges["d"].push_back("b");
    // edges["b"].push_back("e");
    // edges["e"].push_back("b");
    // edges["c"].push_back("d");
    // edges["d"].push_back("c");
    // edges["c"].push_back("g1");
    // edges["g1"].push_back("c");
    // edges["d"].push_back("e");
    // edges["e"].push_back("d");
    // edges["d"].push_back("f");
    // edges["f"].push_back("d");
    // edges["d"].push_back("g1");
    // edges["g1"].push_back("d");
    // edges["e"].push_back("f");
    // edges["f"].push_back("e");
    // edges["e"].push_back("g2");
    // edges["g2"].push_back("e");
    // edges["f"].push_back("g1");
    // edges["g1"].push_back("f");
    // edges["f"].push_back("g2");
    // edges["g2"].push_back("f");
    // edges["f"].push_back("g3");
    // edges["g3"].push_back("f");

    // cost_edges[{"a","b"}] = 1;
    // cost_edges[{"b","a"}] = 1;
    // cost_edges[{"a","c"}] = 3;
    // cost_edges[{"c","a"}] = 3;
    // cost_edges[{"a","d"}] = 2;
    // cost_edges[{"d","a"}] = 2;
    // cost_edges[{"b","d"}] = 4;
    // cost_edges[{"d","b"}] = 4;
    // cost_edges[{"b","e"}] = 1;
    // cost_edges[{"e","b"}] = 1;
    // cost_edges[{"c","d"}] = 2;
    // cost_edges[{"d","c"}] = 2;
    // cost_edges[{"c","g1"}] = 3;
    // cost_edges[{"g1","c"}] = 3;
    // cost_edges[{"d","e"}] = 1;
    // cost_edges[{"e","d"}] = 1;
    // cost_edges[{"d","f"}] = 1;
    // cost_edges[{"f","d"}] = 1;
    // cost_edges[{"d","g1"}] = 5;
    // cost_edges[{"g1","d"}] = 5;
    // cost_edges[{"e","g2"}] = 2;
    // cost_edges[{"g2","e"}] = 2;
    // cost_edges[{"e","f"}] = 3;
    // cost_edges[{"f","e"}] = 3;
    // cost_edges[{"f","g1"}] = 2;
    // cost_edges[{"g1","f"}] = 2;
    // cost_edges[{"f","g2"}] = 2;
    // cost_edges[{"g2","f"}] = 2;
    // cost_edges[{"f","g3"}] = 2;
    // cost_edges[{"g3","f"}] = 2;

    string source = "s";
    string goal = "g2";
    bfs(edges, source, cost_edges,goal);

    cout<<"Path : ";
    vector<string> path;
    while (goal != source)
    {
        path.push_back(goal);
        goal = parent[goal];
    }
    path.push_back(source);

    reverse(all(path));
    for(auto i:path)
    {
        cout<<i<<" ";
    }

    return 0;
}