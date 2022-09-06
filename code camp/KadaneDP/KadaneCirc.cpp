#include <bits/stdc++.h>

using namespace std;

int kadaneCirc(vector<int> &v)
{
    int sum = v[0], cr_min = v[0], cr_max = v[0], g_max = v[0], g_min = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        cr_max = max(cr_max + v[i], v[i]);
        g_max = max(cr_max, g_max);
        sum += v[i];
    }
    for (int i = 1; i < v.size(); i++)
    {
        cr_min = min(cr_min + v[i], v[i]);
        g_min = min(cr_min, g_min);
    }
    // cout << "g-min"
    //      << " " << g_min << endl;
    // cout << "g-max"
    //      << " " << g_max << endl;
    // cout << "cr-min"
    //      << " " << cr_min << endl;
    // cout << "cr_max"
    //      << " " << cr_max << endl;
    // cout << "Total_sum"
    //      << " " << sum << endl;
    if (sum == g_min)
        return g_max;
    else
        return max(g_max, sum - g_min);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << kadaneCirc(v);
}