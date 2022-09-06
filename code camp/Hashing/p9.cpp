#include <bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll> solve(vector<ll> &v1, int n, int w)
{
    vector<ll> ans;
    unordered_map<ll, ll> s;
    // s.insert({v1[0], 0});
    for (int i = 0; i < n - 2; i++)
    {
        ll current_sum = w - v1[i];
        for (int j = i + 1; j < n; j++)
        {
            if (s.find(current_sum - v1[j]) != s.end())
            {

                ans.push_back(i + 1);
                ans.push_back(s[current_sum - v1[j]] + 1);
                ans.push_back(j + 1);
                return ans;
            }
            s.insert({v1[j], j});
        }
    }
    for (auto x : s)
    {
        cout << x.first << " " << x.second << endl;
    }
    sort(ans.begin(), ans.end());
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
        int x;
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