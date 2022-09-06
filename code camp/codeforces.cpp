#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        char c;
        cin >> c;
        if (s.length() <= 2)
        {
            cout << "NO" << endl;
        }
        else if (s[1] == c  s[s.size() - 2] == c || s[0]!=c)
        {
            cout << "NO" << endl;
            cout << "lol" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
}