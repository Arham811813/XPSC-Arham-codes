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
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int l = 0,r = 0,ans = 0;
    long long sum = 0;
    while (l < n)
    {
        sum+=v[l];
        if(s >= sum){
            ans = max(ans,l - r + 1);
        }else{
            sum-=v[r];
            r++;
        }
        l++;
    }
    cout<<ans<<nl;
    return 0;
}