#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n,q;
        cin>>n>>q;
        map<int,int>l,r;
        vector<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            if(l.find(v[i]) == l.end()){
                l[v[i]] = i;
            }
        }
        for (int i = n-1; i >= 0; i--)
        {
            if(r.find(v[i]) == r.end()){
                r[v[i]] = i;
            }
        }
        while (q--)
        {
            int val,val2;
            cin>>val>>val2;
            if(l.find(val) != l.end() && r.find(val2) != r.end()){
                if(l[val] < r[val2]){
                    cout <<"YES\n";
                }else{
                    cout<<"NO\n";
                }
            }else{
                cout<<"NO\n";
            }
        }
        
    }
    
    return 0;
}