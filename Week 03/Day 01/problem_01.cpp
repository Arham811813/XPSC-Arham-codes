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
        deque<char> s(n);
        for (int i = 0; i < n; i++)
        {
            cin>>s[i];
        }
        while (!s.empty())
        {
            if((s.front() == '1' && s.back() == '1') || s.front() == '0' && s.back() == '0'){
                break;
            }
            s.pop_front();
            s.pop_back();
        }
        cout <<s.size()<<nl;
    }
    
    return 0;
}