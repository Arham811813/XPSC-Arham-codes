#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    while (n--)
    {
        string s;
        cin >> s;
        // cout <<s<<nl;
        vector<char> v;
        if (s.size() == 1)
        {
            if (s[0] == 'z')
            {
                s.push_back(s.back() - 1);
            }
            else if (s[0] == 'a')
            {
                s.push_back(s[0] + 1);
            }
            else
            {
                s.push_back(s[0] + 1);
            }
            cout << s << nl;
            continue;
        }
        bool f = false;
        for (int i = 0; i < s.size(); i++)
        {
            if (!v.empty())
            {
                if (!f)
                {
                    if (v.back() == s[i])
                    {
                        if (v.back() == 'z')
                        {
                            v.push_back(v.back() - 1);
                        }
                        else if (v.back() == 'a')
                        {
                            v.push_back(v.back() + 1);
                        }
                        else
                        {
                            v.push_back(v.back() + 1);
                        }
                        v.push_back(s[i]);
                        f = true;
                    }
                    else
                    {
                        v.push_back(s[i]);
                    }
                }
                else
                {
                    v.push_back(s[i]);
                }
            }
            else
            {
                v.push_back(s[i]);
            }
        }
        if (!f)
        {
            if (v.back() == 'z')
            {
                v.push_back(v.back() - 1);
            }
            else if (v.back() == 'a')
            {
                v.push_back(v.back() + 1);
            }
            else
            {
                v.push_back(v.back() + 1);
            }
        }
        for (char c : v)
        {
            cout << c;
        }
        cout << nl;
    }

    return 0;
}