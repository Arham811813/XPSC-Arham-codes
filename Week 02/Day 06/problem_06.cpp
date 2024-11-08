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
        int n;
        cin>>n;
        vector<int>v(n);
        set<int>mn;
        set<int>mx;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mn.insert(v[i]);
            mx.insert(-v[i]);
        }
        int l = 0,r = n,ll = -1,rr = -1;
        auto mmx = mx.begin();
        auto minn = mn.begin();
        while (l < r)
        {
            int f = v[l],b = v[r-1];
            // cout <<*minn<<" "<<-*mmx<<nl;
            // cout <<f<<" "<<b<<nl;
            if(f != *minn && f != -*mmx && b != *minn && b != -*mmx){
                ll = l+1;
                rr = r;
                break;
            }else if(f != *minn && f != -*mmx){
                if(rr != -1 &&(v[rr-1] == *minn || v[rr-1] == -*mmx)){
                    ll = -1;
                }
                if(b == *minn){
                    minn++;
                }else{
                    mmx++;
                }
                ll = l+1;
                // cout <<"RR "<<rr;
                // cout <<" LL "<<ll<<nl;
                
                r--;
            }else if(b != *minn && b != -*mmx){
                if(ll != -1 &&(v[ll-1] == *minn || v[ll-1] == -*mmx)){
                    ll = -1;
                }
                if(f == *minn){
                    minn++;
                }else{
                    mmx++;
                }
                rr = r;
                // cout <<"LL "<<ll;
                // cout <<" RR "<<rr<<nl;
                l++;
            }else{
                if(ll != -1) ll = -1;
                if(rr != -1) rr = -1;
                // cout <<"LL "<<ll;
                // cout <<" RR "<<rr<<nl;
                minn++;
                mmx++;
                l++;
                r--;
            }
        }
        if(ll != -1 && rr != -1){
            cout <<ll<<" "<<rr<<nl;
        }else{
            cout<<-1<<nl;
        }
    }
    
    return 0;
}