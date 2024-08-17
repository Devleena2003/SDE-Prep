bool wordBreak(string s, vector<int> wordDict)
{
    set<string> st(wordDict.begin(), wordDict.end());
    vector<int> dp(s.size(), -1);
    return f(s, st, dp, 0);
}

bool f(string s, set<string> &st, vector<int> &dp, int index)
{
    if (index == 0)
        return true;
    if (dp[index] != -1)
        return dp[index];
    for (int i = 0; i < s.size(); i++)
    {
        if (st.count(s.substr(index, i - index + 1)) && f(s, st, dp, index + 1))
            dp[index] = true;
        return true;
    }

    return dp[index] = false;
}