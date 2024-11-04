#include <bits/stdc++.h>
#define nl '\n'
#define no cout << "NO\n"
#define yes cout << "YES\n"
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        vector<int> a(26);
        for (int i = 0; i < n; i++)
        {
            a[s[i] - 'a']++;
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < 26; i++)
        {
            if (a[i] % 2 != 0)
            {
                if (m > a[i])
                {
                    m = m - a[i];
                    a[i] = 0;
                }
                else
                {
                    a[i] = a[i] - m;
                    m = 0;
                }
            }
            if (!m)
            {
                break;
            }
        }
        if (m)
        {
            for (int i = 0; i < 26; i++)
            {
                if (m > a[i])
                {
                    m = m - a[i];
                    a[i] = 0;
                }
                else
                {
                    a[i] = a[i] - m;
                    m = 0;
                }
                if (!m)
                {
                    break;
                }
            }
        }
        int oddco = 0;
        for (int i = 0; i < 26; i++)
        {
            if (a[i] % 2 != 0)
            {
                oddco++;
            }
        }
        if (oddco <= 1)
        {
            yes;
        }
        else
        {
            no;
        }
    }
}