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
        int n,m;
        cin>>n>>m;
        if( n > 0 && m > 0){
           n%=3;
           m%=3;
           if(n == 0){
            cout<<m<<nl;
           }else if(m == 0){
            cout<<n<<nl;
           }else{
            cout<<min(n,m)<<nl;
           }
        }else if(n == 0 && m > 0){
            m%=3;
            cout<<m<<nl;
        }else{
            n%=3;
            cout<<n<<nl;
        }
    } 
    return 0;
}