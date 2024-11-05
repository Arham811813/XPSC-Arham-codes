#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>v(n),ans(n);
    map<int,int>mm;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int count = 0;
    for (int i = n-1; i >= 0; i--)
    {
        if(mm[v[i]] == 0){
            count++;
            ans[i] = count;
            mm[v[i]] = 1;
        }else{
            ans[i] = count;
        }
    }
    while (m--)
    {
        int i;
        cin>>i;
        cout<<ans[i-1]<<nl;;
    }
    
    return 0;
}
