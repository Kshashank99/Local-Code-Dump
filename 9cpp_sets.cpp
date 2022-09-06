// sets and unordered sets

#include <bits/stdc++.h>
using namespace std;
void print(set<string> &s)
{
    for (string value : s)
    {
        cout << value << endl;
    }
}
int main()
{
    set<sting> s;
    s.insert("abc"); // log(n)
    s.insert("absdvc");
    s.insert("a235bc");
    // use s.find to get the keys
    auto it = s.find("abc"); // log(n)
    if (it != s.end())
    {
        // erase can take both string also an iterator
        s.erase(it);
    }
    print(s);
}
