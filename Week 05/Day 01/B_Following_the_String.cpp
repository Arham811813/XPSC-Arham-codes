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
        vector<int>v(26,0);
        string a;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            for (int i = 0; i < 26; i++)
            {
                if(v[i] == val){
                    a.push_back(char('a' + i));
                    v[i]++;
                    break;
                }
            }
            
        }
        cout<<a<<nl;
    }
    
    return 0;
}