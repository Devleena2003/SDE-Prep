class Solution {
public:
    int maxAbsoluteSum(vector<int>& nums) {
         int prefixSum = 0;
        int minPrefixSum = 0;
        int maxPrefixSum = 0;
        int maxAbsoluteSum = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefixSum += nums[i]; 
            
           
            maxAbsoluteSum = max(maxAbsoluteSum, abs(prefixSum - minPrefixSum));
            maxAbsoluteSum = max(maxAbsoluteSum, abs(prefixSum - maxPrefixSum));
            
           
            minPrefixSum = min(minPrefixSum, prefixSum);
            maxPrefixSum = max(maxPrefixSum, prefixSum);
        }

        return maxAbsoluteSum;
    }
};