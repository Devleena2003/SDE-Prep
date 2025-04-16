class Solution {
public:
    long long countGood(vector<int>& nums, int k) {
  
        int n = nums.size();
        int i = 0, j = 0;
        long long result = 0, pairs = 0;
        unordered_map<int, int> map;

        while (j < n) 
        {
          
            pairs += map[nums[j]];

            map[nums[j]]++;

            while (pairs >= k) 
            {
           
                result += (n - j);

              
                map[nums[i]]--;
                pairs -= map[nums[i]]; 
                i++;
            }

            j++;
        }

        return result;
    }
};