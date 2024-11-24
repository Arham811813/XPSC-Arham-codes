#include <bits/stdc++.h>
#define nl '\n'
#define nel cout << nl
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c;
        cin >> a >> b >> c;
        vector<int> v(c),t;
        for (int i = 0; i < c; i++)
        {
            cin >> v[i];
            if (v[i]+1 <= a)
            {
                b+=v[i];
            }else{
                b+=a-1;
            }
        }
        cout<<b<<nl;
    }

    return 0;
}