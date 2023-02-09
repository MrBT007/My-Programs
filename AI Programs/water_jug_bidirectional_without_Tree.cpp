/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
    જય ભૂત દાદા

    Name : Bhut Tushar
*/

#include <bits/stdc++.h>
#include <time.h>
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

vector<pair<pair<int, int>, pair<int, int>>> traversal_path_of_source;
vector<pair<pair<int, int>, pair<int, int>>> traversal_path_of_goal;
map<pair<int, int>, set<pair<int, int>>> mp;

pair<int, int> visGoal = {-1, -1}, visSrc = {-1, -1};

map<pair<int, int>, set<pair<int, int>>> generated_tree;


bool bfs(int jug1, int jug2, pair<int, int> goal, map<pair<int, int>, bool> &visited_by_source, map<pair<int, int>, bool> &visited_by_goal)
{
    if (visited_by_source[{jug1, jug2}])
        return false;

    // visited_by_source[{0, 0}] = true;
    queue<pair<int, int>> q_of_source;
    queue<pair<int, int>> q_of_goal;
    q_of_source.push({0, 0});
    q_of_goal.push(goal);

    while (!q_of_source.empty() and !q_of_goal.empty())
    {
        pair<int, int> top_of_sorceQ = q_of_source.front();
        q_of_source.pop();
        pair<int, int> top_of_goalQ = q_of_goal.front();
        q_of_goal.pop();
        // cout << top_of_sorceQ.first << " " << top_of_sorceQ.second << "\n";

        // if top of goalq is already visited by sourceq and goal is visited by both q then solution exis.
        if (visited_by_source[top_of_goalQ])
        {
            // cout << goal.first << " " << goal.second << "\n";

            if(visited_by_goal[goal] and visited_by_source[goal])
            {
                visGoal = top_of_goalQ;
                return true;
            }
        }
        // if top of sourceq is already visited by goalq and goal is visited by both q then solution exis.
        if (visited_by_goal[top_of_sorceQ])
        {
            // cout << goal.first << " " << goal.second << "\n";

            if(visited_by_goal[goal] and visited_by_source[goal])
            {
                visSrc = top_of_sorceQ;
                return true;
            }
        }

        // if top is not visited then we may proceed further
        if (!visited_by_source[top_of_sorceQ])
        {
            visited_by_source[top_of_sorceQ] = true;
            // cout << top_of_sorceQ.first << " " << top_of_sorceQ.second << "\n";
            // fill
            if (top_of_sorceQ.first < jug1)
            {
                if (!visited_by_source[{jug1, top_of_sorceQ.second}])
                {
                    q_of_source.push({jug1, top_of_sorceQ.second});
                    traversal_path_of_source.push_back({top_of_sorceQ, {jug1, top_of_sorceQ.second}});
                }
            }
            if (top_of_sorceQ.second < jug2)
            {
                if (!visited_by_source[{top_of_sorceQ.first, jug2}])
                {
                    q_of_source.push({top_of_sorceQ.first, jug2});
                    traversal_path_of_source.push_back({top_of_sorceQ, {top_of_sorceQ.first, jug2}});
                }
            }

            // empty
            if (top_of_sorceQ.first > 0)
            {
                if (!visited_by_source[{0, top_of_sorceQ.second}])
                {
                    q_of_source.push({0, top_of_sorceQ.second});
                    traversal_path_of_source.push_back({top_of_sorceQ, {0, top_of_sorceQ.second}});
                }
            }
            if (top_of_sorceQ.second > 0)
            {
                if (!visited_by_source[{top_of_sorceQ.first, 0}])
                {
                    q_of_source.push({top_of_sorceQ.first, 0});
                    traversal_path_of_source.push_back({top_of_sorceQ, {top_of_sorceQ.first, 0}});
                }
            }

            // transfer
            if (top_of_sorceQ.first > 0 and top_of_sorceQ.second < jug2)
            {
                if (top_of_sorceQ.first + top_of_sorceQ.second <= jug2)
                {
                    if (!visited_by_source[{0, top_of_sorceQ.first + top_of_sorceQ.second}])
                    {
                        q_of_source.push({0, top_of_sorceQ.first + top_of_sorceQ.second});
                        traversal_path_of_source.push_back({top_of_sorceQ, {0, top_of_sorceQ.first + top_of_sorceQ.second}});
                    }
                }
                else
                {
                    if (!visited_by_source[{top_of_sorceQ.first + top_of_sorceQ.second - jug2, jug2}])
                    {
                        q_of_source.push({top_of_sorceQ.first + top_of_sorceQ.second - jug2, jug2});
                        traversal_path_of_source.push_back({top_of_sorceQ, {top_of_sorceQ.first + top_of_sorceQ.second - jug2, jug2}});
                    }
                }
            }
            if (top_of_sorceQ.second > 0 and top_of_sorceQ.first < jug1)
            {
                if (top_of_sorceQ.first + top_of_sorceQ.second <= jug1)
                {
                    if (!visited_by_source[{top_of_sorceQ.first + top_of_sorceQ.second, 0}])
                    {
                        q_of_source.push({top_of_sorceQ.first + top_of_sorceQ.second, 0});
                        traversal_path_of_source.push_back({top_of_sorceQ, {top_of_sorceQ.first + top_of_sorceQ.second, 0}});
                    }
                }
                else
                {
                    if (!visited_by_source[{jug1, top_of_sorceQ.first + top_of_sorceQ.second - jug1}])
                    {
                        q_of_source.push({jug1, top_of_sorceQ.first + top_of_sorceQ.second - jug1});
                        traversal_path_of_source.push_back({top_of_sorceQ, {jug1, top_of_sorceQ.first + top_of_sorceQ.second - jug1}});
                    }
                }
            }
        }

        if (!visited_by_goal[top_of_goalQ])
        {
            visited_by_goal[top_of_goalQ] = true;
            // cout << top_of_goalQ.first << " " << top_of_goalQ.second << "\n";

            // fill
            if (top_of_goalQ.first == 0)
            {
                if (!visited_by_goal[{jug1, top_of_goalQ.second}])
                {
                    q_of_goal.push({jug1, top_of_goalQ.second});
                    traversal_path_of_goal.push_back({top_of_goalQ, {jug1, top_of_goalQ.second}});
                }
            }
            if (top_of_goalQ.second == 0)
            {
                if (!visited_by_goal[{top_of_goalQ.first, jug2}])
                {
                    q_of_goal.push({top_of_goalQ.first, jug2});
                    traversal_path_of_goal.push_back({top_of_goalQ, {top_of_goalQ.first, jug2}});
                }
            }

            // empty
            if (top_of_goalQ.first == jug1)
            {
                if (!visited_by_goal[{0, top_of_goalQ.second}])
                {
                    q_of_goal.push({0, top_of_goalQ.second});
                    traversal_path_of_goal.push_back({top_of_goalQ, {0, top_of_goalQ.second}});
                }
            }
            if (top_of_goalQ.second == jug2)
            {
                if (!visited_by_goal[{top_of_goalQ.first, 0}])
                {
                    q_of_goal.push({top_of_goalQ.first, 0});
                    traversal_path_of_goal.push_back({top_of_goalQ, {top_of_goalQ.first, 0}});
                }
            }

            // transfer
            if (top_of_goalQ.first > 0 and top_of_goalQ.second < jug2)
            {
                if (top_of_goalQ.first + top_of_goalQ.second <= jug2)
                {
                    if (!visited_by_goal[{0, top_of_goalQ.first + top_of_goalQ.second}])
                    {
                        q_of_goal.push({0, top_of_goalQ.first + top_of_goalQ.second});
                        traversal_path_of_goal.push_back({top_of_goalQ, {0, top_of_goalQ.first + top_of_goalQ.second}});
                    }
                }
                else
                {
                    if (!visited_by_goal[{top_of_goalQ.first + top_of_goalQ.second - jug2, jug2}])
                    {
                        q_of_goal.push({top_of_goalQ.first + top_of_goalQ.second - jug2, jug2});
                        traversal_path_of_goal.push_back({top_of_goalQ, {top_of_goalQ.first + top_of_goalQ.second - jug2, jug2}});
                    }
                }
            }
            if (top_of_goalQ.second > 0 and top_of_goalQ.first < jug1)
            {
                if (top_of_goalQ.first + top_of_goalQ.second <= jug1)
                {
                    if (!visited_by_goal[{top_of_goalQ.first + top_of_goalQ.second, 0}])
                    {
                        q_of_goal.push({top_of_goalQ.first + top_of_goalQ.second, 0});
                        traversal_path_of_goal.push_back({top_of_goalQ, {top_of_goalQ.first + top_of_goalQ.second, 0}});
                    }
                }
                else
                {
                    if (!visited_by_goal[{jug1, top_of_goalQ.first + top_of_goalQ.second - jug1}])
                    {
                        q_of_goal.push({jug1, top_of_goalQ.first + top_of_goalQ.second - jug1});
                        traversal_path_of_goal.push_back({top_of_goalQ, {jug1, top_of_goalQ.first + top_of_goalQ.second - jug1}});
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
    pair<int, int> goal = {5, 15};

    map<pair<int, int>, bool> visited_by_source;
    map<pair<int, int>, bool> visited_by_goal;

    for (int i = 0; i <= jug1; i++)
    {
        for (int j = 0; j <= jug2; j++)
        {
            visited_by_source[{i, j}] = false;
        }
    }
    if (bfs(jug1, jug2, goal, visited_by_source, visited_by_goal))
    {
        cout << "*** Solution Exist ***\n";

        vector<pair<int, int>> final_path;
        set<pair<int,int>>st;
        if (visGoal.first != -1)
        {
            cout<<"First node visited by top-down and bottom-up\n";
            cout<<visGoal.first<<" "<<visGoal.second<<"\n\n";

            cout<<"Path from source node to first visited node\n";
            for(auto i:traversal_path_of_source)
            {
                cout<<i.first.first<<" "<<i.first.second<<" -> "<<i.second.first<<" "<<i.second.second<<"\n";
            }
            cout<<"\nPath from Goal node to first visited node\n";
            for(auto i:traversal_path_of_goal)
            {
                cout<<i.first.first<<" "<<i.first.second<<" -> "<<i.second.first<<" "<<i.second.second<<"\n";
            }

            reverse(all(traversal_path_of_source));
            reverse(all(traversal_path_of_goal));

            pair<int, int> temp = visGoal;
            for (auto i : traversal_path_of_source)
            {
                if (i.second == temp and st.count(i.first) == 0)
                {
                    final_path.push_back(i.first);
                    st.insert(i.first);
                    temp = i.first;
                }
            }
            temp = visGoal;
            reverse(all(final_path));
            final_path.push_back(visGoal);
            for (auto i : traversal_path_of_goal)
            {
                if (i.second == temp and st.count(i.first) == 0)
                {
                    final_path.push_back(i.first);
                    st.insert(i.first);
                    temp = i.first;
                }
            }
        }
        if (visSrc.first != -1)
        {
            cout<<"First node visited by top-down and bottom-up\n";
            cout<<visSrc.first<<" "<<visSrc.second<<"\n\n";

            cout<<"Path from source node to first visited node\n";
            for(auto i:traversal_path_of_source)
            {
                cout<<i.first.first<<" "<<i.first.second<<" -> "<<i.second.first<<" "<<i.second.second<<"\n";
            }

            cout<<"\nPath from Goal node to first visited node\n";
            for(auto i:traversal_path_of_goal)
            {
                cout<<i.first.first<<" "<<i.first.second<<" -> "<<i.second.first<<" "<<i.second.second<<"\n";
            }

            reverse(all(traversal_path_of_source));
            reverse(all(traversal_path_of_goal));

            // vector<pair<int, int>> final_path;
            pair<int, int> temp = visSrc;
            for (auto i : traversal_path_of_source)
            {
                if (i.second == temp and st.count(i.first) == 0)
                {
                    final_path.push_back(i.first);
                    st.insert(i.first);
                    temp = i.first;
                }
            }
            temp = visSrc;
            reverse(all(final_path));
            final_path.push_back(visSrc);
            for (auto i : traversal_path_of_goal)
            {
                if (i.second == temp and st.count(i.first) == 0)
                {
                    final_path.push_back(i.first);
                    st.insert(i.first);
                    temp = i.first;
                }
            }
        }

        cout<<"\n*** Final Path ***\n";
        for (auto i : final_path)
        {
            cout << i.first << " " << i.second << "\n";
        }
    }
    else
        cout << "Solution Not Exist";

    
    return 0;
}