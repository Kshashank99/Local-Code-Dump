#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
    vector<pair<int,int>> vp;
    for(int i=0;i<t;i++){
        int a,b;
        scanf("%d %d",&a,&b);
        vp.push_back({a,b});
    }
    sort(vp.begin(),vp.end());
    long long int cnt=0;
    for(auto it:vp){
        if(it.first>cnt){
            cnt=it.first;
        }
        cnt+=it.second;
    }
    printf("%lld",cnt);
    return 0;
}