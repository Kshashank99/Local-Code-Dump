#include <bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    double n;
    cin >> n;
    double l = 0, r = n - 1;
    double m = 0;
    while (l + 1 < r)
    {
        int m = l + (r - l) / 2;
        if (pow(m, 2) > n)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << l<<setprecision(6);
    // cout << (5 << 2) << endl;
}