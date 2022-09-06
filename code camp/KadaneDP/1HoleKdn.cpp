#include <bits/stdc++.h>

using namespace std;

int kadane(vector<int> &v)
{
    int n = v.size();
    int f[n], b[n];
    // int current = v[0], g_max = v[0];

    f[0] = v[0];

    int currentSum = v[0], g_max = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        currentSum = max(currentSum + v[i], v[i]);
        g_max = max(g_max, currentSum);
        f[i] = currentSum;
    }
    currentSum = g_max = b[n - 1] = v[n - 1];
    for (int i = n - 2; i >= 0; i--)
    {
        currentSum = max(currentSum + v[i], v[i]);
        g_max = max(g_max, currentSum);
        b[i] = currentSum;
    }
    int fans = g_max;
    for (int i = 1; i < n - 1; i++)
        fans = max(fans, max(0, f[i - 1]) + max(0, b[i + 1]));
    // In this condition we are checking when removing the ith element
    // so checking the max(0,left)+max(0,right), because maybe left<0 || right<0 so it wont contribute to the answer
    if (fans == 0)
    {
        // if no positive element in array so return max_element
        return *max_element(v.begin(), v.end());
    }
    return fans;
    // return ans;
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