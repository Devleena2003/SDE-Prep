int f(int ind, int arr[], vector<int> &dp)
{
    if (ind < 0)
        return 0;
    if (dp[ind] != -1)
        return dp[ind];
    int take = arr[ind] + f(ind - 2, arr, dp);
    int notTake = 0 + f(ind - 1, arr, dp);
    return dp[ind] = max(take, notTake);
}

int FindMaxSum(int arr[], int n)
{
    // Your code here
    vector<int> dp(n, -1);
    return f(n - 1, arr, dp);
}