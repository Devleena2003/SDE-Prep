// User function template for C++
class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
     
       int n=arr.size();
       int low=0;
       int high=n-1;
       int index=0;
       int ans=INT_MAX;
       while(low<=high){
           int mid=low+(high-low)/2;
           //if left part sorted
           if(arr[low]<=arr[mid]){
               //additionally ans is lying between this
               if(arr[low]<=ans){
               ans=arr[low];
               index=low;
               }
                low=mid+1;
           }
           else{
               if(arr[mid]<=ans){
                   ans=arr[mid];
                   index=mid;
               }
               high=mid-1;
           }
          
       }
       
       
       return index;
    }
    
    
};