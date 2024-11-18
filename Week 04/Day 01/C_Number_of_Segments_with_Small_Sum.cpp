#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    long long n,s,sum = 0;
    cin>>n>>s;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int l = 0,r = 0,ans = 0;
    while (l < n)
    {
        sum+=v[l];
        if(sum <= s){
            ans+=(l-r+1);
        }else{
            while (sum > s && l >= r)
            {
                sum-=v[r];
                r++;
            }
            if(sum <= s){
                ans+=(l-r+1);
            }
        }
        l++;
    }
    cout<<ans<<nl;
    return 0;
}