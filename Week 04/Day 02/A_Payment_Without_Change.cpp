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
        long long a,b,n,s;
        cin>>a>>b>>n>>s;
        if(s / n <= a){
            if(s % n <= b){
                cout<<"YES\n";
            }else{
                cout<<"NO\n";
            }
        }else{
            bool f = false;
            long long rs = a*n;
            if(s - rs < b) f = true;
            else{
                s-=b;
                if(s <= 0){
                   f = true;
                }else if(s % n == 0 && s / n <= a){
                    f = true;
                }
            }
            if(f) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }
    
    return 0;
}