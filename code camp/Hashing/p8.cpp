#include <bits/stdc++.h>

using namespace std;
#define ll long long

vector<ll> solve(vector<ll> v1, int n, int w)
{
    unordered_map<ll, ll> mp;
    vector<ll> ans;
    for (int i = 0; i < n; i++)
    {
        if (mp.find(w - v1[i]) != mp.end())
        {
            ans.push_back(mp[w - v1[i]] + 1);
            ans.push_back(i + 1);
            break;
        }
        mp.insert({v1[i], i});
    }
    return ans;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, w;
    cin >> n >> w;
    vector<ll> v1;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
    }
    vector<ll> ans = solve(v1, n, w);
    if (ans.size())
    {

        for (int x : ans)
        {
            cout << x << " ";
        }
    }
    else
    {
        cout << -1;
    }
}