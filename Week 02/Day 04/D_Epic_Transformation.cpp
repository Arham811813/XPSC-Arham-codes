#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        map<int,int>m;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            m[val]++;
        }
        priority_queue<int>p;
        for(auto [x,y] : m){
            p.push(y);
        }
        while (!p.empty())
        {
            int val = p.top();
            p.pop();
            if(p.empty()){
                p.push(val);
                break;
            } 
            int val2 = p.top();
            p.pop();
            val--;
            val2--;
            if(val){
                p.push(val);
            }
            if(val2){
                p.push(val2);
            }
        }
        int ans = 0;
        while (!p.empty())
        {
            ans+=p.top();
            p.pop();
        }
        cout <<ans<<nl;
    }
    
}