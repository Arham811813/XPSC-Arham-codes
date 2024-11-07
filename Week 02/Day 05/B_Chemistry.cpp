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
        
        for (int i = 0; i < 26; i++)
        {
            if (a[i] % 2 != 0)
            {
                if(m){
                    a[i]--;
                    m--;
                }
            }
        }
        if(m){
            for (int i = 0; i < 26; i++)
            {
                if(a[i] != 0){
                    if(m >= a[i]){
                        m-= a[i];
                        a[i] = 0;
                    }else{
                        a[i]-=m;
                        m = 0;
                    }
                }
                if(!m) break;
            }
            
        }
        int odd = 0;
        for (int i = 0; i < 26; i++)
        {
            if(a[i] != 0){
                if(a[i] % 2 != 0){
                    odd++;
                }
            }
        }
        cout <<(odd > 1?"NO\n":"YES\n");
    }
}