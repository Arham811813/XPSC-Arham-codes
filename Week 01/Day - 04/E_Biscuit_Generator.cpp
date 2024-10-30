#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b,t,ans = 0;
    cin>>a>>b>>t;
    for (int i = 1; i <= 20 ; i++)
    {
        if (a*i <= t)
        {
            ans +=b;
        }
    }
    cout <<ans<<nl;
    return 0;
}