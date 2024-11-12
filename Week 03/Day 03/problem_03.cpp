#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    map<int,int>mp,pm;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        if(mp.find(val) == mp.end()){
            mp[val] = 1;
        }else{
            mp[val]++;
        }
    }
    for (int i = 0; i < m; i++)
    {
        int val;
        cin>>val;
        if(pm.find(val) == pm.end()){
            pm[val] = 1;
        }else{
            pm[val]++;
        }
    }
    long long count = 0;
    for(auto [x,y] : pm){
        if(mp.find(x) != mp.end()){
            count+=(1LL *mp[x]*y);
        }
    }
    cout<<count<<nl;
    return 0;
}