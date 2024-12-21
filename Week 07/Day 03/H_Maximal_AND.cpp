#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n,k,ans = 0;
        cin>>n>>k;
        vector<int>v(n),orr(31);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j <= 30; j++)
            {
                if((v[i] >> j) & 1){
                    orr[j]++;
                }
            }
        }
        for (int j = 30; j >= 0; j--)
        {
            if(orr[j] == n){
                ans+=(1LL << j);
            }else{
                int need = n - orr[j];
                if(k >= need) {
                    ans+=(1LL << j);
                    k-=need;
                }

            }
        }
        cout<<ans<<nl;
    }
    return 0;
}