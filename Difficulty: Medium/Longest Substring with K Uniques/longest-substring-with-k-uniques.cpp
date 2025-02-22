//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int longestKSubstr(string &s, int k) {
        // your code here
        map<char,int>mp;
        int maxL=-1;
        int i=0;
        for(int j=0;j<s.length();j++){
            mp[s[j]]++;
            if(mp.size()>k){
                mp[s[i]]--;
                if(mp[s[i]]==0) mp.erase(s[i]);
                i++;
                
            }
           if(mp.size()==k) maxL=max(maxL,j-i+1);
            
        }
        return maxL;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;

        cout << "~"
             << "\n";
    }
}

// } Driver Code Ends