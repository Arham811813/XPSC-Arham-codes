#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<string,int>mp;
    vector<string>v,v2;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin>>a;
        v.push_back(a);
    }
    reverse(v.begin(),v.end());
    for (int i = 0; i < n; i++)
    {
        if(mp.find(v[i]) == mp.end()){
           v2.push_back(v[i]);
           mp[v[i]]++;
        }
    }
    string s = "";
    for(auto i : v2) {
        s+=i.substr(i.size()-2,2);
    }
    cout<<s<<nl;
    return 0;
}