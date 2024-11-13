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
        int n,count = 0;
        cin>>n;
        vector<int>v(n);
        map<int,int>m;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        for (int i = n-1; i >= 0; i--)
        {
            if(m.find(v[i]) != m.end()){
                count = i+1;
                break;
            }else{
                m[v[i]]++;
            }
        }
        cout<<count<<nl;
    }
    
    return 0;
}