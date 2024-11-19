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
    long long l = 0,r = 0,ans = INT_MAX,sum = 0;
    while (r < n)
    {
        sum+=v[r];
        if(sum >= s){
            while (sum >= s && r >= l)
            {
                ans = min(ans,(r-l+1));
                sum-=v[l];
                l++;
            }
            
        }
        r++;
    }
    if(ans == INT_MAX) cout<<-1<<nl;
    else cout<<ans<<nl;
    return 0;
}