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
        int n,m;
        cin>>n>>m;
        if(n < m){
            cout<<"NO\n";
            continue;
        }
        if(n == m) {
            cout<<"YES\n";
            continue;
        }
        n-=m;
        if(n%2 == 0){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}