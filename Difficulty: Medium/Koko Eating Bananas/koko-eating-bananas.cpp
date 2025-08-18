class Solution {
  public:
  int func(vector<int>& arr, int mid){
      int  ans=0;
      for(int i=0;i<arr.size();i++){
          ans+=ceil((double)(arr[i])/(double)(mid));
      }
      return ans;
  }
    int kokoEat(vector<int>& arr, int k) {
        // Code here
        int low=1;
        int high=*max_element(arr.begin(),arr.end());
        while(low<=high){
            int mid=(low+high)/2;
            int hourly=func(arr,mid);
            if(hourly>k) low=mid+1;// inc the rate
            else high=mid-1;
            
        }
        return low;
    }
};