#include <bits/stdc++.h>

using namespace std;
#define ll long long

// template <size_t n, size_t m>
// void searchMatrix(ll int (&arr)[n][m], ll int target)
// {
//     int lo = 0;
//     int hi = n * m - 1;
//     while (lo <= hi)
//     {
//         int mid = lo + (hi - lo) / 2;
//         if (arr[mid / m][mid % m] == target)
//         {
//             cout << mid / m << " " << mid % m;
//         }
//         if (arr[mid / m][mid % m] < target)
//         {
//             lo = mid + 1;
//         }
//         else
//         {
//             hi = mid - 1;
//         }
//     }
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll int n, m, q;
    cin >> n >> m >> q;
    ll int arr[n][m];
    // vector<ll int> v;
    for (ll int i = 0; i < n; i++)
    {
        for (ll int j = 0; j < m; j++)
        {
            cin >> arr[i][j];
        }
    }
    while (q--)
    {
        ll int target;
        cin >> target;
        int lo = 0;
        int hi = n * m - 1;
        while (lo <= hi)
        {
            int mid = lo + (hi - lo) / 2;
            if (arr[mid / m][mid % m] == target)
            {
                cout << mid / m << " " << mid % m << endl;
            }
            if (arr[mid / m][mid % m] < target)
            {
                lo = mid + 1;
            }
            else
            {
                hi = mid - 1;
            }
        }
    }
    return 0;
}
