#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    int n, m;
    cin >> n >> m;
    unordered_map<int, vector<int>> adj;
    // vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout << i << "->";
        // for (int j : adj[i])
        // {
        //     cout << j << " ";
        // }
        if (adj[i].size() != 1)
        {
            count++;
        }
        // cout << endl;
    }
    cout << count << endl;
}