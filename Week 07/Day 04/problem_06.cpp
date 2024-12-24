#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m,k,m1,ans = 0,maxele = 0;
    cin>>n>>m>>k;
    vector<int>v(m);
    for (int i = 0; i < m; i++)
    {
        cin>>v[i];
        maxele = max(maxele,v[i]);
    }
    cin>>m1;
    maxele = max(maxele,m1);;
    for (int i = 0; i < m; i++)
    {
        int cou = 0;
        for (int j = 0; j < n; j++)
        {
            int val = ((v[i] >> j) & 1) ,val1 = (m1 >> j) & 1;
            if(val != val1) cou++;
        }
        if(cou <= k){
            ans++;
        } 
    }
    cout<<ans<<nl;
    return 0;
}