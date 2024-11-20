#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,s;
    cin>>n>>s;
    vector<long long>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int l = 0,r = 0;
    long long  ans = 0,sum = 0;
    while (r < n)
    {
        sum+=v[r];
        if(sum >= s){
            
            while (sum >= s && l <= r)
            {
                ans+=(n - r);
                sum-=v[l];
                l++;
            }
        }
        r++;
    }
    cout<<ans<<nl;
    return 0;
}