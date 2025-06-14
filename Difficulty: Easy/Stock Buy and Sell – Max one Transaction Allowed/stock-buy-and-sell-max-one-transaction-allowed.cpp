class Solution {
  public:
    int maximumProfit(vector<int> &prices) {
        // code here
        int maxProfit=0;
        int profit=0;
        int buy=prices[0];
        for(int i=1;i<prices.size();i++){
            buy=min(buy,prices[i]);
            profit=prices[i]-buy;
            maxProfit=max(profit,maxProfit);
        }
        return maxProfit;
    }
};
