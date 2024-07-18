class Solution
{
public:
    int func(int start, int end, string &s, vector<vector<int>> &dp)
    {
        if (start > end)
            return 0;
        if (dp[start][end] != -1)
            return dp[start][end];
        int include = 0;
        int exclude = 0;
        if (s[start] == s[end])
        {
            if (start == end)
            {
                include = max(include, 1 + func(start + 1, end - 1, s, dp));
            }
            else
            {
                include = max(include, 2 + func(start + 1, end - 1, s, dp));
            }
        }
        else
        {
            exclude = max(func(start + 1, end, s, dp), func(start, end - 1, s, dp));
        }
        return dp[start][end] = max(include, exclude);
    }

    int longestPalindromeSubseq(string s)
    {
        int n = s.length();
        vector<vector<int>> dp(n + 1, vector<int>(n + 1, -1));
        return func(0, n - 1, s, dp);
    }
};