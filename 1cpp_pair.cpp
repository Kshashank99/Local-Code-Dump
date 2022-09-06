// pair (data_type1, data_type2) Pair_name
// make_pair() : This template function allows to create a value pair without writing the types explicitly. 
// operators(=, ==, !=, >=, <=) : We can use operators with pairs as well. 
// swap : This function swaps the contents of one pair object with the contents of another pair object. The pairs must be of same type. 
// pair1.swap(pair2) ;
#include <bits/stdc++.h>
using namespace std;

int main()
{
    pair<int, string> p;
    // p = make_pair(2, "abc");
    p = {2, "abc"};
    // to copy 1 pair to another
    pair<int, string> p1 = p;
    // Note here p is copied by value not by reference therefoer u wont be able to cha nge the value of p by pq eg.
    p1.first = 3; // it wont work
    // but if u do
    pair<int, string> &p2 = p;
    p2.first = 3; // 3 abc
    cout << p.first << " " << p.second << endl;

    // pair is generally used to maintain relation between arrays for eg.
    pair<int, int> p_arr[3];
    p_arr[0] = {1, 2};
    p_arr[1] = {0, 23};
    p_arr[2] = {7, 9};
    swap(p_arr[0], p_arr[2]);
    for (int i = 0; i < 3; i++)
    {
        cout << p_arr[i].first << "" << p_arr[i].second << endl;
    }
}