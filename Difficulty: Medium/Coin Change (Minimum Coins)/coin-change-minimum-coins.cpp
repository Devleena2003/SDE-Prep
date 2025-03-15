//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {

  public:
  int solve(vector<int>&coins, int target, int index, vector<vector<int>>&dp){
     if(target==0) return 0;
     if(target<0 || index==coins.size()) return 1e9;
     if(dp[index][target]!=-1) return dp[index][target];
     int include=1+ solve(coins, target-coins[index], index, dp);
     int exclude=solve(coins,target, index+1, dp);
     dp[index][target]=min(include,exclude);
     return dp[index][target];
     
  }
    int minCoins(vector<int> &coins, int target) {
        // Your code goes here
        vector<vector<int>>dp(coins.size()+1, vector<int>(target+1,-1));
        int ans=solve(coins,target,0,dp);
        if(ans==1e9) return -1;
        return ans;
        
    }
};



//{ Driver Code Starts.

int main() {
    string ts;
    getline(cin, ts);
    int t = stoi(ts);
    while (t--) {
        string ks;
        getline(cin, ks);
        int k = stoi(ks);
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        Solution obj;
        int res = obj.minCoins(arr, k);
        cout << res << endl;
        cout << "~" << endl;
    }
    return 0;
}

// } Driver Code Ends