class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
      set<int>st;
      vector<int>res;
      for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
      } 
      for(int i=1;i<=nums.size();i++){
        if(!st.count(i)) res.push_back(i);
      } 
      return res;
    }
};