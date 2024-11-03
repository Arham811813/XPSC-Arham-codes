#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    deque<int>d;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        if(val != m){
            d.push_back(val);
        }
    }
    for(int val: d){
        cout<<val<<" ";
    }
    return 0;
}