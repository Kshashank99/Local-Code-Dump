//spiral traversal
#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n, m;
    cin >> n >> m;
    ll int arr[n][m];
    ll int arr2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    // for (ll int i = 0; i < n; i++)
    // {
    //     for (ll int j = 0; j < n; j++)
    //     {
    //         arr2[j][i] = arr[i][j];
    //     }
    // }
    for (ll int i = 0; i < n; i++)
    {
        for (ll int j = 0; j < m; j++)
        {
            if (i == 0 || i == n - 1 || j == 0 || j == m - 1)
                cout << arr[i][j] << " ";
        }
        // cout << endl;
    }
}