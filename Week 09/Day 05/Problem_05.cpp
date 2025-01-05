#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
const int MOD = 1e9+7;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        ll n,ans = 1;
        cin>>n;
        for (ll i = 2; i <= n; i++)
        {
            ans = (ans%MOD * i%MOD)%MOD;
        }
        cout<<ans<<nl;
    }
    return 0;
}