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
        int n;
        cin>>n;
        vector<long long>v(n),vv(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        vv[0] = v[0];
        for (int i = 1; i < n; i++)
        {
            vv[i] = v[i] + vv[i-1];
        }
        string a;
        cin>>a;
        long long l = 0,r = n - 1,ans = 0;
        while (l < n)
        {
            if(a[l] == 'L')
            {
                while (r >= 0 && a[r] != 'R') r--;
                if(l < r){
                    ans+=(vv[r] - (l > 0 ?vv[l-1] : 0));
                    r--;
                }
            }
            l++;
        }
        cout<<ans<<nl;
    }
    
    return 0;
}