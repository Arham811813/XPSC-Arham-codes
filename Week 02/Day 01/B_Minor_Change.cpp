#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    string a,b;
    cin>>a>>b;
    int count = 0;
    for (int i = 0; i < a.size() ; i++)
    {
        if(a[i] != b[i]){
            count++;
        }
    }
    cout <<count<<nl;
    return 0;
}