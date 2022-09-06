// Space complexity - 0(n^2)
#include <bits/stdc++.h>
using namespace std;

const int N = 1e5;
int level[N];
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
    int n, m;
    cin >> n >> m;
    unordered_map<string, vector<pair<string, string>>> adj;
    for (int i = 1; i <= m; i++)
    {
        string u, v, l;
        cin >> u >> v >> l;
        adj[u].push_back(make_pair(v, l));
        // g[y].push_back(x);
    }
    string src, dst;
    cin >> src >> dst;
    unordered_map<string,vector<string>> dist;
    dist[src]={};
    queue<string> q;
    q.push(src);
    while(!q.empty()){
        string node = q.front();
        q.pop();
        for(auto it:adj[node]){
            if(dist[it.firt])
        }
    }    
}
