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
        string a;
        cin>>a;
        int l = 0;
        int chec[2] = {0};
        char r = a[l];
        chec[r - '0']++;
        l++;
        while (l < n)
        {
            if(a[l] != r){
                r = a[l];
                chec[r - '0']++;
            }
            l++;
        }
        cout<<min(chec[0],chec[1])<<nl;
    }
    
    return 0;
}