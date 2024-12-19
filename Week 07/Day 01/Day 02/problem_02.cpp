#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
ll bit_of(ll i,ll n){
    return (n^(1ll<<i));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        ll n;
        cin>>n;
        set<ll>s;
        s.insert(n);
        for (ll i = 0; i < __lg(n); i++)
        {
            if(n>>i & 1){
                ll val = bit_of(i,n);
                if(val){
                    s.insert(val);
                }
            }
        }
        cout<<s.size()<<nl;
        for(auto x: s) cout<<x<<" ";
        nel;
    }
    return 0;
}