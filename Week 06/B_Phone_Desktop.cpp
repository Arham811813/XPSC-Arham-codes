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
        int n,m,ans = 0,sn = 15;
        cin>>n>>m;
        m*=4;
        while (1)
        {
            if(n == 0 && m == 0){
                break;
            }
            int to = 15;
            if(m >= 8){
                m-=8;
                to-=8;
            }else if(m != 0){
                m-=4;
                to-=4;
            }
            if(to < n){
                n-=to;
            }else{
                n = 0;
            }
            ans++;
        }
        cout<<ans<<nl;
        
    }
    return 0;
}