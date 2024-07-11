int maxProfit(vector<int> &prices)
{
    int mx = 0;
    int minSoFar = prices[0];
    for (int i = 0; i < prices.size(); i++)
    {
        minSoFar = min(minSoFar, prices[i]);
        int profit = prices[i] - minSoFar;
        mx = max(profit, mx);
    }
    return mx;
}