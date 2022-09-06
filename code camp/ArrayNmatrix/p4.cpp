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
    // ll int arr2[n][n];
    for (ll int i = 0; i < n; i++)
    {
        for (ll int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    ll int t = 0, b = n - 1, l = 0, r = m - 1, dir = 0;
    while (l <= r && t <= b)
    {
        if (dir == 0)
        {
            for (ll int i = l; i <= r; i++)
            {
                cout << arr[t][i] << " ";
            }
            t++;
        }
        else if (dir == 1)
        {
            for (ll int i = t; i <= b; i++)
            {
                cout << arr[i][r] << " ";
            }
            r--;
        }
        else if (dir == 2)
        {
            for (ll int i = r; i >= l; i--)
            {
                cout << arr[b][i] << " ";
            }
            b--;
        }
        else if (dir == 3)
        {
            for (ll int i = b; i >= t; i--)
            {
                cout << arr[i][l] << " ";
            }
            l++;
        }
        dir = (dir + 1) % 4;
    }
}