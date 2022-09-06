#include <bits/stdc++.h>

using namespace std;

#define ll long long
void lr(vector<int> &v, int n, int k)
{
    int mod = k % n;
    for (int i = 0; i < n; i++)
        cout << (v[(mod + i) % n]) << " ";

    cout << "\n";
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    int k;
    cin >> n >> k;
    vector<int> a;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    lr(a, n, k);
}