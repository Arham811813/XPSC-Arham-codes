#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
ll lcm(ll a,ll b){
    return ((a / __gcd(a,b))*b);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,a,b,q,p;
    cin>>n>>a>>b>>p>>q;
    ll c1 = (n/a),c2 = (n/b),ove = n / lcm(a,b);
    c1-=ove,c2-=ove;
    c1*=p,c2*=q,ove*=max(p,q);
    cout<<c1+c2+ove<<nl;
    return 0;
}