#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
bool cmp(pair<int,char> a,pair<int,char> b){
    return a.first < b.first;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        string S;
        cin>>S;
        vector<pair<int,char>>c,s,ans;
        for (int i = 0; i < S.size(); i++) {
            if(S[i] != 'B' && S[i] != 'b') {
                if ('a' <= S[i] && S[i] <= 'z')
                {
                    s.push_back({i,S[i]});
                }else{
                    c.push_back({i,S[i]});
                }
            }else{
                if(S[i] != 'b'){
                    if(!c.empty()){
                        c.pop_back();
                    }
                }else{
                    if(!s.empty()){
                        s.pop_back();
                    }
                }
            }
        } 
        for(auto[x,y] :s){
            ans.push_back({x,y});
        }
        for(auto[x,y] :c){
            ans.push_back({x,y});
        }
        sort(ans.begin(),ans.end(),cmp);
        for(auto[x,y] :ans){
            cout <<y;
        }
        cout <<"\n";
    }
    return 0;
}