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
        int n,k;
        cin>>n>>k;
        string a;
        cin>>a;
        int r = 0,l = 0,ans = INT_MAX,v = 0;
        while (l < a.size()) {
            if (a[l] == 'W') v++;
            if(l-r+1 == k){
                if (v == 0){
                    ans = 0;
                    break;
                }else ans = min(ans,v);
                if(a[r] == 'W') v--;
                r++;
            }
            l++;
        }
        cout<<ans<<nl;
    }
    return 0;
}