class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
     // find a unique subarray then compute sum
    map<int,int>mp;
    int l=0;
  
    int sum=0;
    int maxSum=INT_MIN;
    for(int r=0;r<nums.size();r++){
       mp[nums[r]]++;
       sum+=nums[r];
       while(mp[nums[r]]>1){
        
        mp[nums[l]]--;
      
        sum-=nums[l];
        l++;
       }
       maxSum=max(maxSum,sum);
    }  
    return maxSum; 
    }
};