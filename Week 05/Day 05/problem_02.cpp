#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n,sum = 0;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            sum^= v[i];
        }
        int ans = sum;
        for (int i = 0; i < n; i++)
        {
            ans = min(ans,sum^v[i]);
        }
        cout<<ans<<nl;
    }
    return 0;
}