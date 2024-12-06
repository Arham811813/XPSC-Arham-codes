#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int val;
        cin>>val;
        vector<int>v;
        if(val == 1){
            cout<<1<<nl<<1<<" "<<3<<nl;
            continue;
        }
        int plu = 3,ans ;
        if(val % 2 != 0){
            ans = (val/2)+1;
        }else{
            ans = val/2;
        }
        int l = 1,r = val*3;
        while (l < r)
        {
            v.push_back(l);
            v.push_back(r);
            l+=3;
            r-=3;
        }
        cout<<ans<<nl;
        for(int vl : v)cout<<vl<<" ";
        nel;
    }
    return 0;
}