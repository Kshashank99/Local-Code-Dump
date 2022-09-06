
#include <iostream.h>
using namespace std;

void print(vector<pair<int, int>> &v)
{
    cout << "size:" << v.size() << endl;
    for (int i = 0; i < v.size(); i++)
    {
        //v.size() -> O(1)
        cout << v[i].first << " " << v[i].second;
    }

    cout
        << endl;
}

int main()
{
    vector<pair<int, int>> v = {{1, 2},
                                {2, 5},
                                {4, 5},
                                {1, 9}};
    // Taking inut vector in pairs
    vector<pair<int, int>> v;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
        // or v.push_back(make_pair(x,y));
    }

    // Arr of vector
    int n1;cin>>n1;
    // here it is an array n1 fixed element whose each element is of type vector
    // u cant simply increase or decrease the size of it
    vector<int> v[n1];
    for (int i = 0; i < n1; i++)
    {
        // here n is size of inside vector like v[0],v[1].....
        int n;
        cin >> n;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin > x;
            v[i].push_back(x);
        }
    }
    // print Arr of vec
    for(int i=0;i<n1;i++){
        print(v[i]);
    }

    // VECTOR OF VECTOR
    int n1;cin>>n1;
    vector<vector<int>> v;
    for (int i = 0; i < n1; i++)
    {
        int n;
        cin >> n;
        vector<int> temp;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin > x;
            temp.push_back(x);
        }
        v.push_back(temp);
    }
     for(int i=0;i<v.size();i++){
        print(v[i]);
    }
    v.push_back(vector<int>());
    print(v); //      size:12   3 3 3 3 3 3 3 3 3 3 7 10
}

// ***NOTE - IN ARRAY OF VECTOR ONLY NO. OF COLUMNS ARE DYNAMIC
// HOWEVER IN VECTORS OF VECTORS BOTH ROW AND COLUMN ARE DYNAMIC