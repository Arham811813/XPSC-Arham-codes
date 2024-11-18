#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int R,C;
    cin>>R>>C;
    if (R - C >= 18){
        cout<<"RCB\n";
    }else{
        cout<<"CSK\n";
    }
    return 0;
}