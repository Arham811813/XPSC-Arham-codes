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
        int n;
        cin>>n;
        string a,b,c;
        cin>>a>>b>>c;
        bool f = false;
        for (int i = 0; i < n; i++)
        {
            if(a[i] != c[i] && b[i] != c[i]){
                f = true;
            }
        }
        cout<<(f ? "YES\n" : "NO\n");
    }
    return 0;
}