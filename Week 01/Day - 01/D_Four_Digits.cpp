#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    string a;
    cin>>a;
    if (a.size() == 4)
    {
        cout <<a<<nl;
    }else if(a.size() == 3){
        cout <<"0"<<a<<nl;
    }else if(a.size() == 2){
        cout <<"00"<<a<<nl;
    }else if(a.size() == 1){
        cout <<"000"<<a<<nl;
    }
}