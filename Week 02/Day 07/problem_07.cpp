#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
bool cmp(pair<int,int> ind ,pair<int,int> ind2){
    return ind.first < ind2.first;
}
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
        deque<int>inp;
        vector<pair<int,int>>like,dis;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }
        string a;
        cin>>a;
        for (int i = 0; i < n; i++)
        {
            if(a[i] == '1'){
                like.push_back({v[i],i});
            }else{
                dis.push_back({v[i],i});
            }
        }
        
        sort(like.begin(),like.end(),cmp);
        sort(dis.begin(),dis.end(),cmp);
        for (int i = 1; i <= n; i++)
        {
            inp.push_back(i);
        }
        for (int i = 0; i < dis.size(); i++)
        {
            auto x = dis[i];
            v[x.second] = inp.front();
            inp.pop_front();
        }
        for (int i = 0; i < like.size(); i++)
        {
            auto x = like[i];
            v[x.second] = inp.front();
            inp.pop_front();
        }
        
        for(int i : v) cout <<i<<" ";
        nel;
        // for(auto [x,y] : like) cout<<x <<" "<<y<<nl;
        // for(auto [x,y] : dis) cout <<x<<" "<<y<<nl;
        // nel;
    }
    
    return 0;
}