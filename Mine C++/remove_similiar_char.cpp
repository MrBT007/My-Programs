
#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
  string removeChars(string string1, string string2)
  {
    for (int i = 0; i < string1.size(); i++)
    {
      for (int j = 0; j < string2.size(); j++)
      {

        string1.erase(remove(string1.begin(), string1.end(), string2[j]), string1.end());
      }
    }
    return string1;
    // code here
  }
};

int main()
{
  int t = 1;
  // cin>>t;

  while (t--)
  {
    string string1 = "computer";
    string string2 = "cat";
    // cin>>string1>>string2;
    Solution ob;
    cout << ob.removeChars(string1, string2);
  }
  return 0;
}
