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
#define REVSORT(v) sort(all(v),greater<int>())
#define MAX(v) max_element(all(v))
#define MIN(v) min_element(all(v))
#define rep(from,to) for(int i = from;i<=to;i++)
#define rep_back(from,to) for(int i = from;i>=to;i--)
#define take(v) rep(0,v.size())cin>>v[i];
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

bool isPowerOfTwo(int n)
{
    if(n==0)
    return false;
    return (ceil(log2(n)) == floor(log2(n)));
}

void google(int i)
{
    cout << "Case #" << i << ": ";
}

/* ========== YOUR CODE HERE ========= */

int main()
{
    FASTIO;
    int t;cin>>t;
    for(int i = 0;i<t;i++)
    {
        int n,q;cin>>n>>q;
        deque<pair<int,pair<int,int>>>dq;
        vector<int>a;
        for(int j = 0;j<n;j++)
        {
            int temp;cin>>temp;
            a.push_back(temp);
        }
        vector<pair<int,int>>que;
        int mxround = INT_MIN;
        for(int j = 0;j<q;j++)
        {
            int id,round;cin>>id>>round;
            cin>>id>>round;
            que.push_back({round,id});
            mxround = max(mxround,round);
        }
        for(int j = 0;j<n;j++)
        {
            dq.push_back({i+1,{a[i],0}});
        }
        SORT(que);
        int totround = 0;
        for(int j = 0;j<que.size();j++)
        {
            for(;totround<=que[i].first;totround++)
            {
                if(dq.front().second.first > dq.front()+1)
            }
        }
        // google(i);
    }

    return 0;
}