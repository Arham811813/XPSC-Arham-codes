#include<bits/stdc++.h>
#define nl "\n"
using namespace std;
int main(){
    int a,b;
    cin>>a>>b;
    if (a == b)
    {
        cout << a+b<<nl;
    }else if( a > b){
        int sum = 0;
        sum+=a;
        a--;
        if(a < b){
            sum+=b;
        }else{
            sum+=a;
        }
        cout <<sum<<nl;
    }else{
        int sum = 0;
        sum+=b;
        b--;
        if(a > b){
            sum+=a;
        }else{
            sum+=b;
        }
        cout <<sum<<nl;
    }
    
}