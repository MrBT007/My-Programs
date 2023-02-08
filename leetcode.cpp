class Solution
{
public:
    typedef long long ll;

    long long minCost(vector<int> &b1, vector<int> &b2)
    {
        map<ll, ll> mp;
        int n = b1.size();
        ll last = b2[n - 1];

        for (int i = 0; i < n; i++)
        {
            mp[b1[i]]++;
            mp[b2[i]]--;
        }

        bool flag = false;
        b1.clear();
        b2.clear();

        ll minId = last;

        for (auto i : mp)
        {
            minId = min(minId, i.first);
            last = abs(i.second);

            if (last % 2)
                flag = true;

            last = i.second;

            if (last > 0)
            {
                last /= 2;

                while (last--)
                    b1.push_back(i.first);
            }
            else if (last < 0)
            {
                last = abs(last) / 2;

                while (last--)
                    b2.push_back(i.first);
            }
        }

        if (flag)
        {
            return -1;
        }

        reverse(b2.begin(), b2.end());

        ll ans = 0;

        for (int i = 0; i < b1.size(); i++)
            ans += min(2*minId, 1ll*min(b1[i], b2[i]));

        return ans;
    }
};