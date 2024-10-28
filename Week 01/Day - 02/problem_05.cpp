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
        vector<string> v[3];
        vector<int>player(3,0);
        map<string,int>m;
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                string s;
                cin>>s;
                v[i].push_back(s);
                m[s]++;
            }
        }
        for (int i = 0; i < 3; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if(m[v[i][j]] == 3){
                    continue;
                }else if(m[v[i][j]] == 2){
                    player[i]++;
                }else{
                    player[i]+=3;
                }
            }
            
        }
        for(int i : player){
            cout<<i<<" ";
        }
        cout <<nl;
    }
    
    
    return 0;
}