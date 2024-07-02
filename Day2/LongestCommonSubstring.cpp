int longestCommonSubstr(string s1, string s2, int n, int m)
{
    // your code here

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));

    // Base cases
    for (int j = 0; j <= m; j++)
        dp[0][j] = 0;
    for (int i = 0; i <= n; i++)
        dp[i][0] = 0;

    // States
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= m; j++)
        {

            if (s1[i - 1] == s2[j - 1])
            {
                dp[i][j] = 1 + dp[i - 1][j - 1];
            }
            else
            {
                dp[i][j] = 0;
            }
        }
    }

    int maxi = -1e9;
    for (int i = 1; i <= n; i++)
    {

        for (int j = 1; j <= m; j++)
        {

            if (dp[i][j] > maxi)
                maxi = dp[i][j];
        }
    }

    return maxi;
}