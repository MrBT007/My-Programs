
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

bool isPowerOfTwo(int n)
{
    if(n==0)
    return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

bool is_prime(int n) {
    if (n == 1) {
        return false;
}

    int i = 2;
    while (i*i <= n) {
        if (n % i == 0) {
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

class Solution {
public:
    
    string reverseWords(string s) 
    {
        int i = 0;
        while(i<s.length() and s[i] == ' ')i++;
        vector<string>wd;
        while(i<s.length())
        {
            if(i<s.length() and s[i] == ' ')i++;
            else if(i<s.length() and s[i] != ' ')
            {
                string t = "";
                while(i<s.length() and s[i] != ' ')
                {
                    t+=s[i];
                    i++;
                }
                // cout<<t<<" ";
                wd.push_back(t);
            }
        }
        cout<<wd<<"\n";
        reverse(wd.begin(),wd.end());
        string ans = "";
        for(i = 0;i<wd.size();i++)
        {
            ans+=wd[i];
            if(i!=wd.size()-1)ans+=' ';
        }
        return ans;
    }
};

int main()
{
    FASTIO;
    Solution obj = Solution();
    string ans = obj.reverseWords("the sky is blue");
    cout<<"\n";
    cout<<ans;
    return 0;
}

