

class Solution {
    // Function to find the leaders in the array.
  public:
    vector<int> leaders(vector<int>& arr) {
        // Code here
        vector<int>res;
        int n=arr.size();
        int max=arr[n-1];
        for(int i=n-1;i>=0;i--){
            if(arr[i]>=max){
                res.push_back(arr[i]);
                max=arr[i];
            }
        }
        
        reverse(res.begin(),res.end());
        
        return res;
    }
};