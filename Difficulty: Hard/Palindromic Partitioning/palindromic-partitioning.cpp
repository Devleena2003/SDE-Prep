//{ Driver Code Starts
// Initial Template for c++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
int minPartitions(int i, string &str, int  n,vector<int>&dp) {
    // Base case: If we've reached the end of the string.
    if (i == n) return 0;
    if(dp[i]!=-1) return dp[i];
    int minCost = INT_MAX;
    // Consider all possible substrings starting from the current index.
    for (int j = i; j < n; j++) {
        if (isPalindrome(i, j, str)) {
            // If the substring is a palindrome, calculate the cost and minimize it.
            int cost = 1 + minPartitions(j + 1, str,n,dp);
            minCost = min(minCost, cost);
        }
    }
    return dp[i]= minCost;
}
  bool isPalindrome( int start, int end, string s) {
    while (start <= end) {
      if (s[start++] != s[end--])
        return false;
    }
    return true;
  }
    int palindromicPartition(string str)
    {
        // code here
     int n=str.size();
     vector<int>dp(n,-1);
     
     //return cuts
        return  minPartitions(0, str, n,dp)-1;
     
      }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string str;
        cin>>str;
        
        Solution ob;
        cout<<ob.palindromicPartition(str)<<"\n";
    }
    return 0;
}
// } Driver Code Ends