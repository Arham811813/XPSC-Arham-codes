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
        int n;
        cin >> n;
        string a;
        cin >> a;
        if (n == 1)
        {
            cout << 0 << nl;
            continue;
        }
        vector<long long> v(n);
        vector<long long> dep;
        int i = 0, count = 0;
        long long ans = 0;
        while (i < n)
        {
            if (a[i] == 'L')
            {
                long long lsi = (i + 1) - 1;
                long long rsi = n - (i + 1);
                if (lsi < rsi)
                {
                    dep.push_back(rsi - lsi);
                    ans += rsi;
                    count++;
                }
                else
                {
                    ans += lsi;
                }
            }
            else
            {
                long long lsi = (i + 1) - 1;
                long long rsi = n - (i + 1);
                if (lsi > rsi)
                {
                    dep.push_back(lsi - rsi);
                    ans += lsi;
                    count++;
                }
                else
                {
                    ans += rsi;
                }
            }
            i++;
        }
        if (count < 2)
        {
            for (int i = 0; i < n; i++)
            {
                cout<<ans<<" ";
            }
            nel;
        }
        else
        {
            for (int i = count - 1; i < n; i++)
            {
                v[i] = ans;
            }
            sort(dep.rbegin(), dep.rend());
            for (int i = count - 2; i >= 0; i--)
            {
                int upt = dep.back();
                dep.pop_back();
                ans -= upt;
                v[i] = ans;
            }
            for (int i = 0; i < n; i++)
            {
                cout << v[i] << " ";
            }
            nel;
        }
    }

    return 0;
}