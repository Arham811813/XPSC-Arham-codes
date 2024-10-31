#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<string>v;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    map<string,int>m;
    vector<string>vv;
    for (auto i = v.rbegin(); i != v.rend(); i++)
    {
        if(m[*i] == 0) {
            m[*i]++;
            vv.push_back(*i);
        }
    }
    for(auto i : vv){
        cout<<i<<nl;
    }
    return 0;
}