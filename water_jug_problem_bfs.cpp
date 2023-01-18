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


 vector<pair<pair<int,int>,pair<int,int>>>traversal_path;
 map<pair<int,int>,set<pair<int,int>>>mp;

bool bfs(int jug1, int jug2, pair<int, int> goal)
{
    // visited[{0, 0}] = true;
    map<pair<int, int>, bool> visited;
    queue<pair<int, int>> q;
    q.push({0, 0});

   
    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();
        // cout << top.first << " " << top.second << "\n";

        if (top == goal)
        {
            // cout << goal.first << " " << goal.second << "\n";
            return true;
        }

        if (!visited[top])
        {
            visited[top] = true;
            // cout << top.first << " " << top.second << "\n";
            // fill
            if (top.first < jug1)
            {
                if (!visited[{jug1, top.second}])
                {
                    q.push({jug1, top.second});
                    traversal_path.push_back({top,{jug1,top.second}});
                }
            }
            if (top.second < jug2)
            {
                if (!visited[{top.first, jug2}])
                {
                    q.push({top.first, jug2});
                    traversal_path.push_back({top,{top.first,jug2}});
                }
            }

            // empty
            if (top.first > 0)
            {
                if (!visited[{0, top.second}])
                {
                    q.push({0, top.second});
                    traversal_path.push_back({top,{0,top.second}});
                }
            }
            if (top.second > 0)
            {
                if (!visited[{top.first, 0}])
                {
                    q.push({top.first, 0});
                    traversal_path.push_back({top,{top.first,0}});
                }
            }

            // transfer
            if (top.first > 0 and top.second < jug2)
            {
                if (top.first + top.second <= jug2)
                {
                    if (!visited[{0, top.first + top.second}])
                    {
                        q.push({0, top.first + top.second});
                        traversal_path.push_back({top,{0, top.first + top.second}});
                    }
                }
                else
                {
                    if (!visited[{top.first + top.second - jug2, jug2}])
                    {
                        q.push({top.first + top.second - jug2, jug2});
                        traversal_path.push_back({top,{top.first + top.second - jug2, jug2}});
                        
                    }
                }
            }
            if (top.second > 0 and top.first < jug1)
            {
                if (top.first + top.second <= jug1)
                {
                    if (!visited[{top.first + top.second, 0}])
                    {
                        q.push({top.first + top.second, 0});
                        traversal_path.push_back({top,{top.first + top.second, 0}});
                    }
                }
                else
                {
                    if (!visited[{jug1, top.first + top.second - jug1}])
                    {
                        q.push({jug1, top.first + top.second - jug1});
                        traversal_path.push_back({top,{jug1, top.first + top.second - jug1}});
                    }
                }
            }
        }
    }
    return false;
}

int main()
{
    FASTIO;

    int jug1 = 10;
    int jug2 = 15;
    pair<int, int> goal = {8, 15};

    if (bfs(jug1, jug2, goal))
    {
        // traversal_path.push_back(goal);
        // for(auto i:traversal_path)
        //     cout<<i.first.first<<" "<<i.first.second<<" -> "<<i.second.first<<" "<<i.second.second<<"\n";
        cout << "*** Solution Exist ***\n";

        pair<int,int>node = goal;

        reverse(all(traversal_path));
        vector<pair<int,int>>path;
        path.push_back(goal);
        for(auto i:traversal_path)
        {
            if(i.second == node)
            {
                node = i.first;
                path.push_back(node);
            }
        }
        reverse(all(path));
        for(auto i:path)
            cout<<i.first<<" "<<i.second<<"\n";
    }
    else
        cout << "Solution Not Exist";

    return 0;
}