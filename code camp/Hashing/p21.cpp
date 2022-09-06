#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<ll> v;
    vector<ll> ans;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> vt;
    int i = 0, j = 0;
    while (j < v.size())
    {
        vt.push_back(v[j]);
        cout << *(vt.begin()) << endl;
        if (j - i + 1 < k)
        {
            j++;
        }
        else if (j - i + 1 == k)
        {
            // if(vt)
            auto itr = vt.erase(unique(vt.begin(), vt.end()), vt.end());
            vt.resize(std::distance(vt.begin(), itr));
            ans.push_back(vt.size());
            vt.erase(vt.begin());
            j++;
            i++;
        }
    }

    for (int i : ans)
    {
        cout << i << " ";
    }
}