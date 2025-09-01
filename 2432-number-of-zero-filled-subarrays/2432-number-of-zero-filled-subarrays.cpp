class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
        int s=0;
        long long c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0) {
                s++;
                c+=s;
            }else s=0;
        }
return c;
    }
};