class Solution {
public:
    int minOperations(vector<int>& nums) {
       int cnt = 0;
      
        for (int i = 0; i <= nums.size() - 3; i++) {
        
            if (nums[i] == 1) {
                continue;
            } else {
                cnt++; 
            }
            for (int j = i; j < i + 3; j++) {
                if (nums[j] == 1) {
                    nums[j] = 0;
                } else {
                    nums[j] = 1; 
                }
            }
        }

        
        for (auto i : nums) {
            if (i == 0)
                return -1; 
        }

        return cnt; 
    }
};