#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string a;
        cin>>a;
        string b = a;
        reverse(b.begin(),b.end());
        bool f = false;
        int r = a.size()-1,l = 0;
        while (l < n && r >= 0 )
        {
            if(a[l] > a[r]) {
                f = true;
                break;
            }else if(a[l] < a[r]){
                break;
            }
            l++,r--;
        }
        b+=a;
        cout<<(f == true?b:a)<<nl;
    }
    return 0;
}