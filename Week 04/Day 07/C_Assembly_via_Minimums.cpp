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
    while (t--)
    {
        ll n;
        cin>>n;
        ll l = (n*(n-1))/2;
        set<ll>m;
        map<ll,ll>mp;
        for (int i = 0; i < l; i++)
        {
            ll val;
            cin>>val;
            m.insert(val);
            mp[val]++;
        }
        if(m.size() == 1){
            for (int i = 0; i < n; i++)
            {
                for(auto val : m) cout<<val<<" ";
            }
            nel;
            continue;
        }
        ll check = INT_MIN;
        vector<ll>ans;
        int trk = n-1;
        for(auto i : m){
            while (mp[i] > 0)
            {
                mp[i]-=trk;
                trk--;
                ans.push_back(i);
            }
            
        }
        ll adval = ans.back();
        while (ans.size() != n)
        {
            adval++;
            if(adval > 1000000000){
                ans.push_back(1000000000);
                adval--;
                continue;
            }
            ans.push_back(adval);
        }
        for(ll val : ans) cout<<val <<" ";
        nel;
    }
    return 0;
}