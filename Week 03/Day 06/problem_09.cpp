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
        int n;
        cin>>n;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        int l = 0,ans = 0;
        bool f = false;
        while (l < n)
        {
            
            if(v[l] < 0){
                v[l]*=-1;
                if(!f) {
                    ans++;
                    f = true;
                }
            }else if(v[l] > 0) {
                f = false;
            }
            l++;
        }
        long long sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=v[i];
        }
        cout<<sum<<" "<<ans<<nl;
    }
    
    return 0;
}