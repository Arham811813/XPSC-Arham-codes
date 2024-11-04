#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        string a;
        string b;
        cin>>a>>b;
        bool f = true;
        for (int i = 0; i < n; i++) {
            if (a[i] != b[i]) {
                if ((a[i] == 'R' || b[i] == 'R')){
                    f = false;
                }                
            }
        }
        if (f){
            cout<<"YES\n";
        }else{
            cout <<"NO\n";
        }
    }
    return 0;
}