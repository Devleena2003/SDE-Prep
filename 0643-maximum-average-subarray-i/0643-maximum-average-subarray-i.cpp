class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double windowsum = 0;
        for(int i=0;i<k;i++){
            windowsum += nums[i];
        }
        double maxsum = windowsum;
        for(int i = k;i<nums.size();i++){
            windowsum += nums[i]-nums[i-k];
            maxsum = max(maxsum,windowsum);
        }
        return maxsum / k;
    }
};