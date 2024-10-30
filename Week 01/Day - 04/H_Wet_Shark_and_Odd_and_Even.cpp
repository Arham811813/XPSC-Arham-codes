#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<ll> a(n);
    ll sum = 0;
    int ood = 0;
    int even = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
        sum+=a[i];
        if(a[i] % 2 == 0){
            even ++;
        }else{
            ood++;
        }
    }
    if(sum % 2 == 0){
        cout << sum<<nl;
    }else{
        ll sm = 0;
        if(ood % 2 != 0 && ood != 1){
            ood--;
            sort(a.rbegin(),a.rend());            
            for (int i = 0; i < n; i++)
            {
                if(ood == 0) break;
                if(a[i] % 2 != 0){
                    sm+=a[i];
                    ood--;
                }
            }
            for (int i = 0; i < n; i++)
            {
                if(a[i] % 2 == 0){
                    sm+=a[i];
                }
            }
            cout<<sm<<nl;
        }else{
            for (int i = 0; i < n; i++)
            {
                if(a[i] % 2 == 0){
                    sm+=a[i];
                }
            }
            cout <<sm<<nl;
        }
    }
    return 0;
}