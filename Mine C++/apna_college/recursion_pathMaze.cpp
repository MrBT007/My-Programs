// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countPathMaze(int n , int s , int e)
{
    if (s == n-1 && e == n-1)
    {
        return 1;
    }
    if (s>=n || e>= n)
    {
        return 0;
    }

    return countPathMaze(n,s+1,e) + countPathMaze(n,s,e+1);
    
    
}

int main()
{
    int n , starting , ending;
    cin>>n>>starting>>ending;
    cout<<countPathMaze(n,starting,ending);
    return 0;
}