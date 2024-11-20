class Solution {
public:
    int jump(vector<int>& nums) {
       for (int i=1;i<nums.size();i++){
        nums[i]=max(nums[i]+i, nums[i-1]);  //rebuild the nums array
        //[2,3,1,1,4]
        // [2, 4, 4, 4, 8]
       } 
       int index,ans=0;
       while(index<nums.size()-1){
        ans++;
        index=nums[index];
       }
       return ans;
    }
};