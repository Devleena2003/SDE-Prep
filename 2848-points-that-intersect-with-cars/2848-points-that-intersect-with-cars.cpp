class Solution {
public:
    int numberOfPoints(vector<vector<int>>& nums) {
      map<int,int>mp;
       int count=0;
       for(auto it:nums){
        for(int i=it[0]; i<=it[1];i++){
           mp[i]++; 
        }
       }
     return mp.size();
    }
};