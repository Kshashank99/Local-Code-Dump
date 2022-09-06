#include <bits/stdc++.h>

using namespace std;
const int maxn = 100;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int N;
    cin >> N;
    int Mtx[N][N];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            cin >> Mtx[i][j];
        }
    }
    vector<int> adjLst[maxn];
    for (int i = 1; i <= N; i++)
    {
        for (int j = 1; j <= N; j++)
        {
            if (Mtx[i][j] == 1)
            {
                adjLst[i].push_back(j);
            }
        }
    }
    for (int i = 1; i <= N; i++)
    {
        cout << i << ": ";
        if (adjLst[i].empty())
        {
            cout << endl;
        }
        else
        {
            for (int &x : adjLst[i])
            {
                cout << x << " ";
            }
        }
        cout << endl;
    }
}