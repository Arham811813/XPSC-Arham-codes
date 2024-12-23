#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
#define ll long long
using namespace std;
const int maxel = (1LL << 15);
vector<int>allpalele;
bool check(int x){
    string s = to_string(x),t;

    t = s;
    reverse(t.begin(),t.end());
    return t == s;

    // for (int i = 0; i < s.size() / 2; i++)
    // {
    //     if(s[i] != s[s.size() - i - 1]) return false;
    // }
    // return true;
}
void work(){
    for (int i = 0; i < maxel; i++)
    {
        if(check(i)){
            allpalele.push_back(i);
        }
    }
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--) {
        work();
        // for(int val : allpalele) cout<< val<<" ";
        // nel;
        int n;
        cin>>n;
        vector<int>v(n),cnt(maxel);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            cnt[v[i]]++;
        }
        ll ans = n;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < allpalele.size(); j++)
            {
                int cur = v[i]^allpalele[j];
                ans+=cnt[cur];
            }
        }
        cout<<ans <<nl;
    }

    return 0;
}