#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        string a,b;
        cin>>a>>b;
        char c,d;
        c = a[a.size()-1],d = b[b.size()-1];
        if(a == b){
            cout<<"=\n";
        }else{
            if(a[a.size()-1] == b[b.size() -1]){
                if(a[a.size() - 1 ] == 'S'){
                    if(a.size() < b.size()){
                        cout<<">\n";
                    }else if(a.size() > b.size()){
                        cout <<"<\n";
                    }
                }else if(a[a.size() -1] == 'L'){
                    if(a.size() > b.size()){
                        cout<<">\n";
                    }else if(a.size() < b.size()){
                        cout<<"<\n";
                    }
                }
            }else if(a[a.size() -1] == 'L' && d == 'M'){
                cout<<">\n";
            }else if(a[a.size() -1] == 'M' && d == 'L'){
                cout<<"<\n";
            }else if(a[a.size() -1] == 'L' && d == 'S'){
                cout<<">\n";
            }else if(a[a.size() -1] == 'S' && d == 'L'){
                cout<<"<\n";
            }else if(a[a.size() -1] == 'M' && d == 'S'){
                cout<<">\n";
            }else if(a[a.size() -1] == 'S' && d == 'M'){
                cout<<"<\n";
            }
        }
    }
    
    return 0;
}