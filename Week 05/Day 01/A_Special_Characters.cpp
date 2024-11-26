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
        if(n % 2 == 0){
            cout<<"YES\n";
            int plu = 0,add = 0;
            for (int i = 0; i < n; i++)
            {
                if(plu == 2){
                    add++;
                    cout<<char('A'+add);
                    plu = 0;
                }else{
                    cout<<char('A'+add);
                }
                plu++;
            }
            nel;
        }else{
            cout<<"NO\n";
        }
    }
    return 0;
}