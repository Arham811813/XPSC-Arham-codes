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
        int n,k;
        cin>>n>>k;
        if(k == 0){
            for(int i = n ; i > 0; i--){
                cout<<i<<" ";
            }
            nel;
        }else if(k == n-1){
            for (int i = 1; i <= n; i++)
            {
                cout<<i<<" ";
            }
            nel;
        }else{
            for (int i = n - k; i <= n; i++)
            {
                cout<<i <<" ";
            }
            for (int i = n - (k + 1); i > 0; i--)
            {
                cout<<i<<" ";
            }
            nel;
        }
    }
    
    return 0;
}