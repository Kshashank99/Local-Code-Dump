#include <bits/stdc++.h>

using namespace std;
#define ll long long

string solve(vector<ll> &v, int n)
{
    unordered_set<ll> sumset;
    ll sum = 0;
    // Mistake done here
    // for(int i=0;i<n;i++){
    //     sum+=v[i];
    // }
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == 0 || sumset.find(sum) != sumset.end())
        {
            return "YES";
            // break;
        }
        sumset.insert(sum);
    }
    return "NO";
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<ll> v;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v.push_back(x);
    }
    unordered_set<ll> sumset;
    ll sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        if (sum == 0 || sumset.find(sum) != sumset.end())
        {
            cout<< "YES";
            // break;
        }
        sumset.insert(sum);
    }
    cout<< "NO";
}