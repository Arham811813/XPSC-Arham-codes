#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
bool chk (ll x){
    if(x == 1) return 0;
    for (ll i = 2; i * i <= x; i++)
    {
        if(x % i == 0) return 0;
    }
    return 1;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    if(chk(n)) {
       cout<<1<<"1"<<nl; 
    } else {
        if(n % 2LL == 0) cout<<2<<nl;
        else{
            if(!chk(n - 2)) cout<<3<<nl;
            else cout<<2<<nl;
        }
    }
    return 0;
}