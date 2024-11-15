#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    deque<int>d,b,ans;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin>>val;
        d.push_back(val);
    }
    for (int i = 0; i < m; i++)
    {
        int val;

        
        cin>>val;
        b.push_back(val);
    }
    int i = 0 ,j = 0;
    while (i < n && j < m)
    {
        if(d[i] < b[j]){
            ans.push_back(d[i]);
            i++;
        }else if(b[j] < d[i]){
            ans.push_back(b[j]);
            j++;
        }else{
            ans.push_back(d[i]);
            ans.push_back(b[j]);
            i++,j++;
        }
    }
    if(i >= n && j >= m){
        while (!ans.empty())
        {
            cout<<ans.front()<<" ";
            ans.pop_front();
        }
    }else{
        if(i >= n){
            for (int k = j; k < m; k++)
            {
                ans.push_back(b[k]);
            }
        }else{
            for(int k = i; k < n; k++){
                ans.push_back(d[k]);
            }
        }
        while (!ans.empty())
        {
            cout<<ans.front()<<" ";
            ans.pop_front();
        }
        
    }
    return 0;
}