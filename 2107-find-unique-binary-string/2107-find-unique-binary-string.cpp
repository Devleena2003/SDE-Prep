class Solution {
public:

 void generateBinaryStrings(int i, int n, string &ans, unordered_set<string> &existing, string &result) {
        if (i == n) {
          
            if (existing.find(ans) == existing.end()) {
                result = ans;
            }
            return;
        }
       
        if (!result.empty()) return;

       
        ans[i] = '0';
        generateBinaryStrings(i + 1, n, ans, existing, result);

      
        ans[i] = '1';
        generateBinaryStrings(i + 1, n, ans, existing, result);
    }

    string findDifferentBinaryString(vector<string> &nums) {
        int n = nums.size();
        unordered_set<string> existing(nums.begin(), nums.end());  
        string ans(n, '0');  
        string result = "";

        generateBinaryStrings(0, n, ans, existing, result);
        return result;
    }
};