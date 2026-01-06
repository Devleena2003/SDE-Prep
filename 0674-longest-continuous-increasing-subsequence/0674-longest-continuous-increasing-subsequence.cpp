class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
       int len=1;
       int maxLen=1;
       for(int i=0;i<nums.size()-1;i++){
        if(nums[i]<nums[i+1]){
            len++;
            maxLen=max(maxLen,len);
        } else {
            len=1;
        }
       } 
       return maxLen;
    }
};