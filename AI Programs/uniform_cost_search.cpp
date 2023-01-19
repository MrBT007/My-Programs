/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
    જય ભૂત દાદા

    Name : Bhut Tushar
*/

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

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
using namespace __gnu_pbds;

/* ========== TEMPLATES ========= */

template <class T>
using oset = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

template <class A>
istream &operator>>(istream &in, vector<A> &a)
{
    for (A &i : a)
        in >> i;
    return in;
}

template <typename T_container, typename T = typename enable_if<!is_same<T_container, string>::value, typename T_container::value_type>::type>
ostream &operator<<(ostream &os, const T_container &v)
{
    string sep;
    for (const T &x : v)
        os << sep << x, sep = " ";
    return os;
}

bool isPowerOfTwo(int n)
{
    if (n == 0)
        return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

bool is_prime(int n)
{
    if (n == 1)
    {
        return false;
    }

    int i = 2;
    while (i * i <= n)
    {
        if (n % i == 0)
        {
            return false;
        }
        i += 1;
    }
    return true;
}
void google(int i)
{
    cout << "Case #" << i << ": ";
}

/* ========== YOUR CODE HERE ========= */

struct ComparePairs
{
    bool operator()(const pair<int, string> &a, const pair<int, string> &b)
    {
        return a.first > b.first; // compares the integers (first element of the pair)
    }
};

map<string, string> parent;

void bfs(map<string, vector<string>> &edges, string source, map<pair<string, string>, int> &cost,string goal)
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
            // parent["g3"] = top.second;
            cout << "Minimum cost : " << top.first << "\n";
            return;
        }

        visited[top.second] = true;

        for (auto i : edges[top.second])
        {
            if (!visited[i] and costOfAllNode[i] > costOfAllNode[top.second]+cost[{top.second,i}])
            {
                parent[i] = top.second;
                costOfAllNode[i] = costOfAllNode[top.second]+cost[{top.second,i}];
                pq.push({top.first + cost[{top.second, i}], i});
            }
        }
    }
}

int main()
{
    FASTIO;

    // edges - cost
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

    // for(auto i:edges)
    // {
    //     for(auto j:i.second)
    //         cout<<i.first<<" -> "<<j<<"\n";
    // }
    map<pair<string, string>, int> cost;

    cost[{"a", "b"}] = 3;
    cost[{"a", "g1"}] = 9;
    cost[{"b", "a"}] = 2;
    cost[{"b", "c"}] = 1;
    cost[{"s", "a"}] = 5;
    cost[{"s", "b"}] = 9;
    cost[{"s", "d"}] = 6;
    cost[{"c", "s"}] = 6;
    cost[{"c", "g2"}] = 5;
    cost[{"c", "f"}] = 7;
    cost[{"d", "s"}] = 1;
    cost[{"d", "e"}] = 2;
    cost[{"d", "c"}] = 2;
    cost[{"e", "g3"}] = 7;
    cost[{"f", "g3"}] = 8;
    cost[{"f", "d"}] = 2;


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

    // cost[{"a","b"}] = 1;
    // cost[{"b","a"}] = 1;
    // cost[{"a","c"}] = 3;
    // cost[{"c","a"}] = 3;
    // cost[{"a","d"}] = 2;
    // cost[{"d","a"}] = 2;
    // cost[{"b","d"}] = 4;
    // cost[{"d","b"}] = 4;
    // cost[{"b","e"}] = 1;
    // cost[{"e","b"}] = 1;
    // cost[{"c","d"}] = 2;
    // cost[{"d","c"}] = 2;
    // cost[{"c","g1"}] = 3;
    // cost[{"g1","c"}] = 3;
    // cost[{"d","e"}] = 1;
    // cost[{"e","d"}] = 1;
    // cost[{"d","f"}] = 1;
    // cost[{"f","d"}] = 1;
    // cost[{"d","g1"}] = 5;
    // cost[{"g1","d"}] = 5;
    // cost[{"e","g2"}] = 2;
    // cost[{"g2","e"}] = 2;
    // cost[{"e","f"}] = 3;
    // cost[{"f","e"}] = 3;
    // cost[{"f","g1"}] = 2;
    // cost[{"g1","f"}] = 2;
    // cost[{"f","g2"}] = 2;
    // cost[{"g2","f"}] = 2;
    // cost[{"f","g3"}] = 2;
    // cost[{"g3","f"}] = 2;

    string source = "s";
    string goal = "g3";
    bfs(edges, source, cost,goal);

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