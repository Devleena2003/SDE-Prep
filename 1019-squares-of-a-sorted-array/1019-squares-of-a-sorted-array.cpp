class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
       int s=0;
       int n=nums.size();
       int e=n-1;
       vector<int>ans(n);
       for(int i=n-1;i>=0;i--){
        if(abs(nums[s])>=abs(nums[e])){
            ans[i]=nums[s]*nums[s];
            s++;
        } else{
ans[i]=nums[e]*nums[e];
e--;
        } 
       } 
       return ans;
    }
};