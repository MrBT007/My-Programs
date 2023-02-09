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

pair<int, int> visGoal = {-1, -1}, visSrc = {-1, -1};

map<pair<int, int>, set<pair<int, int>>> generated_tree_childs;
map<pair<int, int>, set<pair<int, int>>> generated_tree_parents;

//generating tree
void generateTree(int jug1, int jug2, pair<int, int> goal)
{
    map<pair<int, int>, bool> visited;
    // visited[{0, 0}] = true;
    queue<pair<int, int>> q;
    q.push({0, 0});

    while (!q.empty())
    {
        pair<int, int> top = q.front();
        q.pop();

        if (!visited[top])
        {
            visited[top] = true;
            // cout << top.first << " " << top.second << "\n";
            // fill
            if (top.first < jug1)
            {
                generated_tree_childs[top].insert({jug1, top.second});
                generated_tree_parents[{jug1, top.second}].insert(top);
                if (!visited[{jug1, top.second}])
                {
                    q.push({jug1, top.second});
                    // cout<<jug1<<" "<<top.second<<"\n";
                }
            }
            if (top.second < jug2)
            {
                generated_tree_childs[top].insert({top.first, jug2});
                generated_tree_parents[{top.first, jug2}].insert(top);
                if (!visited[{top.first, jug2}])
                {
                    q.push({top.first, jug2});
                    // cout<<top.first<<" "<<jug2<<"\n";
                }
            }

            // empty
            if (top.first > 0)
            {
                generated_tree_childs[top].insert({0, top.second});
                generated_tree_parents[{0, top.second}].insert(top);
                if (!visited[{0, top.second}])
                {
                    q.push({0, top.second});
                }
            }
            if (top.second > 0)
            {
                generated_tree_childs[top].insert({top.first, 0});
                generated_tree_parents[{top.first, 0}].insert(top);
                if (!visited[{top.first, 0}])
                {
                    q.push({top.first, 0});
                }
            }

            // transfer
            if (top.first > 0 and top.second < jug2)
            {
                if (top.first + top.second <= jug2)
                {
                    generated_tree_childs[top].insert({0, top.first + top.second});
                    generated_tree_parents[{0, top.first + top.second}].insert(top);
                    if (!visited[{0, top.first + top.second}])
                    {
                        q.push({0, top.first + top.second});
                    }
                }
                else
                {
                    generated_tree_childs[top].insert({top.first + top.second - jug2, jug2});
                    generated_tree_parents[{top.first + top.second - jug2, jug2}].insert(top);
                    if (!visited[{top.first + top.second - jug2, jug2}])
                    {
                        q.push({top.first + top.second - jug2, jug2});
                    }
                }
            }
            if (top.second > 0 and top.first < jug1)
            {
                if (top.first + top.second <= jug1)
                {
                    generated_tree_childs[top].insert({top.first + top.second, 0});
                    generated_tree_parents[{top.first + top.second, 0}].insert(top);
                    if (!visited[{top.first + top.second, 0}])
                    {
                        q.push({top.first + top.second, 0});
                    }
                }
                else
                {
                    generated_tree_childs[top].insert({jug1, top.first + top.second - jug1});
                    generated_tree_parents[{jug1, top.first + top.second - jug1}].insert(top);
                    if (!visited[{jug1, top.first + top.second - jug1}])
                    {
                        q.push({jug1, top.first + top.second - jug1});
                    }
                }
            }
        }
    }
}

