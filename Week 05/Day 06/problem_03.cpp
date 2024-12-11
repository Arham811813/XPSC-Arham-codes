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
        int n,ans = -1;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < 256; i++)
        {
            int sum = 0;
            for (int j = 0; j < n; j++)
            {
                int val = v[j]^i;
                sum^=val;
            }
            if(sum == 0){
                ans = i;
                break;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}