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
        string a, ans;
        cin >> a;
        for (int i = n - 1; i >= 0;)
        {
            if (a[i] == '0')
            {
                if(a[i-2] == '1'){
                    int l = a[i-1] - '0';
                    for (int j = 10; j <= 19; j++)
                    {
                        if(j % 10 == l) {
                            l = j;
                            break;
                        }
                    }
                    l--;
                    ans.push_back('a' + l);
                }else{
                    int l = a[i-1] - '0';
                    for (int j = 20; j <= 26; j++)
                    {
                        if(j % 10 == l) {
                            l = j;
                            break;
                        }
                    }
                    l--;
                    ans.push_back('a' + l);
                }
                i-=3;
            }else{
                int l = a[i] - '0';
                l--;
                ans.push_back('a' + l);
                i--;
            }
        }
        reverse(ans.begin(),ans.end());
        cout << ans << nl;
    }
    return 0;
}