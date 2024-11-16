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
        int c,o,time;
        cin>>c>>o>>time;
        vector<int>car(c),out(o);
        for (int i = 0; i < c; i++)
        {
            cin>>car[i];
        }
        for (int i = 0; i < o; i++)
        {
            cin>>out[i];
        }
        sort(car.begin(),car.end());
        sort(out.begin(),out.end());
        long long ans = 0;
        while (!car.empty() && !out.empty())
        {
            long long ca = car.back(),eng = out.back();
            car.pop_back();
            out.pop_back();
            eng = eng*(time*1LL);
            if(ca < eng){
                ans+=ca;
            }else{
                ans+=eng;
            }
        }
        cout<<ans<<nl;
    }
    
    return 0;
}