long long int solve(int coins[], int i, int n, int sum, vector<vector<long long int>> &dp)
{
    if (sum < 0 || i >= n)
    {
        return 0;
    }
    if (sum == 0)
    {
        return 1;
    }
    if (dp[i][sum] != -1)
    {
        return dp[i][sum];
    }

    // Count the solutions including coins[i] and excluding coins[i]
    dp[i][sum] = solve(coins, i, n, sum - coins[i], dp) + solve(coins, i + 1, n, sum, dp);

    return dp[i][sum];
}
long long int count(int coins[], int N, int sum)
{

    // code here.

    vector<vector<long long int>> dp(N, vector<long long int>(sum + 1, -1));
    return solve(coins, 0, N, sum, dp);
}