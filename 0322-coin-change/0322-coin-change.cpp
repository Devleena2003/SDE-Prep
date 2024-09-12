class Solution {
public:
int f(vector<int>& coins, int index,vector<vector<int>>&dp, int amount){
    if(index==0){
         if(amount % coins[0] == 0)
            return amount / coins[0]; 
        else
            return 1e9; 
    }
    if(dp[index][amount]!=-1) return dp[index][amount];
    int notTake=f(coins,index-1,dp,amount);
    int take=1e9;
    if(coins[index]<=amount){
        take= 1+f(coins,index,dp,amount-coins[index]);
    }
    return dp[index][amount]=min(take,notTake);
}
    int coinChange(vector<int>& coins, int amount) {
        int n=coins.size();
     vector<vector<int>>dp(n, vector<int>(amount+1,-1));  
     int ans= f(coins,n-1,dp,amount); 
       if(ans >= 1e9)
        return -1;
    return ans;
    }
};