// User function template for C++
class Solution {
  public:
    /* Returns count of pairs with difference k  */
    int countPairs(vector<int>& arr, int k) {
        // code here
        int c=0;
        unordered_map<int,int>mp;
        for(int i=0;i<arr.size();i++) mp[arr[i]]++;
        for(int i=0;i<arr.size();i++){
           
           int sum=arr[i]+k;
            if(mp.find(sum)!=mp.end() ){
                c+=mp[sum];
            }
        }
        return c;
    }
};