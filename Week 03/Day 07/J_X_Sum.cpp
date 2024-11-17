#include <bits/stdc++.h>
#define nl '\n'
#define nel cout<<nl
using namespace std;
int n,m;
int a[201][201];
int ax[] = {-1,1,-1,1};
int ay[] = {-1,1,1,-1};
bool check(int i,int j) {
    return i >= 0 && i < n && j >= 0 && j < m;
}
long long sseah(int i ,int j){
    long long ans = 0;
    ans+=a[i][j];
    queue<pair<int,int>>q;
    for (int k = 0; k < 4; k++) {
        q.push({i,j});
        while (!q.empty()) {
            int xx = ax[k], yy = ay[k];
            pair<int,int>p = q.front();
            q.pop();
            if(check(xx+p.first,yy+p.second)) {
                ans+=a[xx+p.first][yy+p.second];
                q.push({xx+p.first,yy+p.second});
            }
        }
        
    }
    return ans;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while (t--)
    {
        cin>>n>>m;
        long long mx = 0;
        memset(a,-1,sizeof(a));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin>>a[i][j];
            }
        }
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                mx = max(mx,sseah(i,j));
            }
        }
        cout<<mx<<nl;
    }
    return 0;
}