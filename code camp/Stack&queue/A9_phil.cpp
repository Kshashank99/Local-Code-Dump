#include <bits/stdc++.h>

using namespace std;
#define ll long long

vector<int> solve(vector<int> tile[],int q){
    vector<int> ans;
    stack<int> stk;
    for(int i=0;i<q;i++){
        if(tile[i][0]==0){
            stk.pop();
        }
        else if(tile[i][0]==1){
            stk.push_back(tile[i])
        }
    }

}
int main()
{
    int q;
    cin >> q;
    vector<int> tile[q];
    for (int i = 0; i < q; i++)
    {
        int x;
        cin >> x;
        if (x == 0 or x == 2)
        {
            tile[i].push_back(x);
        }
        else
        {
            int y;
            cin >> y;
            tile[i].push_back(x);
            tile[i].push_back(y);
        }
    }
    vector<int> soluchan = solve(tile);
    for (auto x : soluchan)
        cout << x << " ";
}