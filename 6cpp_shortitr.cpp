// Range based loop and auto

#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {2, 4, 3, 1, 5};
    // This is range baased loop which iterate through elements of container
    // also note value is copied by value not refernence
    for (int value : v)
    {
        cout << value << " ";
    }
    cout << endl;
    vector<pair<int, int>> v_p = {{1, 2}, {2, 3}, {3, 4}};
    for (pair<int, int> &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
    // to copy by actual value we can write
    for (int &value : v)
    {
        cout << value << " ";
    }

    // ******AUTO keyword******
    for (auto &value : v_p)
    {
        cout << value.first << " " << value.second << endl;
    }
}