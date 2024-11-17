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
        int a[n][n-1];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n-1; j++)
            {
                cin>>a[i][j];
            }
        }
        vector<int>ans;
        map<int,pair<int,int>>mp;
        for (int i = 0; i < n; i++)
        {
            if(mp.find(a[i][n-2]) != mp.end()){
                mp[a[i][n-2]].second++;
            }else{
                mp[a[i][n-2]] = {i,1};
            }
        }
        int inpt = -1,ext = -1;
        for(auto [x,y] : mp){
            if(y.second == 1){
                inpt = y.first;
            }else{
                ext = x;
            }
        }
        for (int i = 0; i < n-1; i++)
        {
            ans.push_back(a[inpt][i]);
        }
        ans.push_back(ext);
        for(auto i : ans){
            cout<<i <<" ";
        }
        nel;
    }
    return 0;
}