#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {

        int n;
        cin >> n;
        vector<ll> s;
        for (int i = 0; i < n; i++)
        {
            ll x;
            cin >> x;
            s.push_back(x);
        }
        unordered_map<ll, ll> m;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            m[s[i]]++;
        }
        int op = 0;
        for (auto i = m.begin(); i != m.end(); i++)
        {
            if (i->second == 1)
            {
                op = 1;
                break;
            }
        }
        if (op)
        {
            cout << -1 << endl;
        }
        else
        {
            vector<pair<int, int>> v;
            for (int i = 0; i < n; i++)
            {
                v.push_back({s[i], i + 1});
            }
            for (int i = 0; i < n - 1; i++)
            {
                if (v[i].first == v[i + 1].first)
                {
                    swap(v[i], v[i + 1]);
                }
            }
            for (auto i : v)
            {
                cout << i.second << " ";
            }
            cout << "\n";
        }
    }
}