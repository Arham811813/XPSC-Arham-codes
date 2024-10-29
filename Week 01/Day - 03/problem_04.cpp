#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    map<string ,string> m,n;
    while (t--)
    {
        string f,s;
        cin>>f>>s;
        if(n.find(f) != n.end()){
            string ss = n[f];
            m[ss] = s;
            n.erase(f);
            n[s] = ss;
        }else{
            m[f] = s;
            n[s] = f;
        }
    }
    
    cout<<m.size()<<nl;;
    for(auto [x,y] : m){
        cout<<x<<" "<<y<<nl;
    }
    return 0;
}