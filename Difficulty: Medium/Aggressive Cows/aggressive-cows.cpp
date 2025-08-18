class Solution {
  public:
  bool f(vector<int> &stalls, int dist, int k){
      int count=1;
      int last=stalls[0];
      for(int i=1;i<stalls.size();i++){
          if(stalls[i]-last>=dist){
              count++;
              last=stalls[i];
          }
          if(count>=k) return true;
      }
      return false;
  }
    int aggressiveCows(vector<int> &stalls, int k) {
        // code here
       sort(stalls.begin(),stalls.end());
       int n=stalls.size();
       //bs on distance
       int low=1;
       int high=stalls[n-1]-stalls[0];
       while(low<=high){
           int mid=(low+high)/2;
           if(f(stalls,mid,k)) low= mid+1;
           else high=mid-1;
           
       }
       return high;
    }
};