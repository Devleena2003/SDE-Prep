class Solution {
public:
    int peopleAwareOfSecret(int n, int delay, int forget) {
        const int MOD = 1e9 + 7;
        vector<long long> dp(n + 1, 0); 
        dp[1] = 1; // Day 1: one person knows the secret

        long long share = 0; 

        for (int day = 2; day <= n; day++) {
            // Add people who can start sharing today
            if (day - delay >= 1) {
                share = (share + dp[day - delay]) % MOD;
            }
            // Remove people who forget today
            if (day - forget >= 1) {
                share = (share - dp[day - forget] + MOD) % MOD;
            }
            // People who learn the secret today
            dp[day] = share;
        }

        long long result = 0;
        // Count people who still remember at the end of day n
        for (int day = n - forget + 1; day <= n; day++) {
            if (day >= 1) result = (result + dp[day]) % MOD;
        }
        return result;
    }
};