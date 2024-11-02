#include <bits/stdc++.h>
#define nl '\n'
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
        string s;
        cin>>s;
        set<char>c;
        for (int i = 0; i < s.size(); i++)
        {
            c.insert(s[i]);
        }
        deque<char> ss;
        for(char c: c){
            ss.push_back(c);
        }
        while (ss.size() != 0 && ss.size() != 1)
        {
            char fc = ss.front();
            char lc = ss.back();
            ss.pop_back();
            ss.pop_front();
            for (int i = 0; i < s.size(); i++)
            {
                if (s[i] == fc)
                {
                    s[i] = lc;
                }else if(s[i] == lc){
                    s[i] = fc;
                }  
            }
        }
        cout <<s<<nl;
    }
    
    return 0;
}