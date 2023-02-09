/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
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
#define no cout<<"NO"<<endl;
#define yes cout<<"YES"<<endl;
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define SORT(v) sort(all(v))
#define REVSORT(v) sort(all(v),greater<int>())
#define MAX(v) max_element(all(v))
#define MIN(v) min_element(all(v))
#define rep(from,to) for(int i = from;i<=to;i++)
#define rep_back(from,to) for(int i = from;i>=to;i--)
#define take(v) rep(0,v.size())cin>>v[i];
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;
using namespace __gnu_pbds;

/* ========== TEMPLATES ========= */

template <class T>using oset = tree<T, null_type, less<T>,rb_tree_tag,tree_order_statistics_node_update>;

template<class A> istream& operator>>(istream& in, vector<A> &a){
    for(A &i:a)in>>i;
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

bool isPowerOfTwo(int node)
{
    if(node==0)
    return false;
    return (ceil(log2(node)) == floor(log2(node)));
}

bool is_prime(int node) {
    if (node == 1) {
        return false;
}

    int i = 2;
    while (i*i <= node) {
        if (node % i == 0) {
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
    bool operator()(const pair<int, pair<string,string>> &a, const pair<int, pair<string,string>> &b)
    {
        return a.first > b.first; // compares the integers (first element of the pair)
    }
};

struct Node {
    int g;
    int h;
    string parent;
};

map<string, vector<pair<string, int>>> graph;

vector<pair<string, int>> get_neighbors(string v) {
    if (graph.count(v) > 0)
        return graph[v];
    else
        return {};
}

map<string, int> H_dist = {
        {"A", 16},
        {"B", 4},
        {"C", 16},
        {"D", 2},
        {"E", 1},
        {"F", 4},
        {"G", 0}};

int heuristic(string node) {
    return H_dist[node];
}

void aStarAlgo(string start_node, string stop_node) {
    set<string> open_set;
    set<string> closed_set;
    map<string, Node> nodes_with_values;
    map<string, string> parents;
    open_set.insert(start_node);
    nodes_with_values[start_node].g = 0;
    parents[start_node] = start_node;

    while (open_set.size() > 0) {
        string node;
        int min_score = INT_MAX;

        for (auto i : open_set) {
            int score = nodes_with_values[i].g + heuristic(i);
            if (score < min_score) {
                node = i;
                min_score = score;
            }
        }

        if (node.empty()) {
            cout << "Path does not exist!" << endl;
            return;
        }

        if (node == stop_node) {
            vector<string> path;
            while (parents[node] != node) {
                path.push_back(node);
                node = parents[node];
            }
            path.push_back(start_node);
            reverse(all(path));
            cout<<"Cost : "<<nodes_with_values[stop_node].g<<"\node";
            cout << "Path found: ";
            for (auto s : path)
                cout << s << " ";
            cout << endl;
            return;
        }

        open_set.erase(node);
        closed_set.insert(node);

        vector<pair<string, int>> neighbors = get_neighbors(node);
        if (neighbors.empty())
            continue;

        for (auto m : neighbors) {
            if (open_set.count(m.first) == 0 && closed_set.count(m.first) == 0) {
                open_set.insert(m.first);
                parents[m.first] = node;
                nodes_with_values[m.first].g = nodes_with_values[node].g + m.second;
            } else {
                if (nodes_with_values[m.first].g > nodes_with_values[node].g + m.second) {
                    nodes_with_values[m.first].g = nodes_with_values[node].g + m.second;
                    parents[m.first] = node;
                    // if value is less than the visited then we will erase it from closed set and add it in open set
                    if (closed_set.count(m.first) > 0) {
                        open_set.insert(m.first);
                        closed_set.erase(m.first);
                    }
                }
            }
        }
    }
    cout << "Path does not exist!" << endl;
    return;
}

int main() {
    graph["a"] = {{"b", 10}, {"c", 4}};
    graph["b"] = {{"a", 10}, {"d", 6}, {"c", 4}};
    graph["c"] = {{"a", 4}, {"b", 4}, {"e", 6}};
    graph["d"] = {{"b", 6}, {"e", 6}, {"f", 4}};
    graph["e"] = {{"c", 6}, {"d", 6}, {"g", 14}};
    graph["f"] = {{"d", 4}, {"g", 4}};
    graph["g"] = {{"e", 14}, {"f", 4}};
    aStarAlgo("a", "g");
    return 0;
}