
#include <bits/stdc++.h>
using namespace std;

void print(vector<int> v)
{
    cout << "size:" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        //v.size() -> O(1)
        cout << v[i] << " ";
    }
    cout << endl;
}

int main()
{
    // tum<> isme pair bhi daal sakte ho jaruri nhi sirf data tyype
    vector<int> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        // push_back always insert value at end with O(1)
        v.push_back(x);
    }
    print(v);
}

// NOTE :- If u declare array or vector locally u cannnot insert more than 10pow5 on online prog websites and if declared globally then limit is 10pow7
// This limit applies for continous mem block and arr and vec both are included in it
