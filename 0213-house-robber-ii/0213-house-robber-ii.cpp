class Solution {
public:

int solve(vector<int>& nums, int ind, vector<int>&dp){
    int n=nums.size()-1;
if(ind==n) return nums[n];
  if (ind > n)
            return 0;
if(dp[ind]!=-1) return dp[ind];
int pick=nums[ind]+solve(nums, ind+2, dp);
int notPick=0+solve(nums, ind+1,dp);
dp[ind]=max(pick,notPick);
return dp[ind];
}
    int rob(vector<int>& nums) {
       int n=nums.size();
       if(n==1) return nums[0];
       int ans;
       vector<int>dp1(n,-1);
       vector<int>dp2(n,-1);
       vector<int>first,second;
       for(int i=0;i<n;i++){
        if(i!=n-1)
        first.push_back(nums[i]);

        if(i!=0)
        second.push_back(nums[i]);
       }

       ans=max(solve(first,0,dp1),solve(second,0,dp2));
       return ans;
    }
};