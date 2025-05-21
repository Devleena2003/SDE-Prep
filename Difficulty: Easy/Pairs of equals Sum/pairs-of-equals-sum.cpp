class Solution {
  public:
    bool findPairs(vector<int>& arr) {
        // code here.
        map<int,int>mp;
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(mp.find(arr[i]+arr[j])!=mp.end()) return true;
                else mp[arr[i]+arr[j]]++;
            }
        }
        return false;
    }
};