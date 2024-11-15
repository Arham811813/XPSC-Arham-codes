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
        int n,k,sizeb = 0;
        cin>>n>>k;
        string a;
        cin>>a;
        for (int i = 0; i < a.size(); i++)
        {
            if(a[i] == 'B') sizeb++;
        }
        int l =  0,r = 0,ans = 0,b = 0,mx;
        while (l < n)
        {
            if(a[l] == 'B') {
               b++; 
            }
            mx=b;
            if(l-r+1 == k) {
                if(a[r] == 'B'){
                    
                    sizeb-=mx;
                    mx = 0;
                    b = 0;
                    ans++;
                    
                    for (int i = r; i <= l; i++)
                    {
                        a[i] = 'W';
                    }
                    if(r == l)a[r] = 'W';
                }
                r++;
            }
            l++;
            // if(l >= n){
            //     if(mx){
            //         sizeb-=mx;
            //         b = 0;
            //         mx = 0;
            //         ans++;
            //     }
            // }
            if (!sizeb)
            {
                break;
            }
        }
        cout<<ans<<nl;
    }
    return 0;
}