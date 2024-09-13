//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  int f(vector<int>&arr, int index, int &k, vector<int>&dp){
      if(index==0) return 0;
      if(dp[index]!=-1) return dp[index];
      int minCost=INT_MAX;
      for(int i=1;i<=k;i++){
          if(index-i>=0){
              int cost=abs(arr[index]-arr[index-i])+f(arr, index-i, k, dp);
               minCost=min(cost,minCost);
          }
         
      }
      return dp[index]=minCost;
  }
    int minimizeCost(vector<int>& arr, int& k) {
        // Code here
        int n=arr.size();
        vector<int>dp(n,-1);
        return f(arr, n-1,k,dp);
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
        int res = obj.minimizeCost(arr, k);
        cout << res << endl;
        // string tl;
        // getline(cin, tl);
    }
    return 0;
}

// } Driver Code Ends