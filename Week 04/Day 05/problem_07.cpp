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
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int ans = INT_MAX,l = 0,r = 0,sum = 0;
        while (r < n)
        {
            sum+=v[r];
            if(sum == k) ans = min(ans,n - (r - l + 1));
            while (sum > k)
            {
                sum-=v[l];
                l++;
            }
            if(sum == k) ans = min(ans,n - (r - l + 1));
            r++;
        }
        if(ans == INT_MAX) cout<<-1<<nl;
        else cout<<ans<<nl;
    }
    
    return 0;
}