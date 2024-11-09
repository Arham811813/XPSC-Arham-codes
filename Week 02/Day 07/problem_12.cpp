#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl;
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        char c;
        string s;
        cin>>n>>c>>s;
        if(c == 'g'){
            cout <<0<<nl;
            continue;
        }
        s+=s;
        set<int>ss;
        for (int i = 0; i < s.size(); i++)
        {
            if(s[i] == 'g') ss.insert(i);
        }
        int co = 0;
        for (int i = 0; i < n; i++)
        {
            if(s[i] == c) {
                auto in = ss.upper_bound(i);
                co = max(co,*in - i);
            }
        }
        cout<<co<<nl;
    }
    return 0;
}