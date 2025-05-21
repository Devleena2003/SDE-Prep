class Solution {
  public:
    // Function to find all pairs with given sum.
    vector<pair<int, int>> allPairs(int target, vector<int> &arr1, vector<int> &arr2) {
        // Code here
        int n=arr1.size();
        int m=arr2.size();
       vector<pair<int,int>>ans;
       sort(arr1.begin(),arr1.end());
       unordered_map<int,int>mp;
       for(int i=0;i<m;i++){
           mp[arr2[i]]++;
       }
       for(int i=0;i<n;i++){
           int diff=target-arr1[i];
           if(mp.find(diff)!=mp.end()){
               int c=mp[diff];
               while(c>0){
                   ans.push_back({arr1[i],diff});
                   c--;
               }
           }
       }
       return ans;
    }
};