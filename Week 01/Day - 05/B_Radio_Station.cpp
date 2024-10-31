#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    map<string ,string>n;
    tuple<string,string,string>m[b];
    while (a--)
    {
        string s,ss;
        cin>>s>>ss;
        n[ss] = s;
    }
    for(int i = 0;i<b;i++)
    {
        string s,ss;
        cin>>s>>ss;
        string sos = ss;
        sos.erase(sos.begin()+sos.size()-1);
        string y = n[sos];
        string add ;
        add = '#' + y;
        m[i] = {s,ss,add};
    }
    for (int i = 0; i < b; i++)
    {
        auto [x,y,z] = m[i];
        cout <<x<<" "<<y<<" "<<z<<nl;
    }
    
    return 0;
}