#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    string s;
    cin>>s;
    int ar[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        ar[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++)
    {
        if(ar[i] == 0){
            cout <<char(i+'a')<<nl;
            return 0;
        }
    }
    cout <<"None\n";
}