#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n ,m ,o ;
    long long ans = -1;
    cin>>n>>m>>o;
    int i = 2;
    while (1)
    {
        if(o > m){
            break;
        }
        if(o >= n && o <= m) {
            ans = o;
            break;
        }
        o*=i;
        i++;
    }
    cout <<ans<<nl;
    return 0;
}