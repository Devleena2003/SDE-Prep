class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
      
       sort(nums.begin(),nums.end());
        int closestSum=nums[0]+nums[1] +nums[2];
       int n=nums.size();
       for(int i=0;i<n-2;i++){
             int j=i+1;
             int k=n-1;
             while(j<k){
            int currS=nums[i]+nums[j]+nums[k];
            if(abs(currS-target)<abs(closestSum-target)){
               closestSum=currS;
            } else if(currS-target<0){
                j++;
            }else k--;
             }
       }
       return closestSum;
    }
};