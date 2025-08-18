class Solution {
  public:
  int func(vector<int>& arr, int day, int k) {
    int bouquets = 0;  
    int count = 0;     

    for (int bloom : arr) {
        if (bloom <= day) {   // flower bloomed
            count++;
            if (count == k) {   // bouquet formed
                bouquets++;
                count = 0;     // reset for next bouquet
            }
        } else {
            count = 0; // streak broken
        }
    }
    return bouquets;
}
    int minDaysBloom(vector<int>& arr, int k, int m) {
        // Code here
        int low=*min_element(arr.begin(),arr.end());
        int high=*max_element(arr.begin(),arr.end());
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            int possible=func(arr,mid,k);
           if(possible>=m){
               ans=mid;
               high=mid-1;
           }else{
               low=mid+1;
           }
            
        }
        return ans;
    }
};