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
    sort(v.begin(),v.end());
    while (q--)
    {
        int val;
        cin>>val;
        bool f = false;
        int l = 0,r = n-1,mid = (l+r)/2;
        while (l <= r)
        {
            if(val == v[mid]) {
                f = true;
                break;
            }

            if(val > v[mid]) {
                l = mid + 1;
            }else{
                r = mid - 1;
            }
            mid = (l+r)/2;
        }
        cout<<(f?"YES\n":"NO\n");
    }
    
    return 0;
}