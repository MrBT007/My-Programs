/*
    ॐ श्री गणेशाय नम:
    ॐ नमः शिवाय
    જય ભૂત દાદા

    Name : Bhut Tushar
*/

#include <bits/stdc++.h>

#define ll long long
#define vll vector<ll>
#define mp make_pair
#define pb push_back
#define ppb pop_back
#define fi first
#define se second
#define mod 1000000007
#define all(x) (x).begin(), (x).end()
#define SORT(v) sort(all(v))
#define FASTIO ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL)
using namespace std;

/* ========== YOUR CODE HERE ========= */

int main()
{
    cout<<"Enter number of pages\n";
    ll noOfPages;cin>>noOfPages;
    vector<int>pages(noOfPages);
    for (int i = 0; i < noOfPages; i++)
    {
        cin>>pages[i];
    }
    cout<<"Enter number of Frames\n";
    ll frames;cin>>frames;
    vector<int>frameVector(frames,-1);
    int frameNo = 0;
    ll countHit = 0;
    ll countPageFault = 0;
    for(int i = 0;i<noOfPages;i++)
    {
        if(frameNo>=frames)
        {
            frameNo = 0;
        }
        bool found = false;
        for(int j = 0;j<frames;j++)
        {
            // Hit moment
            if(pages[i] == frameVector[j])
            {
                found = true;
                break;
            }
        }
        if(found)
        {
            countHit++;
        }
        else
        {
            countPageFault++;
            frameVector[frameNo] = pages[i];
            frameNo++;
        }
    }
    cout<<"\nTotal Number of Pages is "<<noOfPages<<"\n";
    cout<<"Total Number of Frames is "<<frames<<"\n";
    cout<<"Total hit is "<<countHit<<"\n";
    cout<<"Total Page Fault is "<<countPageFault<<"\n";
    cout<<"Hit Ratio is "<< (countHit*1.0/noOfPages)<<"\n";
    cout<<"Miss Ratio is "<< (countPageFault*1.0/noOfPages)<<"\n";

    return 0;
}