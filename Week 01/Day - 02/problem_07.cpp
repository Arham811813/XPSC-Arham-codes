#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    map<string,int>m;
    while (n--)
    {
        string s;
        cin>>s;
        if(m[s] == 0){
            cout<<"OK\n";
            m[s]++;
        }else{
            cout<<s<<m[s]<<nl;
            m[s]++;
        }
    }
    
    return 0;
}