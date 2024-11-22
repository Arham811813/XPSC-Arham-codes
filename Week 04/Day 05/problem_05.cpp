#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,k;
    cin>>n>>k;
    vector<int>v(n);
    map<int,int>mp;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    long long ans = 0;
    int l = 0 ,r = 0;
    while (r < n)
    {
        mp[v[r]]++;
        if(mp.size() <= k) ans+=(r - l + 1);
        while (mp.size() > k)
        {
            mp[v[l]]--;
            if(mp[v[l]] == 0) mp.erase(v[l]);
            l++;
            if(mp.size() <= k) ans+=(r - l + 1);
        }
        r++;
    }
    cout<<ans<<nl;
    return 0;
}