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
        int n,te,q;
        cin>>n>>te>>q;
        vector<int>ts(te);
        vector<int>ans;
        for (int i = 0; i < te; i++)
        {
            cin>>ts[i];
        }
        sort(ts.begin(),ts.end());
        while (q--)
        {
            int val;
            cin>>val;
            auto in = upper_bound(ts.begin(),ts.end(),val);
            if(in != ts.end()){
                int i = in - ts.begin();
                if(i != 0) {
                    int m1 =ts[i-1],m2 = ts[i];
                    int mid = (m1+m2)/2;
                    mid = min(abs(m1-mid),abs(m2-mid));
                    ans.push_back(mid);
                }else{
                    ans.push_back(abs(ts[i] - 1));
                }
            }else{
                ans.push_back(n - ts.back());
            }   
        }
        for(int i: ans) cout<<i<<nl;
    }
    return 0;
}