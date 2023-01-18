
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


std::vector<int> getContinuousLines(const std::vector<std::vector<int>>& A) {
    // Initialize the result array with all zeros
    std::vector<int> B(A.size(), 0);

    // Loop through the lines
    for (int i = 0; i < A.size(); ++i) {
        // Get the coordinates of the line
        int x1 = A[i][0], y1 = A[i][1], x2 = A[i][2], y2 = A[i][3];
        // Check if the line is vertical or horizontal
        if (x1 == x2) { // Vertical line
            // Increment B[j] for all j such that y1 <= j < y2
            for (int j = y1; j < y2; ++j) {
                ++B[i];
            }
        } else if (y1 == y2) { // Horizontal line
            // Increment B[j] for all j such that x1 <= j < x2
            for (int j = x1; j < x2; ++j) {
                ++B[i];
            }
        }
    }

    return B;
}
  
int main() 
{ 
    vector<vector<int>>arr = {{4,7},{1,3}}; 
    
    cout<<getContinuousLines(arr);
    return 0; 
}