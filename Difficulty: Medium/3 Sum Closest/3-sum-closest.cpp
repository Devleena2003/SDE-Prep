// User function Template for C++

class Solution {
  public:
    int closest3Sum(vector<int> &arr, int target) {
        // code here
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int ans=0;
        int minDiff=INT_MAX;
        for(int i=0;i<n-2;i++){
           int l=i+1,r=n-1;
           while(l<r){
               int curr=arr[i]+arr[l]+arr[r];
               if(abs(curr-target)<minDiff){
                   minDiff=abs(curr-target);
                   ans= curr;
               }
               else if(abs(curr-target)==minDiff){
                   ans=max(ans,curr);
               }
               if(curr>target) r--;
              else l++;
           }
        }
        return ans;
    }
};