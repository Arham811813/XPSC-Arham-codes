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
        int n,k,tmp;
        cin>>n>>k>>tmp;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        long long ans = 0,mx = 0;
        int l = 0,r = 0;
        while (l < n)
        {
            if(v[l] <= tmp) mx++;
            if (l == n-1 || v[l] > tmp){
                if(mx >= k){
                    mx = mx - k +1;
                    mx = (mx*(mx + 1LL))/2LL;
                    ans+=mx;
                    
                }
                mx = 0;
            }
            l++;
        }
        cout<<ans<<nl;
    }
    
    return 0;
}