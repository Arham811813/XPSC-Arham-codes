#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int a,b;
    cin>>a>>b;
    int sum = 0;
    for (int i = a; i <= b; i++)
    {
        sum++;
    }
    cout <<sum<<nl;
    return 0;
}