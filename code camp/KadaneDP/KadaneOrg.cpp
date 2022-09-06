#include <bits/stdc++.h>

using namespace std;

int kadane(vector<int> &v)
{
    int currentSum = v[0], ans = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        currentSum = max(currentSum + v[i], v[i]);
        ans = max(ans, currentSum);
    }
    return ans;
}
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    cout << kadane(v);
}