void bfs2(map<pair<int, int>, set<pair<int, int>>> &generated_tree_childs, pair<int, int> goal)
{
    queue<pair<int, int>> q_of_source;
    queue<pair<int, int>> q_of_goal;

    map<pair<int, int>, bool> visited_by_source;
    map<pair<int, int>, bool> visited_by_goal;

    q_of_source.push({0, 0});
    q_of_goal.push(goal);

    while (!q_of_source.empty() and !q_of_goal.empty())
    {
        pair<int, int> top_of_sourceQ = q_of_source.front();
        pair<int, int> top_of_goalQ = q_of_goal.front();

        q_of_source.pop();
        q_of_goal.pop();

        if (visited_by_goal[top_of_sourceQ])
        {
            visGoal = top_of_sourceQ;
            return;
        }
        if (visited_by_source[top_of_goalQ])
        {
            visSrc = top_of_goalQ;
            return;
        }

        if (!visited_by_source[top_of_sourceQ])
        {
            visited_by_source[top_of_sourceQ] = true;

            for (auto i = generated_tree_childs[top_of_sourceQ].begin(); i != generated_tree_childs[top_of_sourceQ].end(); i++)
            {
                if (!visited_by_source[*i])
                {
                    q_of_source.push(*i);
                    traversal_path_of_source.push_back({top_of_sourceQ, *i});
                }
            }
        }

        if (!visited_by_goal[top_of_goalQ])
        {
            visited_by_goal[top_of_goalQ] = true;
            for (auto i = generated_tree_parents[top_of_goalQ].begin(); i != generated_tree_parents[top_of_goalQ].end(); i++)
            {
                if (!visited_by_goal[*i])
                {
                    q_of_goal.push(*i);
                    traversal_path_of_goal.push_back({*i, top_of_goalQ});
                }
            }
        }
    }
    return;
}

int main()
{
    FASTIO;
    int jug1 = 3;
    int jug2 = 4;
    pair<int, int> goal = {0, 2};

    generateTree(jug1, jug2, goal);

    bool solutionExist = false;
    for (auto i : generated_tree_parents)
    {
        if (i.first == goal)
        {
            solutionExist = true;
            break;
        }
    }

    if (solutionExist)
    {
        cout << "\n*** Solution Exist ***\n";

        bfs2(generated_tree_childs, goal);

        vector<pair<int, int>> final_path;
        if (visGoal.first != -1)
        {
            cout << "\nNodes met at : ";
            cout << visGoal.first << " " << visGoal.second << "\n";

            cout << "\nPath from source node to first visited node\n";
            for (auto i : traversal_path_of_source)
            {
                cout << i.first.first << " " << i.first.second << " -> " << i.second.first << " " << i.second.second << "\n";
            }

            cout << "\nPath from Goal node to first visited node\n";
            for (auto i : traversal_path_of_goal)
            {
                cout << i.second.first << " " << i.second.second << " -> " << i.first.first << " " << i.first.second << "\n";
            }
            reverse(all(traversal_path_of_source));
            reverse(all(traversal_path_of_goal));

            pair<int, int> temp = visGoal;
            for (auto i : traversal_path_of_source)
            {
                if (i.second == temp)
                {
                    final_path.push_back(i.first);
                    temp = i.first;
                }
            }
            temp = visGoal;
            reverse(all(final_path));
            final_path.push_back(visGoal);
            // final_path.push_back({60,60}); // just added to check if final_path includes pair's from goal path.
            for (auto i : traversal_path_of_goal)
            {
                if (i.first == temp)
                {
                    final_path.push_back(i.second);
                    temp = i.second;
                }
            }

            cout << "\n*** Final Path ***\n";
            for (auto i : final_path)
            {
                cout << i.first << " " << i.second << "\n";
            }
        }

        if (visSrc.first != -1)
        {
            cout << "\nNodes met at : ";
            cout << visSrc.first << " " << visSrc.second << "\n\n";

            cout << "Path from source node to first visited node\n";
            for (auto i : traversal_path_of_source)
            {
                cout << i.first.first << " " << i.first.second << " -> " << i.second.first << " " << i.second.second << "\n";
            }

            cout << "\nPath from Goal node to first visited node\n";
            for (auto i : traversal_path_of_goal)
            {
                cout << i.second.first << " " << i.second.second << " -> " << i.first.first << " " << i.first.second << "\n";
            }

            reverse(all(traversal_path_of_source));
            reverse(all(traversal_path_of_goal));

            pair<int, int> temp = visSrc;
            for (auto i : traversal_path_of_source)
            {
                if (i.second == temp)
                {
                    final_path.push_back(i.first);
                    temp = i.first;
                }
            }
            temp = visSrc;
            reverse(all(final_path));
            final_path.push_back(visSrc);
            // final_path.push_back({60,60}); // just added to check if final_path includes pair's from goal path.
            for (auto i : traversal_path_of_goal)
            {
                if (i.first == temp)
                {
                    final_path.push_back(i.second);
                    temp = i.second;
                }
            }

            cout << "\n*** Final Path ***\n";
            for (auto i : final_path)
            {
                cout << i.first << " " << i.second << "\n";
            }
        }
    }
    else
        cout << "\n*** Solution Not Exist ***";

    return 0;
}