#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin >> n;
    ll int arr[n][n];
    ll int arr2[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    for (ll int i = 0; i < n; i++)
    {
        for (ll int j = 0; j < n; j++)
        {
            arr2[j][i] = arr[i][j];
        }
    }
    for (ll int i = n - 1; i >= 0; i--)
    {
        for (ll int j = 0; j < n; j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}