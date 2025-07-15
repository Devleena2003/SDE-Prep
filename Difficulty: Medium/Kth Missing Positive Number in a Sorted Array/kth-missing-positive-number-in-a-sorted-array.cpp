// User function template for C++

class Solution {
  public:
    int kthMissing(vector<int> &arr, int k) {
        // Your code goes here
        //brute force
      
        // for(int i=0;i<arr.size();i++){
        //     if(arr[i]<=k)k++;
        //     else break;
        // }
        // return k;
           int n = arr.size();
        
        int low = 0 , high = n - 1;
        
        while(low <= high){
            int mid = (low + high)/2;
             int missing = arr[mid] - (mid + 1);
             
             if(missing < k){
                 low = mid + 1;
             }
             
             else{
                 high = mid - 1;
             }
            
        }
        
        return k + high + 1;
    }
};