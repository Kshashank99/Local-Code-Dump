// Range based loop and auto

#include <bits/stdc++.h>
using namespace std;
void print(map<int, string> &m)
{
    cout << m.size() << endl;
    for (auto &pr : m)
    {
        cout << pr.first << " " << pr.second << endl; // acesssing the element //time complexity is also log(n)
    }
}

int main()
{
    map<int, string> m;
    m[1] = "abc"; // O(log(n))
    m[5] = "cdc";
    m[3] = "acd";
    m["abcd"]= "abcd"; // s.size()*log(n)

    m.insert({4, "shasahnkj"});

    auto it = m.find(3); // O(log(n)) all red black trees habe O(log(n)) operation
    // never give or pass an iterator to m.erase() which does not exist
    // always use safety check to use m.erase
    if (it != m.end())
    {
        m.erase(it);
    }
    m.erase(5); //log(n)
    if (it == m.end())
    {
        cout << "NO value";
    }
    else
    {
        cout << (*it).first << " " << (*it).second << endl;
    }
    // m.clear() erase app value in map
    // map<int, string>::iterator it;
    // for (it = m.begin(); it != m.end(); it++)
    // {
    //     cout << it->first << " " << it->second << endl;
    // }
    print(m);
}
// ordered maps uses inbuilt red black tress for comparison 
// everry key on map is unique , u cant dulpicate if u do it get replaced with last updated value
// time complexity to insert and access value of map is O(log(n)
// ))