class Solution {
public:
int helper(vector<int>& nums, int k){
    int l=0;
    int c=0;
    int ans=0;
    for(int r=0;r<nums.size();r++){
        if(nums[r]%2==1) c++;
        while(c>k){
            if(nums[l]%2==1) c--;
            l++;
        }
        ans+=r-l+1;

    }
    return ans;
}
    int numberOfSubarrays(vector<int>& nums, int k) {
       return helper(nums,k)-helper(nums,k-1); 
    }
};