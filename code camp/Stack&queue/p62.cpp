#include <bits/stdc++.h>

using namespace std;
#define ll long long
vector<ll int> NGL(vector<ll int> &arr, int n)
{
    stack<ll int> stk;
    vector<ll int> v;
    for (ll int i = 0; i < n; i++)
    {
        while (stk.size() > 0 && stk.top() <= arr[i])
        {
            stk.pop();
        }
        if (stk.empty())
        {
            v.push_back(-1);
            // cout << v[i] << endl;
        }

        else
        {
            v.push_back(stk.top());
        }

        stk.push(arr[i]);
    }
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll int> person;
    for (int i = 0; i < n; i++)
    {
        ll int x;
        cin >> x;
        person.push_back(x);
    }
    vector<ll int> ans = NGL(person, n);
    for (auto it : ans)
    {
        cout << it << " ";
    }
    return 0;
}