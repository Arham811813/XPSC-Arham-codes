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
        map<int,int>v;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            v[val]++;
        }
        if(v.size() == 1){
            if(v.find(0) == v.end()){
                cout<<0<<nl;
            }else{
                cout<<1<<nl;
            }
        }else{
            if(v.find(0) == v.end()){
                cout<<0<<nl;
            }else{
                if(v[0] - 1 == n - v[0]){
                    cout<<0<<nl;
                }else if(v[0] <= n - v[0]){
                    cout<<0<<nl;
                }else{
                    
                    if (v.size() == 2)
                    {
                        int l,m;
                        for(auto [x,y] : v){
                            l = x,m = y;
                        }
                        if(v[0] > m){
                            if(l == 1){
                                cout<<2<<nl;
                            }else{
                                cout<<1<<nl;
                            }
                        }
                        continue;
                    }
                    v.erase(0);
                    vector<int>s;
                    set<int>vv;
                    int tra = -1;
                    for(auto [x,y] : v){
                        for (int i = 0; i < y; i++)
                        {
                            s.push_back(x);
                        }
                    }
                    sort(s.rbegin(),s.rend());
                    vv.insert(s[0]);

                    for (int i = 1; i < s.size(); i++)
                    {
                        vv.insert(s[i] + s[i-1]);
                    }
                    int ans = 1;
                    while (1)
                    {
                        if(vv.find(ans) == vv.end()) break;
                        ans++;
                    }
                    cout<<ans<<nl;
                }
            }
        }
    }
    
    return 0;
}