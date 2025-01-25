class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
       int l=0,maxlen=0,zero=0;
       for(int i=0;i<nums.size();i++){
         if(nums[i]==0) zero++;

         while(zero>k){
            if(nums[l]==0) zero--;

            l++;
         }

         maxlen=max(maxlen,i-l+1);
       }

       return maxlen; 
    }
};