class Solution {
public:
int f( vector<int>& prices, int n ,int ind, int buy, int cap, vector<vector<vector<int>>>&dp ){
    if(ind==n || cap==0) return 0;
    if(dp[ind][buy][cap]!=-1) return dp[ind][buy][cap];
    int profit=0;
    if(buy==0){
        profit=max(-prices[ind]+f(prices,n, ind+1, 1, cap,dp), f(prices,n, ind+1,0,cap,dp));
    }
    if(buy==1){
        profit=max(+prices[ind]+f(prices,n, ind+1, 0, cap-1,dp), f(prices,n, ind+1,1,cap,dp));
    }
    return dp[ind][buy][cap]=profit;
}
    int maxProfit(int k, vector<int>& prices) {
      //create a 3d dp table
      int n=prices.size();
      vector<vector<vector<int>>>dp(n,vector<vector<int>>(2, vector<int>(k + 1, -1))); 
      return f(prices,n, 0,0, k,dp);
    }
};