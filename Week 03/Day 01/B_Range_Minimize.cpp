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
        deque<int>v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end()); 
        int ans = INT_MAX;
        int v1,v2;
        v1 = v.front();
        v.pop_front();
        v2 = v.back();
        v.pop_back();
        ans = min(ans,v.back()-v.front());
        v.push_back(v2);
        v.push_front(v1);
        v1 = v.front();
        v.pop_front();
        v2 = v.front();
        v.pop_front();
        ans = min(ans,v.back()-v.front());
        v.push_front(v2);
        v.push_front(v1);
        v1 = v.back();
        v.pop_back();
        v2 = v.back();
        v.pop_back();
        ans = min(ans,v.back()-v.front());
        cout<<ans<<nl;
    }
    return 0;
}