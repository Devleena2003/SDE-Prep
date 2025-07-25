class Solution {
public:
    int maxSum(vector<int>& nums) {
        int sum=0;
        set<int>st;
        int maxNeg=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                st.insert(nums[i]);
            }else{
                maxNeg=max(maxNeg,nums[i]); //if all numbers are negetive  then
            }
        }
         for (auto val : st) {
            sum += val;
        }
        if (st.size())
            return sum;
        else
            return maxNeg; // if no numbers are in set
    }
};