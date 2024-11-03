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

        if(n != 5){
            cout <<"NO\n";
        }else{
            bool T = false,I = false,m = false,u = false,r = false;
            int c= 0;
            for (int i = 0; i < 5; i++)
            {
                if(s[i] == 'T' || s[i] == 'i' || s[i] == 'm' || s[i] == 'u' || s[i] == 'r'){
                    
                    if (s[i] == 'T')
                    {
                        if (!T)
                        {
                            T = true;
                            c++;
                        }
                    }else if(s[i] == 'i'){
                        if (!I)
                        {
                            I = true;
                            c++;
                        }
                    }else if(s[i] == 'm'){
                        if (!m)
                        {
                            m = true;
                            c++;
                        }
                    }else if(s[i] == 'u'){
                       if (!u)
                        {
                            u = true;
                            c++;
                        } 
                    }if(s[i] == 'r'){
                       if (!r)
                        {
                            r = true;
                            c++;
                        } 
                    }
                } 
            }
            if (c != 5)
            {
                cout<<"NO\n";
            }else{
                cout <<"YES\n";
            }
            
        }
            
    }
    return 0;
}