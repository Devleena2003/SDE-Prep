class Solution {
public:
    int maxValueAfterReverse(vector<int>& nums) {
       int n=nums.size();
        int base=0;
        for(int i=0;i<nums.size()-1;i++){
            base+=abs(nums[i]-nums[i+1]);
        }
        int ans=base;
        for(int i=1;i<n;i++){
          ans=max(ans,base-abs(nums[i]-nums[i-1])+abs(nums[i]-nums[0]))  ;
           ans=max(ans,base-abs(nums[i]-nums[i-1])+abs(nums[i-1]-nums[n-1])) ;
        }
        int high = INT_MIN, low = INT_MAX;
for (int i = 0; i < n - 1; i++) {
    high = max(high, min(nums[i], nums[i + 1]));
    low = min(low, max(nums[i], nums[i + 1]));
}
ans = max(ans, base + (high - low) * 2);
return ans; 
    }
};