#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,cust = 1;
    cin>>n;
    set<pair<int,int>>s;
    multiset<pair<int,int>>ms;
    vector<int>v;
    while (n--)
    {
        int c;
        cin>>c;
        if(c == 1){
            int money;
            cin>>money;
            s.insert({cust,money});
            ms.insert({money,-cust});
            cust++;
        }else if(c == 2){
            int pos = s.begin()->first,mo = s.begin()->second;
            s.erase({pos,mo});
            ms.erase({mo,-pos});
            v.push_back(pos);
        }else{
            int pos = -ms.rbegin()->second,mo = ms.rbegin()->first;
            s.erase({pos,mo});
            ms.erase({mo,-pos});
            v.push_back(pos);
        }
    }
    for(int i : v){
        cout<<i<<" ";
    }
    return 0;
}