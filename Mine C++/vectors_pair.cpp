// Name : Bhut Tushar

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector <data_type> name(size,value) here value will be same for all elements
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << "\n";

    // 2d vector
    vector<vector<int>> grid(4, vector<int>(3, -1));
    // i still can't understant it

    //Iterator
    vector<int>::iterator it;
    for (it = v.begin(); it != v.end(); it++)
    {
        cout << *it << " ";
    }
    cout << "\n";

    vector<int> v2(3, 25);

    v.swap(v2); // after this all elements of v and v2 are swap each other

    // auto
    for (auto element : v) // auto detect what type of datatype is there
    {
        cout << element << " ";
    }
    cout << "\n";

    // auto
    for (auto element : v2) // auto detect what type of datatype is there
    {
        cout << element << " ";
    }
    cout << "\n";

    // vector <int> v1(5);

    // for (int i = 0; i<5 ; i++)
    // {
    //     cin>>v1[i];
    // }

    // sort(v1.begin(),v1.end()); // sort the array

    // for(auto element : v1)
    // {
    //     cout<<element<<" ";
    // }cout<<"\n";

    //sum of vector
    int sum = accumulate(v.begin(), v.end(), 0);
    cout << sum << "\n"; // --> 75 because the vector is swapped

    int mx = *max_element(v2.begin(), v2.end());
    int mn = *min_element(v2.begin(), v2.end());

    cout << "Max is " << mx << "\n";
    cout << "Min is " << mn << "\n";

    partial_sum(v2.begin(), v2.end(), v2.begin());

    // the belowed is a prefix sum vector
    for (auto element : v2)
    {
        cout << element << " ";
    }
    // Before vector v2 = {1,2,3}
    // After vector v2 = {(1),1+(2),1+2+(3)}

    //pair
    pair<int, char> p;
    p.first = 5;
    p.second = 't';
    // the way to access pair
    return 0;
}