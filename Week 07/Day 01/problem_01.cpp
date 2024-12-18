#include <bits/stdc++.h>
#define nl '\n'
#define nel cout << nl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    bool f = false;
    for (int i = 0; i < (1 << n); i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if((i>>j) & 1) {
                ans+=v[j];
            }else{
                ans-=v[j];
            }
        }
        if(ans % 360 == 0) f = true;
    }
    cout<<(f ?"YES\n":"NO\n");
    return 0;
}