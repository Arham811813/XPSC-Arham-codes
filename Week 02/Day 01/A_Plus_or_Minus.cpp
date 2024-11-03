#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    vector<char>v;
    int n;
    cin>>n;
    while (n--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a + b != c){
            v.push_back('-');
        }else{
            v.push_back('+');
        }
    }
    for(char c:v){
        cout <<c<<nl;
    }
    return 0;
}