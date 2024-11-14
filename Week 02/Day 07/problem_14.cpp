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
        multiset<int>ml;
        map<int,int>m;
        while (n--)
        {
            int val;
            cin>>val;
            ml.insert(val);
        }
        for(auto x : ml){
            m[x]++;
        }
        int count = 0;
        int c = -1,c1 = -1;
        for(auto [x,y] : m){
            if(c != -1){
                if(c+1 == x){
                    if(y > c1){
                        int cok = y - c1;
                        count+=cok;
                        c = x;
                        c1 = y;
                    }else{
                        c = x;
                        c1 = y;
                    }
                }else{
                    c = x;
                    c1 = y;
                    count+=y;
                }
            }else{
                c = x;
                c1 = y;
                count+=y;
            }
        }
        cout <<count<<nl;
    }
    
    return 0;
}
