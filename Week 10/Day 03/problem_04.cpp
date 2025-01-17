#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n,q;
        cin>>n>>q;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.rbegin(),v.rend());
        for (int i = 1; i < n; i++)
        {
            v[i] = v[i] + v[i - 1]; 
        }
        while (q--)
        {
            int val;
            cin>>val;
            cout<<(lower_bound(v.begin(),v.end(),val) != v.end()?(lower_bound(v.begin(),v.end(),val) - v.begin()) + 1 : -1)<<nl;
        }
    }
    return 0;
}