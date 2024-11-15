//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	int search(string pat, string txt) {
	    int chrr[26] = {0},charr[26]= {0};
	    for(int i = 0;i < pat.size();i++){
	        chrr[pat[i] - 'a']++;
	    }
	    int l = 0 , r = 0,ans = 0;
	    while(l < txt.size()){
	        charr[txt[l]-'a']++;
	        if(l-r+1 == pat.size()){
	            bool f = true;
	            for(int i = 0 ; i < 26;i++){
	                if(chrr[i] != 0){
	                    if(chrr[i] != charr[i]){
	                        f = false;
	                    }
	                }
	            }
	            if(f) ans++;
	            charr[txt[r] - 'a']--;
	            r++;
	        }
	        l++;
	    }
	    return ans;
	}

};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string pat, txt;
        cin >> txt >> pat;
        Solution ob;
        auto ans = ob.search(pat, txt);
        cout << ans << "\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Ends