class Solution {
  public:
  int f(vector<int>& arr, int mid){
      int timeReq=1;
      int boardCount=0;
      for(int i=0;i<arr.size();i++){
          if(boardCount+arr[i]<=mid){
            boardCount+=arr[i];
            
          }else{
              timeReq++;
              boardCount=arr[i];
          }
      }
      return timeReq;
      
  }
    int minTime(vector<int>& arr, int k) {
        // code here
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        while(low<=high){
            int mid=low+(high-low)/2;
            int t=f(arr,mid);
            if(t>k){
                low=mid+1;
            }
            else high=mid-1;
        }
        return low;
    }
};