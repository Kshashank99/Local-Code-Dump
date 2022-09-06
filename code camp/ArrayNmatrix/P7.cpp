#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n;
    cin >> n;
    ll int arr[n + 1];
    arr[0] = 0;
    for (ll int i = 1; i <= n; i++)
    {
        cin >> arr[i];
        arr[i] += arr[i - 1];
    }

    ll int q, a, b;
    cin >> q;
    for (ll int i = 0; i < q; i++)
    {
        cin >> a >> b;
        cout << arr[b] - arr[a - 1] << endl;
    }
}