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
        if (n == 2)
        {
            cout <<2<<nl<<1<<" "<<2<<nl;
            continue;
        }
        
        priority_queue<int>e;
        priority_queue<int>o;
        vector<pair<int,int>>v;
        
        for (int i = 1; i <= n; i++)
        {
            if(i % 2 == 0){
                e.push(i);
            }else{
                o.push(i);
            }
        }
        for (int i = 0; i < n-1; i++)
        {
            int ev = -1,od = -1,ev1 = -1,od1 = -1;
            if(!e.empty()){
                ev = e.top();
                e.pop();
            }
            if(!o.empty()){
                od = o.top();
                o.pop();
            }
            if(ev != -1 && od != -1){
                if(ev > od){
                    o.push(od);
                    ev1 = e.top();
                    e.pop();
                    v.push_back({ev,ev1});
                    int val = (ev+ev1)/2;
                    if(val %2 != 0){
                        o.push(val);
                    }else{
                        e.push(val);
                    }
                }else{
                    e.push(ev);
                    od1 = o.top();
                    o.pop();
                    v.push_back({od,od1});
                    int val = (od+od1)/2;
                    if(val %2 != 0){
                        o.push(val);
                    }else{
                        e.push(val);
                    }
                }
            }else if(ev != -1){
                ev1 = e.top();
                e.pop();
                v.push_back({ev,ev1});
                int val = (ev+ev1)/2;
                if(val %2 != 0){
                    o.push(val);
                }else{
                    e.push(val);
                }
            }else{
                    od1 = o.top();
                    o.pop();
                    v.push_back({od,od1});
                    int val = (od+od1)/2;
                    if(val %2 != 0){
                        o.push(val);
                    }else{
                        e.push(val);
                    }
            }
        }
        cout <<e.top()<<nl;
        for(auto [x,y] : v){
            cout<<x<<" "<<y<<nl;
        }
    }
    
    return 0;
}