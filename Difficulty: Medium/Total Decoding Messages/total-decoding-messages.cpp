//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {
  public:
  int f(int index, string &digits,vector<int>&dp){
      if(index==digits.length()) return 1;
      if(digits[index]=='0') return 0;
      if(dp[index]!=-1) return dp[index];
      int ways=f(index+1,digits,dp);
      if(index+1<digits.length()){
          int number=(digits[index]-'0')*10+(digits[index+1]-'0');
          if(number>=10 && number<=26) ways+=f(index+2,digits,dp);
      }
    return dp[index]=ways;  
  }
    int countWays(string &digits) {
        // Code here
        if(digits.empty()|| digits[0]=='0') return 0;
        vector<int>dp(digits.size(),-1);
        return f(0,digits,dp);
    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    cin.ignore();
    while (tc--) {
        string digits;
        getline(cin, digits);
        Solution obj;
        int ans = obj.countWays(digits);
        cout << ans << "\n";

        cout << "~"
             << "\n";
    }
    return 0;
}
// } Driver Code Ends