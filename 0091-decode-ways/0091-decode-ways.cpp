class Solution {
public:
 int decodeWays(string& s, int i,vector<int>& memo) {
        if (i == s.length()) {
            return 1;  // Successfully decoded the entire string
        }

        if (s[i] == '0') {
            return 0;  // Strings starting with '0' cannot be decoded
        }

        if (memo[i] != -1) {
            return memo[i];  // Return previously computed result
        }

        // Decode single digit
        int res = decodeWays(s, i + 1, memo);

        // Decode two digits
        if (i < s.length() - 1) {
            int twoDigits = std::stoi(s.substr(i, 2));
            if (10 <= twoDigits && twoDigits <= 26) {
                res += decodeWays(s, i + 2, memo);
            }
        }

        memo[i] = res;  // Store the result in memo array

        return res;
    }
    int numDecodings(string s) {
         int n = s.length();
        vector<int> memo(n, -1);  // Initialize memoization array with -1

        return decodeWays(s, 0, memo);
    }
};