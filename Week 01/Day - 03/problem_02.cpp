#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    while (n--)
    {
        int t;
        cin>>t;
        cin.ignore();
        string s;
        cin>>s;
        int f =-1 ,l = -1;
        bool ff = false;
        for (int i = 0; i < t; i++)
        {
            if(!ff && s[i] == 'B'){
                f = i;
                ff = true;
            }else if(s[i] == 'B')
            {
                l = i;
            }
        }
        if(l == -1){
            cout <<"1\n";
            continue;
        }
        int sum= 0;
        for (int i = f; i <= l; i++)
        {
            sum++;
        }
        cout <<sum<<nl;
    }
    
    return 0;
}