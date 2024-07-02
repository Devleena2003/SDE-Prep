int mod = 1000000007;

public:
int solve(int ind, int sum, int arr[], vector<vector<int>> &dp)
{
    // base case
    //    if (sum == 0) return 1;  // If sum is 0, there's one way (empty subset)
    //  if (ind < 0) return 0;   // No elements left to process

    // here we don't think about base case  of zeros
    if (ind == 0)
    {
        if (sum == 0 && arr[0] == 0)
            return 2;
        if (sum == 0 || sum == arr[0])
            return 1;
        return 0;
    }
    if (dp[ind][sum] != -1)
        return dp[ind][sum]; // Return memoized result

    int notpick = solve(ind - 1, sum, arr, dp);

    // Include the current element if it does not exceed the sum
    int pick = 0;
    if (arr[ind] <= sum)
    {
        pick = solve(ind - 1, sum - arr[ind], arr, dp);
    }

    // Store the result in the DP table
    return dp[ind][sum] = (notpick + pick) % mod;
}
int perfectSum(int arr[], int n, int sum)
{
    // Your code goes here
    vector<vector<int>> dp(n, vector<int>(sum + 1, -1));

    return solve(n - 1, sum, arr, dp);
}