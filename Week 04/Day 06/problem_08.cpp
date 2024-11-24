#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        long long n,k;
        cin>>n>>k;
        vector<long long>f(n),h(n);
        for (int i = 0; i < n; i++)
        {
            cin>>f[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin>>h[i];
        }
        long long l = 0,r = 0,sum = 0,ans = 0;
        bool ff = false;
        while (r < n)
        {
            if(l == r){
                sum+=f[r];
                if(sum <= k) ans = max(ans,1LL);
                // cout<<"1 "<<ans<<" "<<sum<<nl;
                r++;
                continue;
            }
            if(h[r-1] % h[r] == 0){
                sum+=f[r];
            }else{
                l = r;
                sum = 0;
                sum+=f[r];
                if(sum <= k) ans = max(ans,1LL);
                // cout<<"2 "<<ans<<" "<<sum<<nl;
                r++;
                continue;
            }
            if(sum <= k){
                ans = max(ans,r - l + 1);
                // cout<<"3 "<<ans<<" "<<sum<<nl;
            }else{
                while (sum > k && r >= l)
                {
                    sum-=f[l];
                    l++;
                }
                if(sum <= k){
                    ans = max(ans , r - l + 1);
                    // cout<<"3 "<<ans<<" "<<sum<<nl;
                }
            }
            r++;
        }
        cout<<ans<<nl;
    }
    
    return 0;
}