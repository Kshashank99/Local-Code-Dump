#include <bits/stdc++.h>

using namespace std;
#define ll long long

void printUnion(int n, int m, vector<ll> v1, vector<ll> v2)
{

    // Defining map container mp
    set<int> s;

    // Inserting array elements in mp
    for (int i = 0; i < n; i++)
        s.insert(v1[i]);

    for (int i = 0; i < m; i++)
        s.insert(v2[i]);
    // cout << "The union set of both arrays is :" << endl;
    for (auto itr = s.begin(); itr != s.end(); itr++)
        cout << *itr
             << " "; // mp will contain only distinct
                     // elements from array a and b
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, m;
    cin >> n >> m;
    vector<ll> v1, v2;
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v1.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        v2.push_back(x);
    }
    printUnion(n, m, v1, v2);
}