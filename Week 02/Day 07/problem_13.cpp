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
        int n,m;
        cin>>n>>m;
        string a;
        cin>>a;
        set<int>v;
        for (int i = 0; i < m; i++)
        {
            int val;
            cin>>val;
            v.insert(val);
        }
        vector<char>b(m);
        for (int i = 0; i < m; i++)
        {
            cin>>b[i];
        }
        
        sort(b.rbegin(),b.rend());
        for(auto i: v){
            a[i-1] = b.back();
            b.pop_back();
        }
        cout<<a<<nl;
    }
    
    return 0;
}