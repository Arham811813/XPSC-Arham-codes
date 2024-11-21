#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        long long a,b,c,aans = 0,bans = 0;
        cin>>a>>b>>c;
        if(a == 1){
            cout<<1<<nl;
            continue;
        } 
        aans = a - 1;
        if(b > c){
            if(c == 1) bans = b - c;
            else{
                bans = b-c;
                bans+= (c - 1);
            } 
        }else if(b < c){
            bans+=(c - b);
            bans+=(c - 1); 
        }
        if(aans > bans) cout<<2<<nl;
        else if(aans == bans) cout<<3<<nl;
        else cout <<1<<nl;
    }
    return 0;
}