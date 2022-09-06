// ITERATORS POINT TO THE ELEMENT OF CONTAINERS

#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 3, 1, 5};
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << "";
    }
    cout << endl;
    // iterators are declared with proper data type of that container
    vector<int>::iterator it = v.begin();
    cout << (*(it + 1)) << endl; // 4
    // it++ move to next iterator but it+1 move to next location
    // but in vector it++ and it+1 are same cuz iterator are at same nexlocation
    // in maps and sets iterrators are in discontinous position
    for(int i=v.begin();i!=v.end();i++){
        cout<<(*it)<<endl;
    }
    vector<pair<int,int>> v_p={{1,2},{2,3},{3,4}};
    vector<pair<int,int>> :: iterator it;
    for(it = v_p.begin();it!=v_p.end();it++){
        // cout<<(*it).first<<" "<<(*it).second<<endl;
        cout<<(it->first)<<" "<<(it->second)<<endl;
    }

}