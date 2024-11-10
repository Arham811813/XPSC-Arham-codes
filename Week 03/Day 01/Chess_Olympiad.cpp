#include <bits/stdc++.h>
using namespace std;

int main() {
	int x,y,z;
	cin>>x>>y>>z;
	int total = x+y+z;
    float mx = x*1.0,my = y*0.5,ox = z*1.0,oy = y*0.5;
	if(total == 4){
	    if(mx+my > ox + oy){
	        cout <<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
	}else{
	    total = 4 - total;
	    float ex = float(total)*1;
	    if(mx+my+ex > ox+oy){
	        cout <<"YES\n";
	    }else{
	        cout<<"NO\n";
	    }
	}
}