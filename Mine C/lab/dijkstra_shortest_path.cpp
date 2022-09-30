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
#define FASTIO                      \
  ios_base::sync_with_stdio(false); \
  cin.tie(NULL);                    \
  cout.tie(NULL)
using namespace std;

bool isPowerOfTwo(int n)
{
  if (n == 0)
    return false;
  return (ceil(log2(n)) == floor(log2(n)));
}

void google(int i)
{
  cout << "Case #" << i << ": ";
}

/* ========== YOUR CODE HERE ========= */

int minDist(vector<int> distance, vector<bool> isNodeIncluded)
{
  int minEdge = INT_MAX;
  int min_idx;
  for (int i = 0; i < distance.size() - 1; i++)
  {
    if (!isNodeIncluded[i] and minEdge >= distance[i])
    {
      minEdge = distance[i];
      min_idx = i;
    }
  }
  return min_idx;
}
void printDistance(vector<int> distance)
{
  cout << "Vertex \t Distance from source\n";
  for (int i = 0; i < distance.size(); i++)
  {
    cout << "  " << i << " \t\t " << distance[i] << "\n";
  }
}
void dijkstra(vector<vector<int>> graph, int source)
{
  // assigning all node to infinite
  vector<int> distance(graph.size(), INT_MAX);

  // first none of node have selected so make it false
  vector<bool> isNodeIncluded(graph.size(), false);

  // source to source distance is 0
  distance[source] = 0;

  // for making shortest path we have to make it n-1 edges, where n is total vertices
  for (int i = 0; i < graph.size() - 1; i++)
  {
    // getting a vertex connected with minimum outgoing edge
    int minOutGoingEdge = minDist(distance, isNodeIncluded);

    // select that vertex
    isNodeIncluded[minOutGoingEdge] = true;

    for (int j = 0; j < graph.size(); j++)
    {
      if (!isNodeIncluded[j] and graph[minOutGoingEdge][j] > 0 and distance[minOutGoingEdge] != INT_MAX and distance[minOutGoingEdge] + graph[minOutGoingEdge][j] < distance[j])
      {
        distance[j] = distance[minOutGoingEdge] + graph[minOutGoingEdge][j];
      }
    }
  }
  printDistance(distance);
}

int main()
{
  FASTIO;
  // adjacency matrix
  vector<vector<int>> graph = {{0, 4, 0, 0, 0, 0, 0, 8, 0},
                               {4, 0, 8, 0, 0, 0, 0, 11, 0},
                               {0, 8, 0, 7, 0, 4, 0, 0, 2},
                               {0, 0, 7, 0, 9, 14, 0, 0, 0},
                               {0, 0, 0, 9, 0, 10, 0, 0, 0},
                               {0, 0, 4, 14, 10, 0, 2, 0, 0},
                               {0, 0, 0, 0, 0, 2, 0, 1, 6},
                               {8, 11, 0, 0, 0, 0, 1, 0, 7},
                               {0, 0, 2, 0, 0, 0, 6, 7, 0}};

  dijkstra(graph, 0);
  
  return 0;
}