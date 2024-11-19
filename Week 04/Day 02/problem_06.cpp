#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,s;
    cin>>n>>s;
    vector<long long>v(n);
    multiset<long long>ml;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int l = 0,r = 0;
    long long ans = 0;
    while (r < n)
    {
        ml.insert(v[r]);
        long long mx = *ml.rbegin(),mn = *ml.begin();
        if(mx - mn <= s){
            ans+=(r-l+1);
        }else{
            while (l <= r)
            {
                if (*ml.rbegin() - *ml.begin() <= s) break;
                ml.erase(ml.find(v[l]));
                l++;
            }
            if (*ml.rbegin() - *ml.begin() <= s)
            {
                ans+=(r-l+1);
            }
        }
        r++;
    }
    cout<<ans<<nl;
    return 0;
}