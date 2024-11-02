#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    deque<pair<int,bool>>d;
    for (int i = 0; i < n; i++)
    {
        int val ;
        bool f = false;
        cin>>val;
        d.push_back({val,f});
    }
    sort(d.rbegin(),d.rend());
    int count = 0;
    for (int i = 0; i < n; i++) {
        auto [x,y] = d[i];
        if(!y){
            d[i].second = true;
            count++;
            for (int j = i+1; j < n; j++) {
                if(x != d[j].first && !d[j].second) {
                    d[j].second = true;
                    x = d[j].first;
                }
            }
        }
    }
    cout <<count<<nl;
    return 0;
}