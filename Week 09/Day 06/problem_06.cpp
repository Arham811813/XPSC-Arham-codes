#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
const int  MOD = 1e9+7;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int a,b,ans = 1;
        cin>>a>>b;
        while(b) {
            if(b % 2 != 0){
                ans = (1ll * (ans % MOD)*(a % MOD)) % MOD;
            }
            a = (1ll * a * a) % MOD;
            b>>=1;
        }
        cout<<ans<<nl;
    }
    return 0;
}