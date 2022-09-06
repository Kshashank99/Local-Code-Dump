#include <bits/stdc++.h>
using namespace std;
 
int main()  
{   
    int t;
    cin>>t;
    while(t--){
        int x;
        int sum=0;
        cin>>x;
        int a[x];
        for(int i=0;i<x;i++){
            cin>>a[i];
        }
        for(int i=0;i<x;i++){
            int sum+=a[i];
        }
        cout<<sum<<endl;
    }
}  