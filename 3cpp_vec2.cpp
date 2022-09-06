#include <bits/stdc++.h> 
using namespace std; 
int main() 
{ 
    int t;
    // while(t--){
        int x;
        cin>>x;
        string s;
        cin>>s;
        int sum=0;
        for(int i=0;i<x;i++){
            sum=sum+int(s[i]);
        }
        cout<<sum;
    // }
  return 0; 
}
