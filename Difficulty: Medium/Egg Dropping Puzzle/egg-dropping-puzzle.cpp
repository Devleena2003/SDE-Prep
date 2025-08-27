class Solution {
  public:
  int solve(int eggs, int floors, vector<vector<int>>&dp){
   if(floors==0 || floors==1) return floors; 
   if(eggs==1) return floors;
   if(dp[eggs][floors]!=-1) return dp[eggs][floors];
   int low=1;
   int high=floors;
   int ans=INT_MAX;
   
   while(low<=high){
       int mid=(low+high)/2;
       int breakCase=solve(eggs-1,mid-1,dp);
       int surviveCase=solve(eggs, floors-mid,dp);
       int worst=1+max(breakCase, surviveCase);
       ans=min(ans,worst);
       if(breakCase<surviveCase) low=mid+1;
       else high=mid-1;
       
   }
   return dp[eggs][floors]=ans;
  }

    // Function to find minimum number of attempts needed in
    // order to find the critical floor.
    int eggDrop(int n, int k) {
        // code here
       vector<vector<int>>dp(n+1,vector<int>(k+1,-1)) ;
       return solve(n,k,dp);
    }
};