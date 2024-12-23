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
        int n;
        cin>>n;
        string a,b;
        cin>>a>>b;
        if(a == b) {
            cout<<"YES\n";
        }else{
            bool f = false;
            int l,r;
            l = r = -1;
            for (int i = 0; i < n; i++)
            {
                if(a[i] == '1'){
                    l = i;
                    break;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if(b[i] == '1'){
                    r = i;
                    break;
                }
            }
            if(l == -1 || r == -1){
                if(r != -1) cout<<"NO\n";
                else cout<<"YES\n";
            }else if (l <= r){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }
    }
    return 0;
}