#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<string,int>m;
    for (int i = 0; i < n; i++)
    {
        string a;
        cin>>a;
        if (m[a] == 0)
        {
            cout <<"NO\n";
            m[a]++;
        }else{
            cout <<"YES\n";
        }
        
    }
    
    return 0;
}