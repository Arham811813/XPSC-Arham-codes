#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n,m,ans = -1;
    cin>>n>>m;
    vector<ll>v;
    for (ll i = 1; i * i <= n ; i++)
    {
        if(n%i == 0){
            v.push_back(i);
            if(i != (n/i)){
                v.push_back(n/i);
            }
        }
    }
    sort(v.begin(),v.end());
    if(v.size() < m)cout<<-1<<nl;
    else cout<<v[m-1]<<nl;
    return 0;
}