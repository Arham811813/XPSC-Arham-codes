#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int s,t;
    cin>>s>>t;
    long long ans = 0;
    bool f = false;
    for (int i = 0; i <= 100; i++)
    {
        for (int j = 0; j <= 100; j++)
        {
            for (int k = 0; k <= 100; k++)
            {
                if(i + j + k <= s && i*j*k <= t){
                    ans++;
                }else{
                    break;
                }
            }
        }
    }
    cout <<ans<<nl;
    return 0;
}