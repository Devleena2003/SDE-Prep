int lcs(string s1, string s2)
{
    int n = s1.size();
    int m = s2.size();
    vector<vector<int>> dp(n, vector<int>(m, 0));
    return helper(n - 1, m - 1, s1, s2, dp);
}

int helper(int ind1, int ind2, string s1, string s2, vector<vector<int>> &dp)
{
    // base case

    if (ind1 < 0 || ind2 < 0)
        return 0;
    if (dp[ind1][ind2] != -1)
        return dp[ind1][ind2];

    if (s1[ind1] == s2[ind2])
    {
        return dp[ind1][ind2] = 1 + helper(ind1 - 1, ind2 - 1, s1, s2, dp);
    }
    else
        return dp[ind1][ind2] = max(helper(ind - 1, ind2, s1, s2, dp), helper(ind1, ind2 - 1, s1, s2, dp));
}