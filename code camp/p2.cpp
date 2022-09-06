// PRERAJULISATION
#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int d;
    cin >> d;
    vector<ll int> v;
    while (d--)
    {
        ll int x;
        cin >> x;
        v.push_back(x);
    }
    ll int n;
    cin >> n;
    unordered_map<int, int> vp;
    ll int i = 1, index = 1;
    while (index <= n)
    {
        if (i < 10)
        {
            auto temp = find(v.begin(), v.end(), i);
            if (temp != v.end())
            {
                i++;
            }
            else
            {
                vp[index] = i;
                i++;
                index++;
            }
        }
        else
        {
            string s = to_string(i);
            int len = s.size();
            vector<ll int> z;
            for (ll int k = 0; k < len; k++)
            {
                ll int temp = s[k] - 48;
                z.push_back(temp);
            }
            int flag = 0;
            for (auto j : v)
            {
                if (find(z.begin(), z.end(), j) != z.end())
                {
                    i++;
                    flag = 1;
                    break;
                }
            }
            if (flag == 0)
            {
                // cout << "value of i" << i << "<--" << endl;
                vp[index] = i;
                i++;
                index++;
            }
        }
    }
    cout << vp[n] << endl;
}
// for (auto itr = vp.begin(); itr != vp.end(); ++itr)
// {
//     cout << '\t' << itr->first << '\t' << itr->second
//          << '\n';
// }