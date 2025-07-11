class Solution {
public:
int helper(vector<int>& nums, int goal){
    int l=0;
    int c=0;
    int sum=0;
    for(int r=0;r<nums.size();r++){
        sum+=nums[r];
        while(l<=r && sum>goal){
            sum-=nums[l];
            l++;
        }
        c+=(r-l+1);
    }
return c;
}
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return helper(nums,goal)-helper(nums,goal-1);
    }
};