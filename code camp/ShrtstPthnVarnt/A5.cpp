// Space complexity - 0(n^2)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int level[N];
vector<int> g[N];
vector<bool> visited(N + 1, false);

void bfs(vector<int> g[], int n, int src, int dst)
{
    queue<int> q;
    q.push(src);
    visited[src] = true;
    while (!q.empty())
    {
        int cur_v = q.front();
        q.pop();
        // cout << cur_v << " ";
        for (int child : g[cur_v])
        {
            if (!visited[child])
            {
                q.push(child);
                visited[child] = 1;
                level[child] = level[cur_v] + 1;
            }
        }
    }
    if (visited[dst])
    {
        cout << level[dst];
        // break;
    }
    else
    {

        cout << 0;
    }
}
int main()
{
    int c1, c2, c3, n, m;
    cin >> n >> m >> c1 >> c2 >> c3;
    for (int i = 1; i <= m; i++)
    {
        int x, y;
        cin >> x >> y;
        g[x].push_back(y);
        g[y].push_back(x);
    }
    int src, dst;
    cin >> src >> dst;
    bfs(g, n, src, dst);
    // for (int i = 1; i <= n; i++)
    // {
    //     cout << i << ": " << level[i] << endl;
    // }
}
