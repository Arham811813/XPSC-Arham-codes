#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    multiset<int>m;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        m.insert(val);
    }
    int solve = 0,i = 1;
    while (!m.empty())
    {
        auto lb = m.lower_bound(i);
        if(lb != m.end()){
            solve++;
            m.erase(lb);
        }else{
            break;
        }
        i++;
    }
    cout<<solve<<nl;
    return 0;
}