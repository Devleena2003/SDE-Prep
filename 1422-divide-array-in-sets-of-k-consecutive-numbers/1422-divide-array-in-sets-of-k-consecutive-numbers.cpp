class Solution {
public:
    bool isPossibleDivide(vector<int>& nums, int k) {
      int n=nums.size();
      sort(nums.begin(),nums.end());
      if(n%k!=0) return false;

      unordered_map<int,int>mp;
        for(auto it: nums){
            mp[it]++;
        }

        for(auto it:nums){
            if(mp[it]>0){
                for(int i=0;i<k;i++){
                    if(mp[it+i]==0) return false;

                    mp[it+i]--;
                }
            }
        }
        return true;
    }
};