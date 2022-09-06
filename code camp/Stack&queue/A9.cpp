//   MAXIMUM AREA HISTOGRAM(MAH)
#include <bits/stdc++.h>
using namespace std;

vector<int> NSL(int arr[], int n)
{
    vector<int> v;
    stack<pair<int, int>> stk;
    int pseudoIndex = -1;
    for (int i = 0; i < n; i++)
    {
        if (stk.empty())
        {
            v.push_back(pseudoIndex);
        }
        else if (stk.size() > 0 && stk.top().first < arr[i])
        {
            v.push_back(stk.top().second);
        }
        else if (stk.size() > 0 && stk.top().first >= arr[i])
        {
            while (stk.size() > 0 && stk.top().first >= arr[i])
            {
                stk.pop();
            }
            if (stk.size() == 0)
            {
                v.push_back(pseudoIndex);
            }

            else
            {
                v.push_back(stk.top().second);
            }
        }
        stk.push({arr[i], i});
    }

    // for (int i = 0; i < v.size(); i++)
    // {
    //     v[i] = i - v[i];
    // }
    return v;
}
vector<int> NSR(int arr[], int n)
{
    vector<int> v;
    stack<pair<int, int>> stk;
    int pseudoIndex = n;
    for (int i = n - 1; i >= 0; i--)
    {
        if (stk.empty())
        {
            v.push_back(pseudoIndex);
        }
        else if (stk.size() > 0 && stk.top().first < arr[i])
        {
            v.push_back(stk.top().second);
        }
        else if (stk.size() > 0 && stk.top().first >= arr[i])
        {
            while (stk.size() > 0 && stk.top().first >= arr[i])
            {
                stk.pop();
            }
            if (stk.size() == 0)
            {
                v.push_back(pseudoIndex);
            }

            else
            {
                v.push_back(stk.top().second);
            }
        }
        stk.push({arr[i], i});
    }
    reverse(v.begin(), v.end());
    // for (int i = 0; i < v.size(); i++)
    // {
    //     v[i] = i - v[i];
    // }
    return v;
}
vector<int> calWidth(vector<int> left, vector<int> right, int n)
{
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        v.push_back(right[i] - left[i] - 1);
        // cout << v[i] << endl;
    }
    return v;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // int arr[] = {6, 2, 5, 4, 5, 1, 6};
    // int n = sizeof(arr) / sizeof(arr[0]);
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    vector<int> left = NSL(arr, sizeof(arr) / sizeof(arr[0]));
    vector<int> right = NSR(arr, sizeof(arr) / sizeof(arr[0]));
    vector<int> area;
    for (int i = 0; i < n; i++)
    {
        area.push_back((right[i] - left[i] - 1) * arr[i]);
    }
    cout << *max_element(area.begin(), area.end());
}