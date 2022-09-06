#include <bits/stdc++.h>
using namespace std;

const int MAXN = 4 * (1e4);
vector<int> adj[MAXN + 5];
void bfs(int src, vector<int> &dis)
{
    dis[src] = 0;
    queue<int> q;
    q.push(src);
    while (!q.empty())
    {
        int node = q.front();
        q.pop();
        for (auto i : adj[node])
        {
            // cout << i << " ";
            if (dis[i] == -1)
            {
                dis[i] = dis[node] + 1;
                q.push(i);
                // vis[i] = 1;
            }
        }
    }
}

int main()
{
    int c1, c2, c3, n, m;
    cin >> c1 >> c2 >> c3 >> n >> m;
    // vector<int> adj[n];
    for (int i = 0; i < m; i++)
    {
        int u, v;
        cin >> u >> v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }

    vector<int> mn(n + 1, -1);
    vector<int> f(n + 1, -1);
    vector<int> hm(n + 1, -1);
    bfs(1, mn);
    bfs(2, f);
    bfs(n, hm);
    int ans=2e9;
    for (int i = 1; i <= n; i++)
    {
        ans = min(ans, (c1 * mn[i]) + (c2 * f[i]) + (c3 * hm[i]));
    }
    // vector<vector<int>> dist(3, vector<int>(n + 1, -1));
    // bfs(1, dist[0]);
    // bfs(2, dist[1]);
    // bfs(n, dist[2]);
    // int ans = 2e9;
    // for (int i = 1; i <= n; i++)
    //     ans = min(ans, (c1 * dist[0][i]) + (c2 * dist[1][i]) + (c3 * dist[2][i]));

    cout << ans;
}