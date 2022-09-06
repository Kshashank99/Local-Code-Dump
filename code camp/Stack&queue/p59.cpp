#include <bits/stdc++.h>

using namespace std;
#define ll long long

vector<int> solve(vector<char> &brackets)
{
    int n = brackets.size();
    vector<int> ans(n, -1);
    stack<pair<char, int>> stk;
    for (int i = 0; i < n; i++)
    {
        if (stk.empty())
        {
            stk.push({brackets[i], i});
        }
        else if (stk.top().first == '(' and brackets[i] == ')')
        {
            ans[i] = stk.top().second;
            ans[stk.top().second] = i;
            stk.pop();
        }
        else
        {
            stk.push({brackets[i], i});
        }
    }

    return ans;
}

int main()
{
    string s;
    cin >> s;
    vector<char> brackets;
    for (int i = 0; i < s.size(); i++)
    {
        brackets.push_back(s[i]);
    }
    vector<int> soluchan = solve(brackets);
    for (auto x : soluchan)
        cout << x << " ";
}