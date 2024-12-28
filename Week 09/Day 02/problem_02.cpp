#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        ll g1 = 0,g2 = 0;
        for (int i = 0; i < n; i+=2)
        {
            g1 = __gcd(g1,v[i]);
        }
        for (int i = 1; i < n; i+=2)
        {
            g2 = __gcd(g2,v[i]);
        }
        bool f = true;
        for (int i = 0; i < n; i+=2)
        {
            if(v[i] % g2 == 0) f = false;
        }
        if(f){
            cout<<g2<<nl;
            continue;
        }
        f = true;
        for (int i = 1; i < n; i+=2)
        {
            if(v[i] % g1 == 0) f = false;
        }
        if(f){
            cout<<g1<<nl;
            continue;
        }
        cout<<0<<nl;
    }
    return 0;
}