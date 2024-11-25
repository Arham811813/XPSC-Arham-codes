#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            v[i] = v[i] + i + 1;
        }
        sort(v.begin(),v.end());
        int ans = 0;
        for (int i = 0; i < n; i++)
        {
            if(m - v[i] >= 0){
                ans++;
                m-=v[i];

            }
        }
        cout<<ans<<nl;
    }
    return 0;
}