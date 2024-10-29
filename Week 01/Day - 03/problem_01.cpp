#include <bits/stdc++.h>
#define nl '\n'
using namespace std;
int main(){
    int n;
    cin>>n;
    list<int> a;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        a.push_back(val);
    }
    int f1 = 0;
    int f2 = 0;
    for (int i = 0; i < n; i++)
    {
        if(i % 2 == 0){
            if(a.front() > a.back()){
                f1+=a.front();
                a.pop_front();
            }else{
                f1+=a.back();
                a.pop_back();
            }
        }else{
            if(a.front() > a.back()){
                f2+=a.front();
                a.pop_front();
            }else{
                f2+=a.back();
                a.pop_back();
            }
        }
    }
    cout <<f1<<" "<<f2<<nl;
}