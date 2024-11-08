#include <bits/stdc++.h>
#define nl '\n'
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        ll sum = 0;
        cin>>n;
        multiset<int>s;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin>>val;
            if (val != 0) {
                s.insert(-val);
            }else{
                if(!s.empty()) {
                    sum+=-*s.begin();
                    s.erase(s.begin());
                }
            }
        }
        cout <<sum<<nl;
    }
    return 0;
}