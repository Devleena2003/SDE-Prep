// User function template for C++
class Solution {
  public:
    vector<int> getStar(vector<int>& arr) {
        // code here
        int max=INT_MIN;
        int n=arr.size();
        vector<int>res;
        for(int i=n-1;i>=0;i--){
            if(max<arr[i]) {
                max=arr[i]; 
                res.push_back(max);
            }
        }
        reverse(res.begin(),res.end());
        return res;
    }
};