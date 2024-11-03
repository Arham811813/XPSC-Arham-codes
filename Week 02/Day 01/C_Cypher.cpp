#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        for (int i = 0; i < n; i++)
        {
            int m;
            cin>>m;
            string s;
            cin>>s;
            int d = 0,u = 0;
            for (int j = 0; j < m; j++)
            {
                if(s[j] != 'D'){
                    u++;
                }else{
                    d++;
                }
            }
            for (int j = 0; j < d; j++)
            {
                if (a[i] == 9)
                {
                    a[i] = 0;
                }else{
                    a[i]++;
                }
            }
            for (int j = 0; j < u; j++)
            {
                if (a[i] == 0)
                {
                    a[i] = 9;
                }else{
                    a[i]--;
                }
            }
        }
        for (int i = 0; i < n; i++)
        {
            cout <<a[i]<<" ";
        }
        cout<<nl;
    }
    
}