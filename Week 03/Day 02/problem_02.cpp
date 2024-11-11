#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>v(n);
    vector<int>v1(m);
    vector<int>ans;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    for (int i = 0; i < m; i++)
    {
        cin>>v1[i];
    }
    int k = 0,j = n,count = 0;
    for (int i = 0; i < m; i++)
    {
        if(k == j){
            ans.push_back(count);
            continue;
        } 
        while (k < j)
        {
            if(v1[i] <= v[k]){
                break;
            }else{
                count++;
                k++;
            }
        }
        ans.push_back(count);
    }
    for(int res : ans){
        cout<<res<<" ";
    }
    return 0;
}