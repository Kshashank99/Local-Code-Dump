#include <bits/stdc++.h>
using namespace std;

int main()
{
    unordered_set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(5);
    s.insert(10);

    auto it = s.begin();
    // auto it = s.end();
    // cout << *it << endl;

    // cout << *(s.find(11)) << endl;
    int key = 1;
    // s.erase(1);
    if (s.find(key) != s.end())
    {
        cout << "found" << endl;
    }
    else
    {
        cout << "not found" << endl;
    }
    // for (it; it < s.size(); it++)
    // {
    //     cout << *it << endl;
    // }
}