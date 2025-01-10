#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,q;
    cin>>n>>q;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    while (q--)
    {
        int val,l = 0,r = n - 1,mid = (l + r) / 2,ans = 0;
        cin>>val;
        while (l <= r)
        {
            if(v[mid] <= val){
                ans = mid+1;
            }
            if(v[mid] > val){
                r = mid - 1;
            }else{
                l = mid + 1;
            }
            mid = (l+r)/2;
        }
        cout<<ans<<nl;
    }
    
    return 0;
}