#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    int n;
    cin>>n;
    cin.ignore();
    map<string,int> m;
    while (n--){
        string s;
        getline(cin,s);
        m[s] ++;
    }
    int sum = 0;
    for(auto [x,y] : m){
        if(y != 0){
            sum++;
            m[x] = 0;
        }
    }
    cout <<sum<<nl;
    return 0;
}