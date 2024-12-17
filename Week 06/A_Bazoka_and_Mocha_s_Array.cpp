#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        deque<int>v(n);
        map<int,int>mp;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size() == 1){
            cout<<"YES\n";
            continue;
        }
        while (1)
        {
            if(v.front() < v.back()) break;
            v.push_back(v.front());
            v.pop_front();
        }
        bool f = false;
        for (int i = 0; i < n - 1; i++)
        {
            if(v[i] > v[i + 1]){
                f = true;
                break;
            } 
        }
        cout<<(!f ?"YES\n":"NO\n");
    }
    return 0;
}