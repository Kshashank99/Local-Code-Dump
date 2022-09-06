// STRING OPERATION
#include <bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s;
    cin >> s;
    ll int m;
    cin >> m;
    int len = s.length();
    if (m > len / 2)
    {
        m = len / 2;
    }

    
    // vector<int> A;
    // unordered_map<int, int> mp;
    // for (int i = 1; i <= s.size(); i++)
    // {
    //     mp[i] = s[i - 1];
    // }
    while (m--)
    {
        int x;
        cin >> x;
        reverse(s.begin() + x - 1, s.end() - x + 1);
    }
    cout << s << endl;
}
